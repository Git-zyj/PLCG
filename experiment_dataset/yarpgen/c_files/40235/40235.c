/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? (min(var_6, var_10)) : ((-6453263975331034493 ? 7353921519808590837 : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) ? -3854210976642728774 : -6453263975331034480));
        var_16 = -8170432312079253926;
        var_17 = -8170432312079253926;
    }
    var_18 = var_7;
    var_19 &= min((((var_6 - var_11) ? (max(0, 4748713690907819026)) : var_3)), ((((min(-8412939042769268132, -4245440113814334513))) ? var_5 : (max(var_12, var_13)))));
    #pragma endscop
}
