/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_2, var_9)) / var_1))));
    var_18 = (max((max(var_6, ((var_11 ? var_0 : (-127 - 1))))), ((~(max(var_2, (-2147483647 - 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, (var_14 % var_8)));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) >= var_16));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = ((((max(33554431, var_7))) ? var_6 : (((var_4 & var_1) ? ((var_15 ? var_1 : var_16)) : 2147483647))));
        var_21 = (((~(max(-19183, 1081329684)))) ^ var_2);
    }
    var_22 = var_5;

    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_23 ^= var_13;
        var_24 = ((-var_13 ? (((arr_6 [i_2 - 1]) / (var_13 & 7))) : (max(var_4, (max(var_13, var_13))))));
        arr_9 [i_2] = arr_1 [i_2] [i_2];
    }
    #pragma endscop
}
