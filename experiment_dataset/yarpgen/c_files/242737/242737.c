/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (((var_5 ? (((41 ? var_2 : var_1))) : var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (2392489754 != 1);
        var_15 = (+(((arr_1 [0]) ? var_11 : var_8)));
        var_16 = (max(var_16, ((((~1835292772) ? 59145713126895715 : var_6)))));
        var_17 = (arr_3 [i_0]);
        var_18 = (min(var_18, ((1 ? var_0 : ((var_7 ? var_0 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1241088460;
        var_19 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((var_2 ? 2934235664 : var_3))));
        var_20 = ((var_1 ? -1 : ((155 ? var_4 : (arr_8 [i_2] [i_2])))));

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_21 *= (min(var_11, (min((((var_8 == (arr_8 [14] [i_3])))), var_3))));
            var_22 = ((+((((((arr_9 [i_2]) - var_9)) >= (((~(arr_11 [i_3])))))))));
        }
        arr_14 [i_2] = (min((min(((-(arr_12 [20] [20]))), -990675322)), (--1)));
    }
    #pragma endscop
}
