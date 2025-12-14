/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 |= 54483;
                            arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] [i_0] |= ((-((((min((arr_0 [i_3] [i_1]), (arr_11 [i_3] [i_2] [i_1] [i_0])))) / -var_0))));
                            arr_14 [i_2] [i_1] [i_2] [21] [i_2] = ((-(((-51820 || (var_8 / 51820))))));
                        }
                    }
                }
                var_15 -= (((((1 ? ((3450750649 ? (arr_11 [i_0] [i_1] [10] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))) : (min(var_13, var_8))))) ? (((!(var_2 && 51820)))) : -802910706));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_22 [i_4] = ((-((-(arr_21 [i_4] [13])))));
                arr_23 [i_4] = 1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_28 [i_5] [i_4] [i_5] [i_5] [i_5] [i_5] = (arr_6 [i_7 + 1] [i_7]);
                            var_16 = (min(var_16, (arr_19 [i_6] [8] [i_6])));
                            arr_29 [i_4] [i_4] [i_6] [i_7] [i_7 + 1] = -var_7;
                        }
                    }
                }
                arr_30 [i_4] [i_4] = (min((1 % 470441485), (max(((((arr_0 [i_4] [i_4]) && 0))), (min(var_11, -1441781886))))));
                arr_31 [i_5] [i_4] [i_4] = -var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_17 = (arr_18 [i_12] [i_9]);
                                var_18 = ((-((((((arr_38 [i_8] [i_9] [i_8]) % (arr_11 [4] [i_10] [i_9] [i_8])))) ? ((((arr_17 [0]) >= 89))) : var_1))));
                                var_19 = (max(var_19, -var_11));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_52 [i_8] = ((((((arr_1 [i_14 + 1]) / (max((arr_32 [i_8] [i_9]), (arr_33 [i_9])))))) ? -1301869050 : 99));
                                var_20 = 1967338627;
                                var_21 = (max(var_21, 1));
                                arr_53 [12] [i_14] [i_15 - 3] = (-((-var_10 ? var_4 : (arr_38 [i_15 + 1] [i_13] [i_8]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 12;i_18 += 1)
                        {
                            {
                                arr_63 [i_8] [i_9] [6] [i_16] [i_17] [i_18] = (((max((max(var_0, var_7)), (arr_57 [i_18 + 2] [i_18 - 1] [i_18]))) < ((((arr_40 [i_18 + 2] [i_18] [i_18 + 1] [i_18 + 1] [i_18]) && (!0))))));
                                var_22 = (max(var_22, var_5));
                                var_23 = (arr_20 [i_18 - 1] [i_9]);
                                var_24 = (((((var_1 ? 3072932810 : (arr_12 [i_18 - 1] [i_16] [i_16] [i_9] [i_9] [i_16])))) ? var_0 : -var_1));
                                var_25 = (max(var_25, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
