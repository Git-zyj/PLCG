/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -14353;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= (((arr_0 [i_0]) >= 3761102601));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] = ((533864686 && (((arr_4 [i_1 - 2] [i_2 - 1] [i_2 + 1]) || (arr_4 [i_1 - 4] [i_2 + 1] [i_2 - 1])))));
                            arr_11 [i_0] [i_2] [i_2] = var_10;
                            var_19 = 533864686;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (arr_5 [i_0] [i_0] [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((((40813 ? 65308 : -702700954)) << (142 != var_10)));
                                arr_19 [i_6] [i_5] [i_4] [i_5] [i_0] = (((arr_0 [i_5 - 1]) & (arr_0 [i_6 + 1])));
                                var_21 ^= (((arr_8 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_0]) & (arr_17 [i_6 + 1] [i_6] [i_6] [i_6] [i_6])));
                            }
                        }
                    }
                    var_22 = (((arr_0 [i_1 + 1]) | (arr_5 [i_4 + 3] [i_1 - 4] [i_1 - 3])));
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_29 [i_7] = (184 - (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                                arr_30 [i_1] [i_7] [i_8] [i_9] = (arr_3 [i_1 - 1]);
                                arr_31 [i_0] = 113;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_23 = (((!(arr_7 [i_1 - 1] [i_10 - 2] [i_11]))));
                                var_24 = ((((((3761102609 & 77) + 533864694))) ? (((184 * (((arr_6 [i_0] [i_1 - 4] [i_7] [i_11]) * (arr_23 [i_0] [i_0])))))) : 3402342237));
                                var_25 = ((((((arr_14 [i_0] [i_0] [i_10 - 1] [i_7 + 1] [i_1 + 1] [i_11]) ? (arr_12 [i_0] [i_1] [i_10 - 1]) : 69))) ? (min((arr_12 [i_0] [i_1] [i_10 + 1]), (arr_14 [i_0] [i_0] [i_10 + 1] [i_7 - 3] [i_1 - 1] [i_11]))) : ((-(arr_12 [i_7] [i_1] [i_10 - 2])))));
                                var_26 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_27 -= (arr_9 [i_13] [i_12 - 4] [i_7] [i_1] [i_1] [i_0]);
                                arr_43 [i_7] [i_1 - 1] [i_7] [i_12] [i_13] [i_0] [i_7] = (((((arr_12 [i_13 - 1] [i_13 - 1] [i_7 - 1]) | (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), 1601218629)))) & (var_14 ^ -15317)));
                                var_28 = (max(var_28, ((((var_2 - 2776700717) + ((max((arr_24 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1] [i_13]), (arr_24 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_49 [i_15] [i_14] [i_0] [i_1] [i_0] = (arr_35 [i_14] [i_0]);
                                arr_50 [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1] = (((max(15317, var_8)) < -22642));
                                var_29 = (min(var_29, -46));
                            }
                        }
                    }
                }
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    var_30 = ((((max((arr_25 [i_0] [i_0] [i_16]), 3761102610))) / (min((~var_4), ((max(89, 69)))))));
                    arr_55 [i_16] [i_16] = ((1 + (arr_46 [i_0] [i_1] [i_16] [i_0] [i_0] [i_1])));
                }
                /* LoopNest 3 */
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                arr_62 [i_0] [i_17] [i_17] [i_17] [i_18] = var_13;
                                var_31 = (arr_17 [i_0] [i_1] [i_17] [i_18] [i_17]);
                                arr_63 [i_19] [i_17] [i_17] [i_17] [i_0] = ((-1601218644 || (var_13 - 533864686)));
                                arr_64 [i_0] [i_17] [i_18] [i_19] = 111;
                                var_32 = (((arr_14 [i_17] [i_18] [i_17] [i_0] [i_0] [i_17]) * ((-((var_7 ? (arr_14 [i_18] [i_18] [i_19] [i_18] [i_18] [i_17]) : var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 &= (var_2 | var_1);
    #pragma endscop
}
