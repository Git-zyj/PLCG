/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (max((max(103, 2047)), (2047 || -1)))));
        var_13 = (max((max(5485636012309496703, 5485636012309496722)), (-2047 * 5485636012309496736)));
        arr_3 [6] |= (2036 ^ -8101065729287236749);
    }
    var_14 = var_4;
    #pragma endscop
}
