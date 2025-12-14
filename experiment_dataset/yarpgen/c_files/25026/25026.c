/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((((var_18 ? -8308191261767603357 : (arr_1 [i_0])))) ? ((((arr_2 [i_0] [i_0]) ? -8308191261767603357 : (arr_0 [i_0] [i_0])))) : 54942351)), 8308191261767603356));
        var_20 = var_18;
        var_21 |= ((((var_0 ? (arr_2 [i_0] [1]) : (((var_15 ? var_1 : var_1))))) >= var_5));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = 8308191261767603357;
                                var_23 = ((((((var_5 - (arr_12 [i_1] [i_2] [i_3 + 2] [i_4])))) ? (arr_1 [i_1 + 2]) : 282900224)));
                            }
                        }
                    }
                    var_24 = (((arr_11 [i_1]) * ((((((arr_6 [i_1] [i_3 + 3]) * var_9))) ? 8742103408509928063 : (((var_1 ? -8308191261767603357 : var_2)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_26 [i_1] [4] [i_1] [i_8 - 2] = (arr_22 [i_1] [i_6 - 1] [i_7 + 1]);
                        arr_27 [i_1] [i_1] [i_7] [i_8 + 1] = (min((((var_2 ? var_1 : 8308191261767603356))), ((min(1951734443, ((-(arr_7 [15] [7]))))))));
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_30 [i_1] [i_1] [i_9 + 2] = ((((max(0, var_0))) ? var_7 : (((((min(var_12, var_6))) * ((var_16 ? (arr_4 [i_1]) : var_9)))))));

            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                arr_34 [i_1] [i_1] [i_9] = (min((max(((max(var_10, (arr_0 [11] [24])))), (-1054100225 - 1017145034698742072))), var_12));
                var_25 = 3432494891;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_26 = (((max((((!(arr_2 [i_9] [i_9])))), (~var_9))) == (((((var_4 + (arr_5 [i_1 - 2]))))))));
                            var_27 = ((((var_5 ? var_1 : (arr_24 [i_1] [i_1 + 1] [i_1] [i_1])))));
                        }
                    }
                }
            }
            arr_42 [i_1] [i_9 - 1] = (max((min(((862472404 ? 9223372036854775807 : (arr_18 [i_9] [i_9 + 1] [i_1] [i_9] [i_1] [i_9 + 1]))), (var_2 == var_12))), ((max(var_1, (((var_10 - (arr_13 [i_1 + 4] [i_1] [i_1] [i_1 + 4])))))))));
            arr_43 [i_1] [i_1] [i_1] = ((var_18 ? ((((~var_8) ? (~3257734787) : (arr_6 [i_1] [i_1 + 4])))) : (max((((var_14 >> (var_11 - 52)))), (((arr_37 [i_1] [i_1] [16]) ? (arr_32 [i_9] [i_9] [i_9 + 2]) : (arr_9 [i_9] [i_1])))))));
        }
        arr_44 [i_1] = (max(-var_6, ((max(-100, ((var_17 ? 255 : 127)))))));
    }

    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    {
                        arr_57 [i_14] [i_13] = ((((max((max(14099883079524272558, (arr_10 [i_13]))), var_18))) ? ((((arr_36 [i_16] [i_16 + 2] [i_13] [i_13] [i_16 - 1] [i_16 + 2]) - (arr_20 [i_13] [i_15])))) : ((var_15 ? (arr_51 [i_13] [i_15] [i_15]) : (((max(0, (arr_38 [17] [i_14] [17] [i_15] [i_16 - 1])))))))));
                        var_28 = (((((((arr_16 [i_13] [i_13] [i_15] [i_15]) ? (arr_8 [i_13] [i_13] [11]) : 0))) ? (arr_7 [i_13] [i_14]) : (((min((arr_11 [i_14]), (arr_36 [i_13] [i_13] [i_14] [i_13] [i_16 + 2] [i_16]))))))));
                        arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((var_0 & ((max(var_0, (arr_41 [i_13] [13] [i_15] [i_13] [i_14] [i_15]))))));
                        arr_59 [i_13] [i_13] [i_15] [i_13] = 1390205783;
                    }
                }
            }
        }
        arr_60 [i_13] [i_13] = (arr_55 [i_13] [7] [i_13] [5] [i_13]);
    }
    for (int i_17 = 3; i_17 < 13;i_17 += 1) /* same iter space */
    {
        var_29 = ((+(((var_10 * var_10) ? ((var_1 ? var_14 : var_16)) : var_4))));
        var_30 = var_8;

        /* vectorizable */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            var_31 = ((var_8 == (123 >= var_2)));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        var_32 = (arr_66 [i_17] [1]);
                        var_33 = (min(var_33, ((((arr_2 [i_19] [21]) / var_11)))));
                        var_34 = (((arr_68 [i_17] [i_17 - 1]) - (arr_68 [i_17] [i_17 - 1])));
                    }
                }
            }
        }
    }
    for (int i_21 = 3; i_21 < 13;i_21 += 1) /* same iter space */
    {
        var_35 = ((~(max(-14401763953796374477, 1))));
        var_36 = (((!var_14) + (min((990049451997132357 == var_13), ((~(arr_19 [0] [i_21] [i_21])))))));
    }
    #pragma endscop
}
