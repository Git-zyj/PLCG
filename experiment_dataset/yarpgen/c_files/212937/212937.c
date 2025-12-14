/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? ((-((var_8 ? var_4 : 16334397215440644895)))) : (((-4669407237776400702 ? ((max(136, 65340))) : var_4)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) <= var_4));
        arr_3 [i_0] [i_0] = ((-(~1426460263)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((var_8 ? -30 : var_9))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_14 = ((1 * (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_15 = ((~(arr_9 [i_1] [i_1] [i_2 + 1])));
            arr_10 [i_1] [i_2 + 1] [i_1] = 1426460263;
            arr_11 [i_1] [i_1] [i_1] = (arr_6 [i_1]);
            arr_12 [i_1] [i_1] [i_2] = (((arr_9 [i_2 + 1] [i_1] [i_2 + 1]) ? 120 : (((var_11 == (arr_8 [i_1] [i_1]))))));
            arr_13 [i_1] = ((~(((arr_4 [i_1]) >> (-11398984666194824 + 11398984666194837)))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_16 = (((arr_9 [i_3] [i_1] [i_1]) || (arr_8 [i_1] [i_3])));
            var_17 = -30;
            var_18 = (((arr_8 [i_3] [i_1]) - var_8));
            arr_16 [i_1] [i_3] [i_1] = ((var_7 | (~0)));
            var_19 = arr_14 [i_3] [i_1];
        }
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_19 [i_1] = (!var_11);
            arr_20 [i_1] [i_1] [i_1] = (arr_14 [i_4 - 2] [i_1]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = (((~var_2) ? (arr_22 [i_1] [i_1] [i_1]) : -116));
            var_21 = (((10659 ? 1063323835 : 25041)));
            arr_23 [i_1] [i_1] = ((22748 || (~0)));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_22 = ((-31 ? (((((min(var_8, 30))) >= (!-8481903636178433437)))) : (-4669407237776400701 >= 0)));
        arr_26 [1] [i_6] = max((((!(arr_17 [0])))), 18288);
    }
    var_23 = (var_5 % var_7);
    #pragma endscop
}
