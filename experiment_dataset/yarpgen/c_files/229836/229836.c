/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((50066 ? 2367649240897252449 : 15470));
        var_20 &= -var_16;
    }

    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (((arr_1 [i_1]) ? (((546133361119379147 ? -7969 : 23539))) : ((34 ? 16284430320776413674 : 7968))));
        arr_4 [i_1] = (min(((max((arr_0 [5] [i_1]), var_10))), (arr_2 [i_1] [i_1 + 2])));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_22 = ((-((max((arr_7 [i_4] [i_2 + 1]), 237)))));

                    for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_4] = (~-4351363994886912154);
                        var_23 += ((18443 ? 252 : 15495));
                        var_24 = ((-(((!(((19588 ? 1 : 56778))))))));
                        var_25 = ((~(arr_3 [7] [i_4])));
                    }
                    for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_26 = (max(var_6, (max(var_15, (arr_12 [i_2] [i_4] [i_4] [7] [i_4])))));
                        var_27 = (min(var_27, (((((((arr_12 [i_2 + 2] [i_3] [i_2 + 3] [i_2 + 2] [i_2]) ? (arr_12 [i_2 - 1] [i_3] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_12 [i_2 + 3] [i_3] [i_2 + 2] [i_2 + 3] [i_2])))) ? -var_14 : ((min(1, 16))))))));
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_22 [i_2] [4] [5] [i_4] = (max((arr_9 [i_2 + 1] [i_3]), (((~var_11) ? (!1) : (max(var_9, var_17))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_25 [2] [i_3] [15] [i_7] [i_2] [7] [i_4] = max((arr_9 [i_2 + 2] [i_2 + 3]), (max(var_17, (arr_9 [i_2 + 2] [i_2 + 2]))));
                            arr_26 [i_2] [i_3] [i_2 - 1] [i_3] [i_2] [i_2] [i_2] |= (((((~((8768 ? -27533 : 4))))) ? ((-2367649240897252440 ? 12952273045524732913 : 5283414511708604003)) : -1));
                        }
                    }
                    arr_27 [i_4] [i_4] = (((max(6761, 27855))));
                    arr_28 [i_4] [i_4] [i_3] [i_4] = var_3;
                    arr_29 [i_4] [i_4] = -11;
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_9] [i_9] [i_9] = (((((((max(var_9, var_11))) ? ((-17 ? -6285854919716280375 : var_13)) : var_1))) ? ((-((var_9 ? var_6 : var_11)))) : (min(((var_1 ? (arr_16 [i_2] [i_9] [i_2 + 2] [0]) : (arr_8 [i_2 + 2] [i_2]))), ((153 ? -17 : 1800))))));
            var_28 = ((!((max(-7200103420827258841, (((-17 ? 24 : 103))))))));
        }
        var_29 -= ((((((arr_10 [i_2 + 2] [i_2 - 1]) ? ((65535 ? 70368743915520 : -27478)) : var_14))) ? (max(var_13, var_2)) : (((224 ? -7250428574779126462 : 4597)))));
        var_30 = var_16;
    }
    #pragma endscop
}
