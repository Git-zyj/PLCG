/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (((((var_12 ? 255 : 38384))) ? (max(122, ((12 ? 198 : -8638842456627149719)))) : (+-1)));
                            var_15 = ((((!(arr_1 [i_0 - 1]))) ? var_10 : ((-109 ? var_3 : (8638842456627149710 || 255)))));
                            var_16 = (((!(arr_2 [i_0] [i_0 - 1] [i_0]))));
                            var_17 = ((-8638842456627149699 ? var_10 : var_7));
                        }
                    }
                }
                var_18 = (max(var_18, (!var_1)));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] = (((((54728 && 226) < (max((arr_7 [i_0 - 3] [i_0] [i_1] [i_1] [i_1] [i_4]), (arr_4 [i_0] [i_0]))))) ? 140703128616960 : var_10));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_4] [i_5] [i_6] [i_5] = (((((-(arr_4 [i_0 + 2] [i_1])))) ? ((max((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]), (arr_4 [i_0 - 1] [i_5])))) : (max((arr_8 [i_5] [i_5] [i_1] [i_0]), (arr_2 [i_1] [i_1] [i_5])))));
                                var_19 = (arr_13 [i_0]);
                                arr_18 [i_0] [i_1] [i_4] [i_1] [i_6] = -37;
                                arr_19 [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_6] = ((-((-4611686018427387904 + (((70 ? 169 : (arr_4 [i_0] [i_6]))))))));
                                arr_20 [i_0] [i_1] [i_4] [i_0] [i_6] = (arr_13 [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_33 [i_7] [i_7] [i_7] [i_9] = 7334061575130871742;
                            arr_34 [i_10] [i_9] [i_9] [i_7] = (~744589104);
                            var_20 = ((var_2 ? var_3 : (max((max(255, var_5)), 8638842456627149698))));
                            var_21 = var_6;
                            arr_35 [i_7 - 1] [i_8] [i_9] [i_9] = (i_9 % 2 == zero) ? (((((var_2 ? var_8 : var_10)) << (((arr_30 [i_7 - 2] [i_8] [i_9] [i_10] [i_9] [i_7]) - 3346213326))))) : (((((var_2 ? var_8 : var_10)) << (((((arr_30 [i_7 - 2] [i_8] [i_9] [i_10] [i_9] [i_7]) - 3346213326)) - 3557157226)))));
                        }
                    }
                }
                var_22 ^= 8638842456627149698;
                var_23 = (max(var_23, ((((((((((arr_22 [i_7]) - (arr_30 [i_7 + 1] [i_7 + 1] [i_8] [i_7 + 1] [i_7] [i_8])))) ? 18874 : (arr_29 [i_7 - 2] [i_7] [i_7 + 1] [i_7])))) == (max(((var_6 ? var_7 : (arr_26 [i_7] [i_8]))), -8638842456627149715)))))));
            }
        }
    }
    #pragma endscop
}
