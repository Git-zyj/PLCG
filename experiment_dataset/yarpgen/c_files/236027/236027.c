/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = var_9;
                                var_16 = ((((arr_9 [i_0] [1] [1] [i_4]) ? (arr_9 [i_0] [i_0 + 2] [i_2 + 1] [i_3]) : (arr_9 [i_0] [i_4 - 1] [i_4] [i_4]))) & (arr_9 [i_0] [i_0] [i_3] [i_3 - 2]));
                                arr_16 [i_0 + 2] [i_0] = (((arr_10 [i_3 + 1] [i_0 + 1] [i_3 + 1]) ? (max((arr_10 [i_2] [i_0 + 1] [i_2]), (arr_1 [i_3 + 2]))) : (((18446744073709551608 ? -1 : -1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((arr_20 [i_0 - 1] [i_0] [i_5 - 1] [i_6 - 1]) ? (((1 / (arr_5 [i_0])))) : (max(((((arr_12 [i_0] [i_1] [6] [i_1 + 1] [i_0] [i_0] [14]) ? var_8 : var_8))), (((arr_6 [i_0] [i_5] [i_0]) - (arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_6 + 2]))))))))));
                            var_18 = (max(1597810160, (min((arr_15 [7] [i_5 - 1] [i_6 + 2]), (arr_11 [i_0] [i_0] [i_5] [i_5])))));
                            var_19 = ((-((((235 ? var_2 : (arr_6 [i_0 + 2] [i_0 + 2] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_31 [i_9] [i_9] [i_10] = (1 | 8303);
                            arr_32 [i_7] [i_8] [i_9] [i_8] = 105;
                            arr_33 [i_7] [i_8 + 1] [i_9] [i_9] [i_9] = var_1;
                            var_20 = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_43 [i_13] [i_12] [i_8 - 1] [i_12] [i_7] = ((-(((arr_29 [i_8 + 1] [i_8 + 2] [i_11] [1]) ? (arr_29 [i_8 + 1] [i_8 + 2] [i_13] [i_13]) : 18446744073709551615))));
                                var_21 = (min((((!(!2920)))), ((~(arr_17 [i_7] [i_12])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            {
                                var_22 = (arr_24 [i_8 + 1] [14] [14]);
                                var_23 = (max((((var_7 && 147) ? (((max(136, 32)))) : ((1926913310 ? 1 : 49098883)))), (((1 ? ((var_6 * (arr_48 [i_8] [i_8] [i_8] [i_14]))) : ((65535 ? -1597810170 : 6)))))));
                                var_24 = (((((max((arr_17 [4] [i_14]), 26070)) < (arr_12 [i_7] [i_8] [i_14] [i_14] [i_15 - 2] [i_15 + 4] [i_15]))) && (((max(63096, (arr_12 [i_7] [i_7] [i_14] [i_7] [i_15 + 3] [i_16] [i_15 + 3]))) <= ((max(65535, 1)))))));
                                arr_54 [10] [i_8] [i_14] [i_14] [i_16] = ((((((max(var_8, var_11))) ? (arr_10 [i_8 + 1] [i_8 + 1] [i_16]) : (max(-402683779, 10182505498906329460)))) & (arr_1 [i_8])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            arr_61 [i_7] [i_8] [i_8] [i_17] [i_17 + 1] [i_17 + 1] = (min((((-var_13 && (var_11 & 18446744073709551615)))), ((18446744073709551615 ? 16769024 : 65531))));
                            var_25 ^= (min(1, (min((max(var_10, (arr_52 [i_7] [i_7] [i_7] [i_8] [i_17] [i_8] [12]))), 20))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
