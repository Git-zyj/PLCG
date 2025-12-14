/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] = var_18;
                            arr_12 [i_3] [i_1 - 2] = ((859455512 ? ((((-(arr_2 [i_2 + 1]))))) : -63));
                            var_20 -= (arr_8 [i_1 + 1] [i_1 - 1]);
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (((max((!13793465817342117630), ((var_3 ? 11082 : 0))))) ? -var_18 : (arr_3 [i_0] [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_8 - 4] = (((min(var_18, (arr_4 [1] [i_7 - 3] [i_6]))) ^ var_2));
                                var_21 = (min(var_21, (((min((arr_22 [i_6] [i_6 - 1] [16] [i_7] [i_7 - 3] [i_8 + 1]), (((arr_19 [i_7 - 3]) ? var_9 : 54454))))))));
                                var_22 -= (((max((arr_2 [i_8 - 1]), (arr_0 [i_6] [i_6 + 1]))) ^ (((((arr_17 [i_4] [i_4]) < (((!(arr_6 [i_4] [i_4] [i_4]))))))))));
                                arr_26 [i_8 - 4] [i_8] [i_8] [i_8] [i_8] [i_5] = ((+(((arr_18 [i_8 - 4] [i_5] [i_8]) ? (arr_23 [i_6 + 1] [i_8 - 4]) : (arr_23 [i_6 + 1] [i_8 - 4])))));
                            }
                        }
                    }
                }
                arr_27 [i_5] [i_5] [i_4] = ((~((~(arr_21 [i_5] [17])))));
            }
        }
    }
    var_23 = (((max(var_13, var_11)) >= ((11079 ? 4079852895 : -859455513))));
    var_24 -= var_3;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_39 [i_9] [i_12] = (arr_4 [i_10] [i_10] [i_12]);
                            arr_40 [1] [i_9] [1] [i_9] [i_10] [i_10] |= ((((2559833568 + (arr_30 [i_9] [i_9])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_25 = var_13;
                            var_26 = (max(var_26, (((((var_12 ? ((max((arr_17 [i_14] [i_13 - 1]), (arr_0 [i_9] [i_9])))) : ((1 ? 3376935946 : 0)))) & (arr_17 [i_9] [i_14]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_27 += var_1;
                            arr_53 [i_16] [i_9] [i_9] [i_9] [i_9] = ((918031349 ? 4294967295 : 11082));
                            var_28 = ((((max(3687532713, 54454))) || (((min((arr_3 [i_9] [i_9]), 127)) <= ((var_16 ? 18446744073709551615 : var_18))))));
                            var_29 -= (((((918031336 - (arr_52 [i_10] [i_15] [i_15] [i_16 + 2])))) <= (arr_15 [i_9])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_60 [i_9] [i_9] [i_9] [i_9] = (max((((arr_30 [i_9] [i_9]) || 62)), ((!(arr_54 [i_18] [i_18] [i_18] [i_18 - 2])))));
                            arr_61 [i_9] [i_9] [i_9] = (var_12 - 0);
                        }
                    }
                }
                arr_62 [i_9] [i_10] &= (max(((-(arr_42 [i_9]))), (arr_42 [i_9])));
            }
        }
    }
    #pragma endscop
}
