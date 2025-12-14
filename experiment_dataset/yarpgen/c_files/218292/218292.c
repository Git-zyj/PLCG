/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = ((!((min(-120, (arr_8 [i_2] [i_1 - 1] [i_4 + 3]))))));
                                arr_14 [i_0] [i_1 - 1] = ((~((min(var_5, (arr_4 [i_1 - 1]))))));
                                arr_15 [i_0] [i_0] = (max(99, (((!(((~(arr_5 [i_0] [i_0] [i_0])))))))));
                                var_15 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [1] [i_5] [i_6] &= (min((arr_12 [i_0] [i_1]), (((arr_11 [i_0] [i_0] [i_2] [12]) == (((arr_1 [i_1]) - 0))))));
                                arr_21 [i_6] [i_1] [i_0] [i_5 - 1] [i_6] [i_1 - 1] = var_7;
                                var_16 = 127;
                                arr_22 [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [i_6] = ((!(arr_8 [13] [i_1] [1])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_7] = var_11;
                        arr_28 [i_0] [i_2] [i_2] [i_1] [i_0] = var_4;
                        var_17 = ((var_0 ? -45 : var_0));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_31 [i_1] [i_1] [i_0] [23] [3] [i_0] = ((0 | (arr_8 [23] [i_1] [i_1 - 1])));
                        var_18 = (min(var_18, ((((~19319) ? (arr_23 [i_8]) : var_5)))));
                    }
                    var_19 = var_5;
                }
            }
        }
    }
    var_20 = (min(var_20, (((46234 ? ((((var_1 ? var_5 : var_10)))) : (min((var_3 ^ 61163), 65535)))))));
    #pragma endscop
}
