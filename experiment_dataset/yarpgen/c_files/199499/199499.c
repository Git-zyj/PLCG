/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_8;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 -= (((63413989334751002 ? 22466 : 25115)));
        var_18 &= var_11;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (((!-875430063) * ((((max(15859, var_12)) < ((var_6 ? var_12 : var_7)))))));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_2 - 1] = ((((max(var_14, (((arr_2 [i_2]) ? 63413989334751015 : 270176100))))) && 22497));
                        arr_13 [i_3] [i_2] = (max(((+(max((arr_8 [i_4 - 3] [i_3] [i_2 + 2]), var_13)))), -22467));
                    }
                }
            }
            arr_14 [i_2 + 1] [8] [i_1] &= (((--22498) + var_11));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_20 |= ((~(((var_1 << (var_11 - 4176285825))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = ((11616239646207261993 == (arr_6 [i_6] [i_5] [i_5])));
            var_22 *= ((~var_5) ? ((((arr_2 [i_5]) ? -121 : var_8))) : ((55763 ? var_14 : 13253026417049031867)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_24 [i_5] [i_7] [i_7] = var_11;

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_23 = var_0;
                var_24 = (max(var_24, (!var_10)));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_25 = (max(var_25, var_11));
                            arr_36 [i_11 + 1] [i_10 - 1] [i_9] [i_7] [i_5] = ((var_5 & (~var_14)));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_39 [i_9] = ((((((arr_30 [i_9] [i_7] [i_9]) ? var_12 : (arr_20 [i_7] [i_9])))) ? ((var_2 * (arr_18 [i_9]))) : (var_5 == var_2)));
                    arr_40 [i_5] [i_5] [i_9] &= ((!(arr_25 [i_12] [i_9] [i_5])));
                    var_26 *= -var_1;
                    arr_41 [i_9] [i_7] [i_9] = -16384;
                    var_27 = (!var_7);
                }
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    var_28 &= 22467;

                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_49 [i_9] [i_9] = ((-(((arr_33 [i_14] [i_13 - 2] [i_9] [i_5]) * -660773647))));
                        var_29 = (var_4 <= var_9);
                        var_30 = (max(var_30, ((((arr_32 [i_9] [i_13 + 1] [i_13 + 1] [i_13]) ? -var_12 : (~8191))))));
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_31 = (min(var_31, (1217705683 || var_12)));
                        var_32 = var_3;
                    }
                    var_33 = (((arr_53 [i_5] [i_7] [i_9] [i_9] [i_5]) ^ (arr_31 [i_9] [i_7] [i_7])));
                }
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
            {
                var_34 -= 6830504427502289630;
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_35 = (((var_10 != var_0) * ((var_6 ? var_0 : var_4))));
                            var_36 -= var_11;
                            var_37 &= (((var_13 && var_4) % (((arr_8 [i_5] [i_7] [i_16]) - (arr_34 [i_17 - 1])))));
                        }
                    }
                }
            }
            var_38 = (min(var_38, (((var_7 ? var_5 : (((arr_4 [i_5] [i_5] [i_7]) ? 3963402616 : -22464)))))));

            for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
            {
                var_39 -= (((~var_14) == (((arr_4 [i_7] [i_7] [i_19]) ? var_1 : var_13))));

                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    var_40 ^= ((-(arr_1 [i_5])));
                    var_41 *= (arr_57 [i_5]);

                    for (int i_21 = 3; i_21 < 14;i_21 += 1)
                    {
                        arr_69 [i_20] = (arr_44 [i_21 + 3] [i_19] [i_5]);
                        var_42 = (max(var_42, (((var_4 < ((-(arr_33 [i_5] [i_5] [i_5] [i_5]))))))));
                        var_43 = (max(var_43, (((var_3 <= (var_3 != var_3))))));
                    }
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        var_44 = var_1;
                        var_45 = (6830504427502289623 && -22497);
                        var_46 = (arr_5 [i_5] [i_7] [i_20]);
                        arr_73 [i_5] [i_7] [i_19] [i_20] [i_22] = (arr_28 [i_7] [i_7] [i_19] [i_7]);
                    }
                }
                for (int i_23 = 3; i_23 < 15;i_23 += 1) /* same iter space */
                {

                    for (int i_24 = 3; i_24 < 16;i_24 += 1) /* same iter space */
                    {
                        var_47 *= (arr_29 [i_7] [i_7] [i_23 - 2] [i_24 - 1]);
                        arr_81 [i_5] [i_23] [i_19] = (arr_58 [i_5] [i_5] [i_19] [i_19]);
                        var_48 = (max(var_48, (((arr_63 [i_24 + 1] [i_19] [i_7] [i_5]) ? ((var_0 ? var_12 : var_7)) : 3196000031))));
                        var_49 = (max(var_49, (~var_9)));
                        arr_82 [i_23] [i_7] [i_7] [i_5] [i_24 + 1] = var_10;
                    }
                    for (int i_25 = 3; i_25 < 16;i_25 += 1) /* same iter space */
                    {
                        var_50 *= ((var_7 ? (arr_74 [i_5] [i_5] [i_5] [i_5]) : (((arr_6 [i_25] [i_23 + 2] [i_7]) ? 13175785225813344587 : var_11))));
                        var_51 *= (~5193717656660519754);
                        var_52 = (arr_77 [i_5] [i_7] [i_25 - 3] [i_23 + 2] [i_25 - 1]);
                        arr_86 [i_5] [i_5] [i_5] [i_23] [i_5] [i_5] [i_5] = 13253026417049031886;
                    }
                    var_53 = ((var_3 || var_1) ? var_1 : -var_1);
                }
                for (int i_26 = 3; i_26 < 15;i_26 += 1) /* same iter space */
                {
                    arr_90 [i_5] [i_7] [i_7] [i_19] [i_19] [i_26 - 1] &= (+((((arr_68 [i_5] [i_7] [i_19] [i_19] [i_26]) && (arr_32 [i_5] [i_7] [i_19] [i_26 - 1])))));
                    arr_91 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_20 [i_5] [i_5]) <= ((((arr_31 [i_5] [i_7] [i_26 + 1]) ? var_9 : var_7)))));
                    arr_92 [i_26 - 3] [i_26 - 3] [i_5] [i_19] = 2720107259;
                }
                for (int i_27 = 3; i_27 < 15;i_27 += 1) /* same iter space */
                {
                    var_54 *= var_3;
                    var_55 = (max(var_55, (~1545143587)));
                    arr_96 [i_5] [i_7] [i_19] [i_27] [i_19] [i_5] = var_4;

                    for (int i_28 = 1; i_28 < 14;i_28 += 1) /* same iter space */
                    {
                        arr_100 [i_5] [i_7] [i_19] [i_27] [i_28 + 1] = (~var_1);
                        var_56 = (min(var_56, (~var_3)));
                        var_57 = (min(var_57, -var_8));
                    }
                    for (int i_29 = 1; i_29 < 14;i_29 += 1) /* same iter space */
                    {
                        var_58 = var_1;
                        var_59 = (max(var_59, (((-22369 ? -var_14 : -87)))));
                        var_60 = (max(var_60, (arr_46 [i_5] [i_7] [i_19] [i_19] [i_27 - 2] [i_29 - 1])));
                    }
                }
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 17;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 17;i_31 += 1)
                    {
                        {
                            var_61 -= (var_1 ? (((var_2 ? var_10 : var_10))) : (~var_0));
                            var_62 = (max(var_62, ((((arr_94 [i_5] [i_7] [i_5] [i_30] [i_31]) ? (arr_50 [i_5] [i_19] [i_30] [i_31]) : ((((var_1 >= (arr_66 [i_5] [i_5] [i_5] [i_7] [i_19] [i_30] [i_31]))))))))));
                        }
                    }
                }
            }
            for (int i_32 = 0; i_32 < 17;i_32 += 1) /* same iter space */
            {
                arr_115 [i_32] = var_2;
                var_63 *= (((arr_111 [i_5] [i_7] [i_32]) ? (18446744073709551615 || 15) : ((6033 ? 22392 : (arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                arr_116 [i_32] [i_7] [i_32] = var_6;
            }
        }
        /* vectorizable */
        for (int i_33 = 0; i_33 < 17;i_33 += 1) /* same iter space */
        {
            arr_119 [i_33] [i_5] [i_33] = (arr_15 [i_5]);
            arr_120 [i_33] [i_33] = (arr_42 [i_5] [i_33] [i_33] [i_33] [i_33] [i_33]);
            var_64 = (~8);
        }
        for (int i_34 = 0; i_34 < 17;i_34 += 1) /* same iter space */
        {

            for (int i_35 = 0; i_35 < 17;i_35 += 1)
            {
                var_65 = var_6;
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 17;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 17;i_37 += 1)
                    {
                        {
                            arr_132 [i_37] [i_37] [i_35] [i_37] [i_5] = var_4;
                            var_66 = var_5;
                        }
                    }
                }
            }
            var_67 &= ((((var_2 ? (var_14 + var_1) : (((max(86, var_5)))))) <= -985162418487296));
            var_68 = (max(var_68, 24));
        }
    }
    var_69 *= ((((min(var_1, var_2))) ? var_9 : (((var_4 + 2147483647) >> ((((var_9 ? var_5 : -65)) - 5))))));
    #pragma endscop
}
