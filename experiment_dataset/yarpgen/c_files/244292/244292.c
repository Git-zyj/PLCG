/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(var_16, var_13))) && -var_16));
        var_19 = var_3;
        arr_4 [i_0] = (((((max(14514960054180582292, var_9)) >> (-var_15 - 1721880571))) >= var_16));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_1));
        var_21 -= ((-(((var_18 / var_15) / -var_6))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 = (min(var_22, var_15));
            arr_12 [i_1] = (!var_6);
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                arr_23 [i_3] [i_3] [i_3] [i_5] = ((((var_10 && (var_5 | var_10))) && var_16));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_29 [i_3 + 1] [i_3] [i_5 + 2] [i_3] = (max(var_11, -6708));
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((-(max(var_3, ((max(var_8, var_1)))))));
                            arr_31 [i_3 - 1] [i_4 - 2] [i_6] [i_3] = (var_9 | (!var_16));
                            arr_32 [i_3] = ((((~(var_18 >= 18446744073709551604))) >= ((((35 | var_16) && var_13)))));
                        }
                    }
                }
                var_23 = 9;
                var_24 = (((max(var_10, var_10)) | (((var_0 | var_6) & (var_9 | var_5)))));
                arr_33 [i_3 - 1] [i_3 - 1] [i_3] = ((1297404386 | (((var_18 >= var_5) + -var_4))));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_25 = var_1;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        {
                            arr_40 [i_3 + 1] [i_3] [i_3 + 1] = var_4;
                            var_26 &= ((-((~(var_3 | var_0)))));
                        }
                    }
                }
            }
            var_27 = (((min(((var_11 << (97 - 79))), (var_12 & 35))) == (max(var_10, (~var_4)))));

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                arr_45 [i_3] [i_11] [2] = var_1;
                arr_46 [i_3 - 1] [i_3] [i_11] = (3828676972 & 1);
                var_28 -= ((10407886374667810140 & (var_16 / var_16)));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_51 [i_3] [i_12] [i_3] [i_3] = ((~((~(var_14 | var_8)))));
                var_29 = (max(var_29, 14943));
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_54 [i_4] [i_4] [i_3] [i_4] = var_8;
                var_30 = (((var_0 / (max(var_18, var_16)))));
                arr_55 [i_3] [i_3 + 1] [i_3] = (-((~(-30 >= var_12))));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {

                for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
                {
                    arr_61 [i_3] [10] [i_4 - 1] [i_3] = var_17;
                    var_31 = (!var_0);
                }
                for (int i_16 = 2; i_16 < 10;i_16 += 1) /* same iter space */
                {
                    var_32 = (max(var_32, var_1));
                    var_33 = (max(var_33, var_2));
                    arr_65 [4] [7] [i_14] [i_3] = (var_12 ^ var_16);
                }
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        arr_72 [i_3] [i_3] [i_3] [i_3] [i_18] [5] [i_17] = (((!var_8) && (!var_12)));
                        arr_73 [2] [2] [i_3] [4] [9] = (-(var_16 != var_15));
                    }

                    for (int i_19 = 2; i_19 < 10;i_19 += 1)
                    {
                        arr_76 [i_3] [2] [i_14] [i_3] [i_19 - 2] = (((var_11 && var_5) == -1218736881));
                        arr_77 [i_3 + 2] [i_3] [5] [i_14] [5] [4] = ((~var_16) > (var_0 && var_17));
                        var_34 *= (var_7 & -212521586);
                    }
                }
                var_35 = ((var_15 + (~20041)));

                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_36 = (min(var_36, ((((var_4 < var_0) & var_5)))));
                    arr_81 [i_4] |= var_7;
                }
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        var_37 ^= ((var_8 + (176 + var_1)));
                        var_38 = -var_15;
                        var_39 -= -var_4;
                        arr_87 [i_3] [i_3] [i_3] [i_21] [i_22] = (~var_8);
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        arr_90 [i_3] = (-4234196383112026402 != var_15);
                        arr_91 [i_21] [i_4 - 2] [8] [10] [i_4] |= (var_2 < var_3);
                    }
                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        arr_94 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = ((~(~1)));
                        arr_95 [i_3] [i_3] [i_3] = var_0;
                    }
                    for (int i_25 = 1; i_25 < 10;i_25 += 1)
                    {
                        arr_98 [i_3] = var_12;
                        arr_99 [i_3] [i_3] [0] [i_3] [5] = var_1;
                    }
                    var_40 = (!-var_11);
                    arr_100 [2] [i_4] [i_14] [i_21] [i_4 + 1] [i_3] = (var_12 & var_13);
                }
                var_41 = (min(var_41, (83 | 124)));
                var_42 *= ((var_7 < (var_18 | var_16)));
            }
        }

        for (int i_26 = 0; i_26 < 11;i_26 += 1)
        {
            var_43 = -var_15;
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 9;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    {
                        arr_110 [i_3] [i_26] [i_3] [i_26] = ((((min((~var_13), (var_12 ^ var_17)))) & ((~(~-4324090588399044649)))));
                        arr_111 [i_3] [i_3 - 1] [i_3 - 1] [i_28] [i_3 - 1] = (((var_15 & var_17) & (~var_5)));
                        arr_112 [6] [i_3] [i_27] [i_27] = ((((((!var_3) >= (!var_9)))) == ((-(max(-1297121592, var_14))))));
                    }
                }
            }
            arr_113 [i_3 + 1] [i_3] = (max(((((~-2974166651094276196) != -30926))), (~var_3)));
            arr_114 [i_3 - 1] [i_3] [i_3 - 1] = 232;

            /* vectorizable */
            for (int i_29 = 2; i_29 < 10;i_29 += 1)
            {
                var_44 = 6465;
                var_45 ^= ((7279059977536578241 & (var_1 * var_1)));
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 11;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 11;i_31 += 1)
                    {
                        {
                            var_46 = ((var_13 - (var_10 ^ var_4)));
                            var_47 ^= (--21555);
                            var_48 = (min(var_48, -20041));
                            arr_125 [i_31] [0] [i_29] |= var_14;
                            var_49 -= -27750316;
                        }
                    }
                }
            }
            for (int i_32 = 0; i_32 < 11;i_32 += 1)
            {
                arr_128 [i_3 - 1] [i_3] [i_32] [i_3] = ((min((1852357898 | var_8), (var_10 <= var_18))));
                arr_129 [i_26] [6] &= ((-(~-28)));
            }
        }
        for (int i_33 = 0; i_33 < 11;i_33 += 1)
        {
            var_50 ^= (((-6682 != 4082445709) != (~var_13)));
            var_51 = (min(var_51, var_15));
            /* LoopNest 2 */
            for (int i_34 = 1; i_34 < 9;i_34 += 1)
            {
                for (int i_35 = 1; i_35 < 10;i_35 += 1)
                {
                    {
                        arr_136 [i_3] = (var_4 ^ ((-(81 && var_4))));
                        arr_137 [i_3 - 1] [i_33] [i_34] [i_33] |= (max(17399122773500345048, 13229));
                    }
                }
            }
        }
    }
    var_52 = (-(~var_4));
    var_53 -= var_10;
    var_54 = 5;
    #pragma endscop
}
