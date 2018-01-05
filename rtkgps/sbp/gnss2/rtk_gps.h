#include "gnss.h"

class RTK_GPS
{
public:
  RTK_GPS();
  ~RTK_GPS();

public:
  msg_gps_time_t     *gps_time_p;
  msg_pos_llh_t      *pos_llh_p;
  msg_baseline_heading_dep_a_t   *pos_heading_p;
  msg_imu_raw_t   *imu_data_p;
  msg_mag_raw_t   *mag_data_p;
  msg_vel_ned_t   *vel_ned_data_p;
  
  double* heading_data_p;
  double* heading_mag_p;
public:
  int  create_thread();
  int init(char* port);
//  double cal_heading(
};

