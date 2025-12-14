/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] |= min((((!((max(16653757235761118224, 3688228512849397899)))))), (max((arr_4 [i_0 - 1] [i_1 - 1]), var_7)));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= (11315231800984502006 - 0);
                    arr_12 [5] [i_1] [i_1] [i_0 - 1] = ((((((arr_10 [i_0 - 1] [i_0 + 1] [0]) >> (-var_16 + 31)))) * (min((~18446744073709551615), var_8))));
                    arr_13 [0] [6] [0] &= arr_6 [11] [i_2];
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_17 = (208 ? 16598418223438283067 : var_14);
                                arr_22 [i_0] [i_5] [i_4] [i_5] = min(13745535383779809492, 10);
                                arr_23 [2] [i_5] [i_3 + 1] [11] [i_4] [4] = (((((arr_17 [i_0 - 1] [i_1 + 1]) && (var_5 && var_5))) || ((var_7 || (!var_2)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = (max(((126 ? 208 : (arr_3 [8] [i_0 + 1] [2]))), 186));
                                var_20 = arr_1 [i_0 - 1];
                            }
                        }
                    }
                    var_21 = (max(((((!(arr_4 [i_0] [i_0]))))), 108));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    var_22 = (~47);
                    arr_33 [i_1 + 1] [i_8 + 3] = ((var_10 + (arr_8 [i_0] [i_0 - 1] [i_0] [i_0])));
                }
                var_23 *= ((~(var_9 <= var_6)));

                /* vectorizable */
                for (int i_9 = 4; i_9 < 14;i_9 += 1)
                {
                    var_24 *= (((((arr_34 [i_0] [i_0]) * var_7)) <= 135));
                    arr_36 [i_0] [i_1] [i_0] = 12;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_25 = -var_6;
                                var_26 = var_9;
                            }
                        }
                    }
                    arr_42 [5] = var_11;
                }
                arr_43 [i_0] [i_1] [i_1] &= ((!((min((((arr_16 [i_1] [i_1] [i_1 - 1]) ? 87 : (arr_34 [5] [5]))), (min((arr_18 [0] [i_1] [i_1] [i_0] [0]), 208)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            {
                arr_51 [i_12] [i_13] = ((var_0 * ((-((var_3 ? 3589700290559413632 : 7623255115286418592))))));
                var_27 *= ((-(arr_50 [13] [i_12])));
                var_28 = (~107);
            }
        }
    }
    #pragma endscop
}
