/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(~var_1)))) ? ((~(~var_1))) : (((~(~var_3))))));
    var_16 = (((-(~var_11))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (!var_2);
        arr_2 [i_0] = ((~((((arr_1 [i_0]) <= (~var_8))))));
        var_18 += -710146985;
        arr_3 [i_0] = (((((((~(arr_0 [7]))) * var_14))) && (((!var_0) != ((~(arr_0 [i_0])))))));
        arr_4 [i_0] [14] = 119;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 = (~var_11);
            var_20 = ((1 ? 2251798739943424 : 2251798739943424));
            var_21 = var_0;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 = ((var_8 != (((~(arr_8 [i_1]))))));

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_23 = (max(var_23, var_8));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_5] [6] [i_3] &= (((arr_17 [i_3] [3] [i_3]) ? (((arr_22 [i_1] [i_3] [i_3] [i_1] [i_6]) & (arr_13 [i_4 + 2]))) : -var_6));
                            arr_25 [i_1] [9] [i_4] [4] [i_6] [i_4] = ((!((((arr_19 [i_3] [i_3]) + var_2)))));
                        }
                    }
                }
                var_24 ^= 2779982142317700359;
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_25 = (((1 - -710146985) + var_12));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_26 = (var_8 & var_8);
                            var_27 = (((arr_27 [i_1] [i_9]) ^ (arr_31 [i_1] [i_3] [i_7] [i_8] [i_9] [i_9])));
                        }
                    }
                }
                var_28 = (max(var_28, (((var_13 ? ((var_13 >> (((arr_12 [1] [i_7]) - 63)))) : (((((arr_30 [i_1] [i_3] [i_7] [i_7] [i_7]) + 2147483647)) >> (var_9 - 1173275730))))))));
                arr_33 [i_1] [i_3] [i_3] [i_1] = (((~var_12) & (((arr_9 [i_1]) | var_4))));
            }
            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                var_29 = (min(var_29, (((-var_0 ? ((((arr_19 [2] [i_3]) == var_13))) : (~var_4))))));
                arr_38 [i_1] [0] [i_10 + 1] [i_3] = var_8;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_30 = ((~var_12) ? var_1 : var_8);
                            var_31 += (arr_1 [i_1]);
                            var_32 = (arr_35 [i_3] [i_10 - 1] [1]);
                            var_33 = var_1;
                            var_34 = (min(var_34, (((~(arr_21 [i_12] [i_11] [i_10] [i_10] [i_3] [i_1]))))));
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_35 = (min(var_35, (arr_47 [i_1] [1])));
                    var_36 = (arr_26 [i_1] [i_1] [i_13]);
                    var_37 = ((8 ? 136 : 20));
                }
                arr_50 [7] [i_13] [i_13] [7] = ((var_10 ? var_6 : var_0));
                arr_51 [i_13] [i_3] = (!var_2);
                arr_52 [10] [i_3] [i_13] = (arr_32 [i_1] [i_1]);
            }
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {
                var_38 = (arr_9 [i_15]);
                var_39 = (~119);
            }
        }
        var_40 = var_8;
        var_41 = (((-var_2 + 2147483647) << (((var_1 + 1002078019899196566) - 4))));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        var_42 = (var_3 || var_12);
        var_43 = (min(var_43, (!var_6)));
        var_44 *= ((-(((arr_56 [i_16]) / ((var_11 ? var_7 : var_13))))));
        arr_58 [i_16] [16] = (var_11 ? var_5 : (arr_56 [i_16]));
    }
    for (int i_17 = 2; i_17 < 23;i_17 += 1)
    {
        arr_61 [i_17] = ((var_10 | ((~(~-28949)))));
        var_45 = ((~((~(~1)))));
        var_46 = ((var_5 ? var_7 : (((~(!var_5))))));
        var_47 = (arr_60 [i_17 + 1]);
        var_48 = var_6;
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            {
                var_49 -= ((~((~(arr_60 [i_18])))));
                var_50 = ((-var_4 >> (!-var_3)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {
                    var_51 = -var_6;

                    /* vectorizable */
                    for (int i_23 = 2; i_23 < 17;i_23 += 1)
                    {
                        arr_78 [i_20] [i_20] [i_22] [i_21] |= (arr_59 [i_20]);
                        var_52 = ((~(var_13 / var_6)));
                        arr_79 [i_22] [19] [8] [i_22] [0] [i_20] = (((!var_7) ? (arr_71 [i_20] [i_21 + 1] [i_22]) : (!var_7)));
                    }
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        var_53 = ((~(~-var_8)));
                        var_54 = (min(var_54, var_2));
                    }
                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        var_55 = var_13;
                        var_56 = (min(var_56, (((-((-((var_8 + (arr_71 [i_21] [i_22] [i_25]))))))))));
                        var_57 = var_7;
                        var_58 = var_12;
                    }
                    for (int i_26 = 3; i_26 < 18;i_26 += 1)
                    {
                        var_59 = (min(var_59, (arr_69 [i_20] [i_21])));
                        var_60 = (arr_84 [i_20] [i_21] [5] [i_22] [i_22]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
