/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_1] [i_2] [i_1] [i_0] = ((-((-(~226)))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((~((((min(-13164, var_9)) < (var_13 % var_4))))));
                                var_15 = -226;
                                var_16 = ((~((~(arr_9 [11] [11] [i_1 - 1] [11])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_5] [i_5] [i_0] = var_2;
                                arr_24 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_5] = (~13171);
                                arr_25 [i_0] [i_0] [i_2] [i_5] [i_5] = (((((1 ? (arr_22 [i_1 - 1] [i_5]) : (arr_22 [i_1 + 2] [i_5])))) ? (((arr_22 [i_1 - 1] [i_5]) ? var_2 : var_7)) : (((arr_22 [i_1 + 3] [i_5]) ? (arr_22 [i_1 - 1] [i_5]) : (arr_22 [i_1 + 2] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_17 ^= (arr_21 [8] [i_7]);
        arr_29 [i_7] = (min(((~(arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]))), (!0)));
        arr_30 [i_7] [i_7] = ((((((arr_7 [i_7]) ? (arr_7 [i_7]) : (arr_6 [i_7] [i_7])))) ? (((max((arr_6 [i_7] [i_7]), var_10)))) : var_14));
        var_18 = -7;
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_42 [i_8] [i_9] [i_9] = (max(((-((max(var_7, var_14))))), 1));
                        var_19 = (min((((!(arr_37 [i_10 + 4])))), (((arr_35 [i_11 + 1] [i_10 + 3]) % ((min((arr_34 [19] [i_11]), (arr_35 [i_10] [i_11]))))))));
                        arr_43 [1] [1] [i_9] = (max((arr_37 [i_9]), ((((!var_7) ? ((var_3 ? 341218585 : 0)) : ((max((arr_39 [i_9] [i_9] [i_9]), (arr_35 [i_10 + 4] [i_10 + 4])))))))));
                        arr_44 [i_8] |= (arr_32 [7] [7]);
                        var_20 *= 1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 17;i_13 += 1)
            {
                {
                    arr_51 [i_8 - 1] [i_13] [i_13] = var_1;
                    var_21 = var_4;
                    arr_52 [i_13] [i_13] [i_8] = ((((~((min(226, 61811))))) | (arr_31 [i_8] [i_13])));
                    var_22 = (max(var_22, ((min(var_0, ((15547088083879818362 ? ((1533550706 ? 13834 : (arr_38 [i_8] [i_12] [i_13] [i_13]))) : (~1404578612))))))));
                }
            }
        }
        var_23 = (min(var_23, (((((((((min(1, -5780620506809147121)) + 9223372036854775807)) << (!61809)))) ? (~3724) : ((((min(18446744073709551615, 31744))))))))));
    }
    var_24 = var_9;
    var_25 = ((~((~(max(var_8, var_1))))));
    var_26 = -1918;
    #pragma endscop
}
