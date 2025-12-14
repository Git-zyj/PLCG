/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((max((!3304990128), -var_9)) << (var_14 / var_14)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((!(((var_0 ? (arr_1 [i_0]) : (~var_10))))));
        var_21 -= -72;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_22 = (min(var_22, (((arr_1 [i_1]) / (1073217536 & -9932)))));
        var_23 &= -var_7;
        var_24 = ((~((min(var_12, (arr_2 [2]))))));
    }
    #pragma endscop
}
