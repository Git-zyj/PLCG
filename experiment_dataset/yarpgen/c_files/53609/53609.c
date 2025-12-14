/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = (((((var_13 ? var_16 : var_6))) ? (~var_13) : ((var_13 ? var_1 : var_13))));
            var_19 = ((((var_13 ? var_2 : var_8)) & -var_10));
            arr_5 [i_0 + 1] [i_0 + 1] = (((~var_11) ? ((var_12 ? var_16 : var_12)) : (var_16 / var_16)));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_20 = (~var_12);
            var_21 |= (-var_12 % var_13);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((24 & ((var_6 ? var_11 : var_7)))))));
                            var_23 = (~var_3);
                            var_24 = (max(var_24, (((-var_3 ? (var_8 / var_1) : (var_11 / var_17))))));
                            var_25 = var_0;
                            var_26 = -4733;
                        }
                    }
                }
            }

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_27 *= (((~var_5) & ((var_12 & (~var_1)))));
                arr_18 [i_0] [i_0] = (((((-595816584 ? 1 : 4738))) + var_13));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_21 [i_0] [5] = var_13;
                var_28 = ((-((var_3 ? (var_13 - var_2) : var_0))));
                var_29 = ((((10463184772271121124 ? 4294967275 : 37942))) || (((var_1 ? var_5 : var_10))));
                var_30 = var_5;
            }
            var_31 = var_16;
            var_32 = (max(var_32, (((!var_1) ? (((!(((var_10 ? var_2 : var_6)))))) : var_9))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_33 = ((!(!var_16)));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_30 [i_0] [i_10] [10] [i_0] [i_0] [i_10] = ((~(var_6 % var_10)));
                        var_34 = (max(var_34, (((var_11 ? ((var_12 ? var_1 : var_4)) : ((var_14 ? var_11 : var_10)))))));

                        for (int i_12 = 1; i_12 < 7;i_12 += 1)
                        {
                            var_35 = ((var_7 ? 1314036402 : (!var_16)));
                            arr_33 [i_0] [i_10] [i_12] = var_9;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_36 = ((4714 ? 18446744073709551615 : 403337574));
                            var_37 -= ((((var_14 ? var_15 : var_6)) / var_4));
                            var_38 = -var_3;
                        }
                        var_39 = var_5;
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_40 [i_0] [i_0] &= (((var_13 >> ((((var_8 ? var_14 : var_15)) - 989130631792073963)))));
            var_40 = ((var_3 ^ (~var_6)));
            var_41 = (((var_2 % var_17) >> (var_8 < var_5)));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            arr_45 [i_0] = -1314036388;

            /* vectorizable */
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_42 = (var_16 ? var_0 : ((var_6 ? var_11 : var_12)));
                var_43 = 1314036388;
                var_44 = var_0;
            }
            for (int i_17 = 1; i_17 < 7;i_17 += 1)
            {

                /* vectorizable */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    var_45 -= var_9;
                    var_46 &= var_7;
                    var_47 = (var_1 % var_7);
                    var_48 = (min(var_48, (((var_5 * (((var_15 ? var_14 : var_15))))))));
                    var_49 = var_11;
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_50 += (((((var_15 ? var_9 : var_1))) ? ((var_11 ? var_2 : var_5)) : (((var_9 ? var_13 : var_9)))));
                            arr_60 [i_0] [i_15] [i_17] [i_19] [i_20] |= var_13;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_63 [2] [4] |= ((var_16 ? var_5 : var_2));
            arr_64 [i_0] [i_0] [i_21] = ((var_8 ? var_17 : var_13));

            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                var_51 = ((var_11 ? var_6 : ((var_3 ? var_15 : var_16))));
                var_52 *= (((((var_13 << (var_5 - 14)))) ? ((var_1 ? var_9 : var_16)) : (~var_0)));
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 10;i_25 += 1)
                    {
                        {
                            var_53 = (!var_5);
                            arr_74 [i_23] [i_21] [i_21] [i_24] [i_21] [i_0] [i_21] = (~1);
                            arr_75 [i_21] [i_0] [i_21] [1] [4] [i_24] [i_25] = (-((var_3 ? var_17 : var_1)));
                        }
                    }
                }

                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    var_54 = ((-4733 ? (-9223372036854775807 - 1) : 1314036379));
                    var_55 = (~var_13);
                    var_56 = (max(var_56, var_15));
                    var_57 += var_9;
                }
                var_58 = var_6;
                var_59 += (((var_15 / var_0) ? var_17 : (var_7 * var_0)));
                var_60 *= var_7;
            }
            for (int i_27 = 1; i_27 < 9;i_27 += 1)
            {

                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    var_61 = 32767;
                    var_62 += (var_13 | var_12);
                }
                for (int i_29 = 0; i_29 < 11;i_29 += 1)
                {
                    var_63 = ((var_4 << (((-1 + 27) - 7))));
                    var_64 = (~var_8);
                    var_65 &= ((var_6 ? var_16 : var_17));
                }
                for (int i_30 = 0; i_30 < 11;i_30 += 1)
                {
                    arr_89 [i_0 + 1] [i_21] [i_21] [i_27 + 1] [i_30] [i_30] = var_10;
                    var_66 = (min(var_66, (18446744073709551606 > 1)));
                }
                var_67 += (!var_4);

                for (int i_31 = 0; i_31 < 11;i_31 += 1)
                {
                    arr_93 [i_0] [i_0] [i_27] [i_21] = -var_12;
                    arr_94 [i_21] [i_21] [i_21] [i_21] = (((var_10 ? var_16 : var_13)));
                    var_68 = (((((var_0 ? var_12 : var_17))) ? var_9 : ((var_9 ? var_2 : var_14))));
                }
                for (int i_32 = 0; i_32 < 11;i_32 += 1)
                {
                    var_69 &= -var_10;
                    var_70 = (((!2980930891) != var_1));
                }
                for (int i_33 = 0; i_33 < 11;i_33 += 1)
                {
                    var_71 = (((~var_6) ? var_14 : (~var_4)));
                    var_72 = var_10;

                    for (int i_34 = 2; i_34 < 8;i_34 += 1)
                    {
                        var_73 = (var_10 / var_12);
                        arr_105 [i_0] [i_21] [i_21] [i_33] [i_34] = ((var_14 ? var_7 : var_14));
                    }
                    for (int i_35 = 0; i_35 < 11;i_35 += 1)
                    {
                        var_74 = (~var_8);
                        var_75 = (16873490581486346820 == 3);
                        var_76 = var_1;
                    }
                    for (int i_36 = 3; i_36 < 9;i_36 += 1)
                    {
                        var_77 = (min(var_77, var_6));
                        arr_111 [i_0] [i_0] [i_0] [i_21] = (!var_17);
                        var_78 = var_17;
                    }
                    for (int i_37 = 3; i_37 < 9;i_37 += 1)
                    {
                        var_79 &= (var_4 ? var_14 : var_16);
                        var_80 = ((var_17 - (var_6 && var_0)));
                        arr_116 [i_37] [i_21] [i_21] [i_0 + 1] = (~var_12);
                        var_81 = var_3;
                        var_82 *= ((var_5 ? var_15 : (~var_0)));
                    }

                    for (int i_38 = 0; i_38 < 11;i_38 += 1) /* same iter space */
                    {
                        var_83 *= var_14;
                        var_84 = ((var_6 ? var_16 : 22));
                        var_85 = (1 ? 1314036372 : 16748558188789757517);
                    }
                    for (int i_39 = 0; i_39 < 11;i_39 += 1) /* same iter space */
                    {
                        var_86 = (min(var_86, var_11));
                        var_87 *= ((var_7 ? var_8 : var_8));
                    }
                    var_88 |= (~var_5);
                }
                var_89 = ((var_4 ? (!var_6) : (var_10 - var_4)));
                var_90 = ((((var_11 ? var_5 : var_2)) >= var_2));
            }
            for (int i_40 = 0; i_40 < 11;i_40 += 1)
            {
                var_91 += (var_16 & var_9);
                arr_125 [8] [10] [i_40] [i_40] |= var_12;
                var_92 = (max(var_92, (var_13 < var_9)));
                var_93 ^= (var_15 & var_5);
            }
        }
        var_94 ^= (var_3 / var_0);
    }
    /* vectorizable */
    for (int i_41 = 0; i_41 < 0;i_41 += 1) /* same iter space */
    {
        var_95 = var_12;
        /* LoopNest 2 */
        for (int i_42 = 4; i_42 < 10;i_42 += 1)
        {
            for (int i_43 = 0; i_43 < 11;i_43 += 1)
            {
                {

                    for (int i_44 = 0; i_44 < 11;i_44 += 1)
                    {
                        var_96 = var_5;
                        arr_139 [i_41] [0] [i_41] [i_43] [i_44] = (var_13 ^ var_2);
                        arr_140 [i_41] [i_42 - 2] [i_41] [6] [5] [i_42 - 2] = (((8 + -1287476581) + ((581399622162570876 ? 3211197592 : 23119))));
                        var_97 = var_15;
                    }
                    arr_141 [i_41] [i_41 + 1] [i_41] = 65535;
                    var_98 *= (var_1 & var_5);
                    var_99 = (((var_0 / var_11) * (-23119 / 50297)));
                }
            }
        }
    }
    var_100 |= ((-var_2 ? ((-9170941253646927385 ? 1 : 2980930917)) : ((((!var_13) ? var_9 : (var_17 || var_3))))));
    var_101 = (max(var_101, var_11));
    #pragma endscop
}
