/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_5 ? ((((-9223372036854775807 - 1) <= var_10))) : ((var_6 ? 102 : var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, 32745));
                                var_16 -= (arr_0 [i_0] [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = var_5;

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [7] [i_5] = (((arr_0 [i_0] [i_0]) ? (max((min(12, var_9)), -28)) : (((((min(32, var_3))) & ((max(var_4, var_3))))))));

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_20 [i_6] [i_5] [i_2] = -123;
                            var_17 = (~var_7);
                            var_18 = var_8;
                            var_19 = ((var_6 | (arr_12 [i_1 + 1] [i_1 + 1])));
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [12] = var_9;
                            var_20 = (~var_8);
                        }
                        arr_26 [4] [8] [i_2] [i_2] [i_2] [i_2] = var_10;
                        var_21 = (min(var_21, (min(((((((var_12 ? (arr_2 [i_1]) : 7))) ? ((-41 ? var_11 : var_9)) : var_0))), (-9223372036854775807 - 1)))));
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_22 = (min((min(10, (min(var_3, var_13)))), 41));
                        var_23 *= (~(arr_13 [i_8] [i_8 - 1] [i_1] [i_1 + 1] [i_1]));
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        arr_34 [i_9] [i_9] [6] = (var_13 ? ((~(arr_2 [i_9 - 1]))) : (((~(((arr_11 [i_0] [i_9]) ? 29 : 51677))))));
                        var_24 = (arr_29 [i_0] [i_1 + 1] [i_2] [9]);
                        arr_35 [i_9] [i_9] = (!var_13);
                    }
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        var_25 = (max(var_25, (!34359721984)));
                        var_26 = (max(var_26, ((min(10823, -1)))));
                    }
                    arr_38 [i_0] [i_1 + 1] [i_2] = (-8192 || 1);
                }
            }
        }
    }
    #pragma endscop
}
