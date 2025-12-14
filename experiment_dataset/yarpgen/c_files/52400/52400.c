/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 48329;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [9]) ? (((20091 ? (arr_1 [i_0]) : var_13))) : var_14));

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((var_3 ? (arr_5 [i_1 - 1] [i_1 - 1]) : var_8)))));
            var_18 ^= (((arr_3 [i_0]) <= (arr_3 [i_0])));

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_19 = (((((var_2 ? (arr_12 [i_0] [i_3] [i_4]) : var_7))) || var_4));
                            var_20 = (arr_10 [i_1 - 2] [i_1 - 2] [i_3] [i_4]);
                            var_21 = 40;
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] [i_4] = ((15 ? 7435516416385568550 : 85));
                        }
                    }
                }
                arr_15 [i_0] [i_1 - 1] [2] = var_14;
                arr_16 [i_0] = ((-(((var_0 != (arr_6 [i_0]))))));
                var_22 = -17067;
            }
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_20 [1] = (var_2 & 11);
            var_23 = (arr_7 [i_0] [i_0] [i_0] [7]);
            var_24 = (207 <= var_14);
            var_25 = var_4;
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_23 [i_6 - 1] [i_0] [i_0] = (((((var_12 ? var_9 : var_8))) != (arr_21 [i_0] [i_6])));
            var_26 = (((arr_19 [i_6 - 2] [i_6 - 2] [11]) ? ((48 ? var_15 : (arr_8 [i_0]))) : (((1 > (arr_12 [9] [i_6 - 2] [i_0]))))));
            arr_24 [i_6 - 2] [i_0] = ((var_1 ? var_4 : (32 % var_8)));
        }
        var_27 = (((((var_9 ? var_13 : var_9))) ? (var_3 > var_8) : (arr_4 [i_0])));

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            arr_28 [i_7] [3] [i_7] = (!var_7);
            arr_29 [i_7] = (arr_21 [i_0] [i_7 - 1]);
        }
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        arr_33 [i_8] = (max(var_14, 1));
        var_28 = (min(var_28, ((min((min(var_15, ((max(var_10, var_2))))), (arr_31 [i_8] [2]))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_36 [i_9 - 1] = ((((var_0 ? var_14 : (arr_34 [i_9 + 1]))) - (((var_8 >> (arr_35 [8] [i_9]))))));
        var_29 = (min(var_29, (((1 ? 239 : 1)))));
        var_30 ^= (arr_34 [i_9]);
    }
    var_31 ^= (((!6645496157609808304) | var_3));
    #pragma endscop
}
