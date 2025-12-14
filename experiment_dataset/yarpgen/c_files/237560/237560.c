/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (((arr_3 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])));
        var_18 = (((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = var_7;
        arr_8 [i_1] = ((-((var_12 ? (arr_7 [i_1]) : (arr_5 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = 8497;
        var_20 = (min(var_20, ((((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2]))))));
        arr_12 [i_2] |= ((-(arr_1 [i_2] [i_2])));
    }
    var_21 = ((var_6 ? (~var_10) : (((-1 * 43) ? (-2147483647 - 1) : ((var_13 ? var_9 : -1971164918))))));
    var_22 = (min(var_6, ((((max(var_7, -9))) ? var_13 : ((10100 ? -1 : 4721092661312607925))))));
    #pragma endscop
}
