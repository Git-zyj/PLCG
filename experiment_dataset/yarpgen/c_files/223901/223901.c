/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (max(((min(var_6, var_1))), var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, (((var_7 ? (~65251) : (~var_5))))));
                                arr_12 [i_0] [i_0] = (!var_9);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_11 = ((!((!(arr_13 [i_5])))));

        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_22 [i_6] = var_0;
                        arr_23 [i_5] = (var_2 - var_7);
                    }
                }
            }
            arr_24 [i_5] = (min(0, 4090676991));
            var_12 = var_2;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_13 = var_4;

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_11] = (((53 ? 46015 : 14552)));
                            var_14 -= var_7;
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_15 = (((((-(arr_34 [i_6 - 2] [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_9])))) / ((var_9 ? (max(var_5, var_6)) : (var_6 <= var_5)))));
                            var_16 = 1507938709;
                            arr_39 [i_5] [i_6] [i_9] &= ((((var_4 ? (arr_25 [i_10] [i_6 - 1] [1]) : var_2)) / var_2));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_17 = var_8;
                            var_18 -= ((~((min((arr_38 [i_9] [i_9] [i_9] [i_9] [i_9]), var_5)))));
                            var_19 = (max((~var_8), (arr_29 [i_10] [i_9] [i_9] [i_10])));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_20 = (((((max(14520, 13124))) << (var_3 - 21585))));
                            arr_48 [16] [i_5] [i_6] [i_5] [i_5] [i_14] [2] = (((((~(arr_32 [i_5] [2] [i_6] [i_9] [i_10] [i_10])))) ^ (((51016 * (min(18014398375264256, -34)))))));
                        }
                        arr_49 [i_5] [i_6] [i_6 - 3] [i_9] [i_10] = (!-1599140101);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_57 [i_5] [i_15] [i_16] [i_17] [i_16] = var_5;
                        var_21 = (!var_0);
                        var_22 = (max(56394, 36327));
                        arr_58 [i_5] [i_15] [i_16] [i_16] = ((((((min(var_1, var_8))))) == (((!var_5) ? ((var_0 ? (arr_50 [i_17]) : var_3)) : ((var_7 ? var_6 : var_3))))));
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_62 [i_5] [i_5] = var_2;
                        arr_63 [4] [4] = ((((max(((max(var_8, var_5))), var_7))) ? var_3 : (max((((arr_17 [i_5]) - var_3)), (arr_40 [i_5] [i_5])))));

                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            arr_67 [i_19] [i_19] [i_18] [i_16] [i_5] [i_5] = (max((~var_4), var_9));
                            var_23 = (((!var_8) ? var_4 : (arr_44 [i_5] [i_15] [2] [i_18] [i_19] [i_18] [i_19])));
                        }
                        for (int i_20 = 2; i_20 < 18;i_20 += 1)
                        {
                            var_24 &= (max(var_9, (!var_7)));
                            var_25 = (min(var_6, var_3));
                        }
                        var_26 = 56275;
                    }

                    for (int i_21 = 1; i_21 < 19;i_21 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, (((max((var_1 / var_2), var_1))))));
                        arr_74 [i_5] [i_5] = var_9;
                        var_28 = (min(var_28, ((((var_7 || var_4) + ((var_8 / (arr_54 [i_5] [i_15] [i_21]))))))));
                    }
                    for (int i_22 = 1; i_22 < 19;i_22 += 1) /* same iter space */
                    {
                        arr_77 [i_5] [i_5] = (arr_34 [i_22 - 1] [i_16] [i_16] [6] [i_5]);
                        var_29 = (min(var_29, ((max((((arr_25 [i_15] [i_16] [i_22]) | var_3)), var_5)))));
                        var_30 = (min(var_30, ((min(((min(var_0, (arr_19 [i_5] [i_22 - 1])))), (((arr_19 [i_5] [i_22 + 1]) & var_7)))))));
                    }

                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        arr_80 [i_5] [i_16] [i_23] = ((((46856 + 741858160) ? var_6 : (arr_25 [i_23] [i_16] [i_15]))));

                        for (int i_24 = 0; i_24 < 20;i_24 += 1)
                        {
                            arr_83 [i_24] [i_23] [i_5] [i_16] [i_15] [i_5] [i_5] = var_7;
                            var_31 = (max((((((var_6 ? var_5 : var_2))) * (max(var_9, var_5)))), (((((min(var_5, var_1))) ? (var_8 / var_2) : (!var_7))))));
                            var_32 = (max(var_32, ((min(var_0, (max(var_7, (arr_68 [i_5] [i_15] [i_16] [i_23] [i_24]))))))));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 20;i_25 += 1)
                        {
                            arr_88 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((((arr_86 [i_5] [i_15] [i_23] [i_25]) * var_7))) ? var_9 : ((var_1 ? (arr_82 [i_15] [i_23] [i_16] [i_16] [i_15] [i_5] [i_5]) : var_8))));
                            var_33 = (((((arr_85 [10] [i_23] [i_16] [i_15] [i_5] [i_5]) ? var_9 : var_6)) * var_2));
                            var_34 = (arr_73 [i_5] [i_15] [i_16] [i_5] [i_25]);
                            var_35 = ((var_3 * (2685235075 / -6550568250160443246)));
                        }
                        var_36 = ((((((((var_7 ? var_8 : var_1))) + var_7))) && ((min((min(31318, -6550568250160443246)), var_3)))));
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                    {

                        for (int i_27 = 4; i_27 < 17;i_27 += 1) /* same iter space */
                        {
                            arr_96 [i_5] [i_5] [9] [i_16] [i_26] [i_26] [i_27] = var_5;
                            var_37 = ((!(65535 + 14512)));
                        }
                        /* vectorizable */
                        for (int i_28 = 4; i_28 < 17;i_28 += 1) /* same iter space */
                        {
                            var_38 = ((arr_56 [i_28 - 4] [i_28 - 2] [i_28 + 3] [i_28 + 1] [i_28 - 2]) ? (var_2 / var_2) : (var_3 - var_6));
                            var_39 ^= ((var_9 ? (arr_34 [i_5] [i_15] [i_16] [i_26] [i_28]) : var_6));
                        }

                        for (int i_29 = 0; i_29 < 20;i_29 += 1)
                        {
                            arr_101 [i_5] [i_15] [i_26] [i_29] &= ((3567100837959823281 - (((-12 ? -29 : 1489493075)))));
                            var_40 = var_3;
                            arr_102 [i_5] [i_15] [i_16] [i_26] [i_29] = (max((~var_7), (min((((arr_36 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_52 [i_5] [i_26]) : var_3)), (~var_0)))));
                        }
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            var_41 = var_1;
                            arr_105 [i_5] [i_5] = ((((-(arr_86 [i_5] [i_15] [i_16] [i_26]))) & (((((var_4 >> (arr_21 [i_5] [i_16] [i_30]))))))));
                            arr_106 [3] [3] [1] [i_26] [i_30] [i_15] [i_15] = (((((-(var_6 ^ var_7)))) ? (arr_70 [i_5] [i_5] [i_15] [i_16] [i_26] [i_30] [i_30]) : (max((!var_8), var_9))));
                            arr_107 [i_16] [i_30] &= (((~var_1) <= (var_7 + var_5)));
                        }

                        /* vectorizable */
                        for (int i_31 = 0; i_31 < 20;i_31 += 1)
                        {
                            var_42 = ((9223372036854775803 ? -3142882822900383055 : -23));
                            var_43 = (max(var_43, (arr_84 [i_15] [i_31])));
                        }
                    }
                    for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
                    {
                        var_44 ^= ((!((max((11388 && 2397803830), var_4)))));
                        var_45 = (~((-1665434269 * ((var_3 ? (arr_100 [i_32] [i_16] [i_16] [4] [11] [11]) : var_3)))));
                    }
                }
            }
        }
        var_46 ^= (((((max((arr_21 [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_5] [i_5])))) ? var_6 : (var_7 ^ var_3))));
        var_47 = (((max((arr_50 [i_5]), var_6)) & var_1));
    }
    for (int i_33 = 0; i_33 < 20;i_33 += 1) /* same iter space */
    {
        arr_114 [6] [i_33] = (!var_6);
        var_48 = (min(var_48, ((max(((((var_3 ? var_8 : var_5)))), ((((max(var_0, var_7))) ? var_2 : ((var_9 ? (arr_65 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33]) : var_6)))))))));
        var_49 = (min((((253 ? -26038 : 15))), ((-(arr_70 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])))));
        arr_115 [i_33] = var_7;
        arr_116 [i_33] = ((-(101 | -1919721152385482793)));
    }
    for (int i_34 = 0; i_34 < 20;i_34 += 1) /* same iter space */
    {
        var_50 = (arr_109 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]);
        var_51 = (min(var_51, var_5));
        arr_119 [i_34] = (((((var_1 & var_3) ^ var_0)) & var_2));
    }

    for (int i_35 = 0; i_35 < 11;i_35 += 1)
    {
        var_52 = (((((((var_4 << (var_1 - 35499))) + var_8))) == (max((max(14221997750603611065, 23885)), var_4))));
        arr_122 [i_35] [i_35] = ((max(var_9, var_4)));
    }
    #pragma endscop
}
