/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_11, (!-31405)))) ? var_5 : (min(3981706828, 31398))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (((var_6 ? 1 : 31404)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 7;i_4 += 1)
                            {
                                var_15 = (((min(247, -2978473230839992608)) / (((-(var_2 - var_10))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] = (min((min(1835162009, var_3)), (((max(var_3, var_0))))));
                                var_16 = (max(var_16, (((min(var_2, var_6))))));
                            }
                            var_17 = (!8682457646208892474);

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_18 *= (~var_1);
                                var_19 = var_10;
                                arr_15 [i_5] = (((((var_3 ? var_5 : var_0))) ? var_10 : -5780515231606243020));
                            }
                        }
                    }
                }
                arr_16 [8] [8] = ((1 ? (((var_12 ? -var_10 : (var_10 | var_2)))) : (min(var_3, (min(var_4, var_12))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((var_6 ? var_0 : ((var_0 ? var_4 : var_5)))))));
                                var_21 *= (~var_1);
                                var_22 = ((2191263456 ? 4 : var_5));
                                var_23 = ((8 ? var_5 : (((-1321433718 ? -1157 : -1835162005)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_24 = (max(var_24, -var_12));
                                var_25 -= (-8146412301038864914 ? 0 : var_1);
                                var_26 = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_35 [i_11] [i_12] [i_11] [i_11] [i_11 - 2] [i_11] [i_11 + 1] = var_10;
                                var_27 += var_2;
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_28 = (max((~var_11), (~var_12)));
                    var_29 = var_4;
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_30 = ((-var_10 ? (((min(var_1, var_9)))) : (max(var_11, 8682457646208892489))));
                                var_31 = (max(var_31, (((((-2505021524187229975 ? var_6 : 12)) >= (min((1 - var_1), var_5)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_32 &= (max(242, 4));
                                var_33 = ((-(var_12 < 20307)));
                                var_34 = ((min((min(23, 930533359858528662), 2103703839))));
                                arr_49 [i_0] [i_13] = (max(var_7, ((-759884801 ? var_4 : var_1))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    var_35 = -var_0;
                    var_36 = (min(var_36, (!0)));
                    arr_52 [i_0] [i_0] = 65506;
                    var_37 *= (1 <= var_8);

                    for (int i_19 = 3; i_19 < 8;i_19 += 1) /* same iter space */
                    {
                        arr_56 [i_19 - 2] [i_19] [i_0] = 60833748;

                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            var_38 = (var_10 >= var_0);
                            arr_61 [i_0] [i_19] [i_18] [i_18] [i_20] = ((var_10 ? 53 : var_0));
                        }
                        for (int i_21 = 2; i_21 < 9;i_21 += 1)
                        {
                            var_39 = (min(var_39, (-7590469958309388964 + var_12)));
                            arr_64 [i_0] [i_1 - 1] [i_18] [i_0] [i_21] [i_19] [i_18] = (1580296284 % 1152921504606846975);
                            var_40 |= (2812627815 <= 18446744073709551615);
                            var_41 *= ((11 ? 20 : 247));
                        }
                        for (int i_22 = 4; i_22 < 10;i_22 += 1)
                        {
                            var_42 *= var_6;
                            var_43 = -26;
                            var_44 = (max(var_44, -var_2));
                        }
                        for (int i_23 = 3; i_23 < 7;i_23 += 1)
                        {
                            var_45 *= var_6;
                            var_46 = ((~(31950 && var_0)));
                            var_47 = (var_9 ? var_12 : var_9);
                        }
                        arr_70 [i_0] [i_0] [i_0] [i_18] [i_19] = (var_1 ? -247 : -6586498340759687288);
                    }
                    for (int i_24 = 3; i_24 < 8;i_24 += 1) /* same iter space */
                    {
                        var_48 = (60833756 % var_5);
                        var_49 = var_7;
                        arr_75 [i_0] [i_0] [i_18] [i_24] = -4525;
                        arr_76 [i_0] [i_1 - 2] [i_18] [i_1 - 2] = (~var_6);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_25 = 1; i_25 < 10;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 12;i_26 += 1)
        {
            {
                var_50 *= (((((~var_1) & -10116)) ^ ((var_12 ? var_2 : (!var_2)))));

                for (int i_27 = 0; i_27 < 12;i_27 += 1)
                {
                    arr_86 [i_25] = ((var_11 ? ((max(var_12, (min(var_6, var_0))))) : (max(60833744, (min(var_4, 4524))))));
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 12;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 12;i_29 += 1)
                        {
                            {
                                var_51 = (min(-1835162009, var_0));
                                var_52 = (max(60833744, -1152921504606846950));
                                var_53 = ((var_9 << ((((-31939 ? -60833757 : 26733)) + 60833774))));
                                var_54 = ((var_3 ? (min(((min(var_8, 0))), var_11)) : (max(3957840384751862926, (min(7956010146221155290, var_1))))));
                                arr_94 [i_25] [2] [i_27] [i_25] [2] [8] = ((max(var_5, var_9)));
                            }
                        }
                    }
                    var_55 = 252;

                    for (int i_30 = 0; i_30 < 12;i_30 += 1) /* same iter space */
                    {
                        var_56 = var_10;
                        var_57 = (((min(190, var_11)) % (((~(((var_3 + 2147483647) >> (var_9 - 73))))))));
                    }
                    for (int i_31 = 0; i_31 < 12;i_31 += 1) /* same iter space */
                    {
                        arr_100 [i_25] [i_26] [i_26] [i_26] [i_26] = ((min(var_7, 1)));

                        /* vectorizable */
                        for (int i_32 = 1; i_32 < 10;i_32 += 1)
                        {
                            var_58 = (max(var_58, (~var_3)));
                            var_59 = 4294967295;
                            arr_103 [i_25 - 1] [i_25] [i_26] [2] [2] [i_32 - 1] = 0;
                        }
                        /* vectorizable */
                        for (int i_33 = 4; i_33 < 9;i_33 += 1)
                        {
                            var_60 = (min(var_60, var_3));
                            arr_107 [4] [7] [7] [7] [i_25] = var_11;
                        }
                        var_61 = ((min((~var_9), 1909174545)));
                    }
                    /* LoopNest 2 */
                    for (int i_34 = 0; i_34 < 12;i_34 += 1)
                    {
                        for (int i_35 = 0; i_35 < 12;i_35 += 1)
                        {
                            {
                                var_62 = ((-((-var_4 - (min(15, var_11))))));
                                var_63 = (max(((min(1, var_10))), (min(1, -1))));
                            }
                        }
                    }
                }
                for (int i_36 = 2; i_36 < 9;i_36 += 1)
                {
                    arr_115 [i_25 - 1] [1] [i_25] = (((min(var_1, var_1)) || ((max(-1835161996, 60833772)))));
                    /* LoopNest 2 */
                    for (int i_37 = 0; i_37 < 12;i_37 += 1)
                    {
                        for (int i_38 = 0; i_38 < 12;i_38 += 1)
                        {
                            {
                                arr_121 [5] [i_26] [i_36] [i_25] = (!var_6);
                                var_64 = (max(0, ((1 ? -3009109318617587750 : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_39 = 3; i_39 < 10;i_39 += 1)
                    {
                        for (int i_40 = 0; i_40 < 12;i_40 += 1)
                        {
                            {
                                var_65 = (~-var_7);
                                var_66 = (max(var_66, ((min((min(var_11, var_2)), ((max(var_8, var_12))))))));
                                var_67 = (((((-((var_5 ? var_6 : var_11))))) ? var_4 : ((min(var_8, var_8)))));
                            }
                        }
                    }
                }
                for (int i_41 = 0; i_41 < 12;i_41 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_42 = 1; i_42 < 11;i_42 += 1)
                    {
                        for (int i_43 = 0; i_43 < 12;i_43 += 1)
                        {
                            {
                                var_68 = (max(var_68, (((~(~-1))))));
                                var_69 = ((((3575247179 ? var_0 : 11))) ? 541190372 : (min(-60833773, -1)));
                            }
                        }
                    }
                    arr_135 [i_25 + 1] [i_41] &= (-var_10 ? (max(6511023693715273989, var_4)) : var_4);
                }
                var_70 = ((-2992408263 ? (min(var_6, var_10)) : (!44978)));
                /* LoopNest 3 */
                for (int i_44 = 0; i_44 < 12;i_44 += 1)
                {
                    for (int i_45 = 0; i_45 < 12;i_45 += 1)
                    {
                        for (int i_46 = 0; i_46 < 12;i_46 += 1)
                        {
                            {
                                var_71 = var_4;
                                var_72 = ((var_1 * (var_9 || var_11)));
                                var_73 -= ((min(11926, var_7)));
                                var_74 = (min(var_74, var_5));
                                arr_144 [i_25] [i_25] [i_44] [i_45] [i_46] [i_25] [i_26] = var_12;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_47 = 0; i_47 < 12;i_47 += 1)
                {
                    for (int i_48 = 1; i_48 < 11;i_48 += 1)
                    {
                        {
                            var_75 -= (min(3273174615, 2341665107));
                            var_76 = (-((var_11 ? 1 : var_2)));
                            var_77 = (min(var_77, ((max((!var_9), (var_6 > -2564666528624189096))))));
                        }
                    }
                }
            }
        }
    }
    var_78 = (~var_11);
    #pragma endscop
}
