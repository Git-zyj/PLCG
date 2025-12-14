/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (i_2 % 2 == 0) ? (((+(((((arr_10 [i_0] [i_2] [i_2 + 1] [i_2 + 2]) + 2147483647)) >> (((arr_10 [i_2 + 2] [i_2] [i_3] [i_2 + 2]) + 6458))))))) : (((+(((((((arr_10 [i_0] [i_2] [i_2 + 1] [i_2 + 2]) - 2147483647)) + 2147483647)) >> (((((arr_10 [i_2 + 2] [i_2] [i_3] [i_2 + 2]) + 6458)) - 32672)))))));
                            var_14 = (((arr_6 [i_0] [i_2] [i_2]) ? (arr_5 [i_1] [i_2 + 1] [i_3]) : var_9));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((arr_15 [i_0] [i_0]) / (((arr_15 [i_0] [i_1]) / (((var_10 ? (arr_0 [i_0]) : var_12))))))))));
                            var_16 = (min(var_16, (((!(562949953421311 + var_11))))));
                            var_17 = (arr_16 [i_5] [i_4 + 1] [12] [i_5]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_24 [i_6] [i_1] [7] [4] = ((((((arr_18 [0] [0] [0]) * (arr_23 [i_0] [i_0] [i_6] [i_7])))) && ((((arr_23 [i_7] [i_7] [i_6] [i_7]) ? (arr_23 [i_0] [i_0] [i_6] [i_7]) : var_6)))));
                            var_18 = ((-2960342866290754176 ? (min(((((arr_11 [i_6]) && (arr_23 [i_0] [i_1] [i_6] [i_7])))), (min(1048575, 0)))) : ((((arr_23 [1] [i_6] [i_6] [i_0]) ? (((((arr_14 [2] [2]) && var_4)))) : var_9)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_35 [i_8] [i_10] [i_11] [i_9] = (max((max((arr_28 [i_10 + 1] [i_9] [i_12 - 2]), (arr_29 [i_12] [i_12 + 2] [i_12 + 2]))), (min(-0, ((var_8 ? 0 : var_5))))));
                                var_19 -= ((((!((((arr_33 [i_8] [i_9] [i_8] [i_11] [1] [1]) ? var_1 : 196))))) ? ((0 ? 0 : var_12)) : (((((min(-184995763, (arr_25 [i_12] [i_9])))) ? 2147483647 : 1)))));
                                var_20 &= var_11;
                                arr_36 [i_9] [i_9] [0] [i_9] [i_9] = ((((max(var_10, (arr_27 [i_10 - 2] [i_10 + 2])))) ^ (max(123, -2960342866290754176))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_21 |= (((!var_7) ? (((((var_1 ? var_3 : 0))) ? 1 : 82)) : var_0));
                            var_22 = (min(((((((96 ? 0 : 248))) ? (min(var_0, (arr_40 [i_8] [i_9]))) : (arr_25 [i_8] [i_13 - 1])))), (var_10 - var_5)));
                            var_23 *= arr_39 [i_14] [i_8] [i_8];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_24 = ((!((min(1, 0)))));
                            arr_45 [i_9] [i_9] [i_15] [i_16] = (((((var_1 ? ((min((arr_25 [i_15] [i_15]), var_11))) : (arr_27 [i_9] [i_15 - 3])))) || var_10));
                            var_25 -= (((arr_42 [i_8] [i_8]) + (0 * -70)));
                            var_26 = var_12;
                            arr_46 [i_16] [i_9] [i_9] [i_8] = (((((~(((var_11 + 2147483647) >> (90 - 65)))))) * ((((((arr_40 [18] [i_15 - 2]) ? 0 : (arr_40 [i_8] [i_9])))) ? var_5 : ((((!(arr_37 [i_9] [i_9])))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 23;i_20 += 1)
                    {
                        {
                            var_27 += 18446744073709551615;
                            var_28 = (max(var_28, (((!((var_6 == (arr_58 [i_19] [i_17]))))))));
                            var_29 = (((((~(max((arr_57 [i_17] [i_17] [4] [i_17]), var_0))))) ? (arr_47 [i_20 + 1] [i_17]) : (arr_53 [i_17] [i_17] [6] [i_20 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 24;i_22 += 1)
                    {
                        {
                            arr_66 [i_22] [i_18] [i_21 + 1] = (((((arr_62 [i_21 + 2] [i_21 - 1] [i_21]) | (arr_62 [i_21 - 2] [i_21 - 1] [i_17])))) ? (arr_62 [i_22] [i_21 - 1] [4]) : ((~(arr_62 [i_21 + 1] [i_21 - 1] [i_18]))));
                            var_30 = -var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
