/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((max(-250904483, 1))), ((var_7 ? var_5 : var_9))))) ? var_13 : 12));
    var_16 = (max(var_16, ((-1490425716322879585 || (((-((var_4 ? var_7 : var_1)))))))));
    var_17 &= ((31 ? (max((max(var_9, var_12)), -64)) : (((var_13 ? var_10 : (!var_11))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 *= arr_2 [10] [10];
        arr_3 [i_0] = ((((arr_0 [8] [i_0 - 1]) % (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 *= (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_20 *= (((arr_6 [i_1] [i_1]) & -75));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = (max(((((arr_9 [i_2 - 3]) >= -24666569))), ((~(max((arr_5 [i_2] [21]), 18446744073709551573))))));
        var_21 = -107;
    }
    var_22 = (min(var_22, 64));
    #pragma endscop
}
