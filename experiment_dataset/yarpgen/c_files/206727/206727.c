/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (min(var_12, (7348794266386603094 || -1169161226)));
        arr_3 [1] = ((min(var_7, ((max(126, var_4))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] = (min((max(var_1, -var_11)), var_5));
                    var_13 = (min((max(2253212609002189584, var_4)), (max(1890303702, 11097949807322948521))));
                    var_14 |= (min(-var_3, 8256173151116855693));
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_19 [i_4] [i_5] [i_5] = (1169161211 + -var_7);
                arr_20 [i_5] [i_5] = var_7;
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_23 [i_5] [i_5] = ((((var_7 ? var_4 : var_11)) / ((((-9223372036854775807 - 1) | var_5)))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_15 ^= ((-var_5 ? (var_10 < var_6) : var_1));
                            arr_28 [i_5] [i_5] [i_7] [i_8] [i_9] = var_8;
                            var_16 -= ((1169161198 && (((120 ? 5797331519411042862 : 1026055607996987752)))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_17 = var_11;

                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_18 = (--8256173151116855667);
                        var_19 = (max(var_19, -0));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_20 = (((!1169161226) + -var_11));
                        var_21 = var_10;
                        var_22 = (min(var_22, (((var_10 ? (var_11 < var_11) : ((var_4 ? var_10 : var_1)))))));
                        arr_37 [i_7] [i_5] [12] [6] [i_10] [i_5] [i_5] = var_8;
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_23 = var_0;
                        arr_42 [i_5] [3] [i_7] [i_13] [i_13] [i_7] [1] = var_7;
                    }
                    var_24 = (min(var_24, var_3));
                }
                var_25 = var_6;
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                var_26 = (min(var_26, ((((!-27904) ? 25124 : (var_5 > var_0))))));
                arr_46 [i_4] [0] [i_4] [i_5] = (!var_4);
            }
            for (int i_15 = 2; i_15 < 13;i_15 += 1)
            {
                var_27 = (var_10 / -var_7);

                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    var_28 ^= (var_3 ^ var_7);
                    arr_52 [i_4 + 1] [i_4 + 1] [i_15] [i_16] [i_15] [i_5] = ((!(var_10 && var_9)));

                    for (int i_17 = 2; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        arr_56 [i_4] [i_5] [i_15] [i_5] [i_15] = var_10;
                        arr_57 [i_5] [i_15] [i_16] = var_6;
                        var_29 = -var_2;
                        var_30 -= var_2;
                        var_31 = (min(var_31, var_10));
                    }
                    for (int i_18 = 2; i_18 < 10;i_18 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, (((!(var_3 <= var_7))))));
                        var_33 = (min(var_33, (~-1169161211)));
                        arr_61 [i_4] [4] [i_4] [i_16] [i_5] [i_16] [i_18] = (var_8 | var_11);
                        var_34 = (((var_6 / 118705551261972917) + ((var_7 ? 14691901765558656603 : 57232))));
                        var_35 = ((var_9 ? (!1169161226) : var_10));
                    }
                }
                var_36 = (max(var_36, (((-(!-21377))))));
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 12;i_20 += 1)
                    {
                        {
                            var_37 ^= (--1169161210);
                            arr_68 [i_5] [i_15] = ((-((var_4 ? 8287 : var_3))));
                        }
                    }
                }
            }

            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                var_38 = (min(var_38, (~var_4)));
                arr_71 [i_4] [i_5] [4] [1] = -var_6;
                arr_72 [i_5] = (var_2 <= -6196);
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            var_39 = (min(var_39, var_7));
                            var_40 = (min(var_40, var_9));
                        }
                    }
                }
            }
            for (int i_24 = 1; i_24 < 12;i_24 += 1)
            {

                for (int i_25 = 2; i_25 < 11;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_41 -= var_2;
                        arr_93 [i_4] [i_5] [i_5] [i_25 + 2] [i_26] = var_7;
                    }
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        var_42 = (max(var_42, (-21377 | 4190208)));
                        var_43 += var_11;
                    }

                    for (int i_28 = 2; i_28 < 12;i_28 += 1)
                    {
                        arr_100 [i_4] [i_5] [i_5] [i_25 + 3] [8] = ((~(~var_4)));
                        arr_101 [i_5] = -var_2;
                    }
                    var_44 = (((var_8 / var_5) ? var_2 : var_6));
                }
                for (int i_29 = 0; i_29 < 14;i_29 += 1)
                {

                    for (int i_30 = 0; i_30 < 14;i_30 += 1)
                    {
                        var_45 = var_2;
                        arr_107 [3] [3] [i_5] [i_29] [i_29] = (-8256173151116855657 && var_1);
                        var_46 = (max(var_46, var_4));
                        arr_108 [i_24] [i_24] [4] [i_24] [i_24] [i_5] [i_24] = -var_7;
                    }

                    for (int i_31 = 0; i_31 < 14;i_31 += 1)
                    {
                        arr_111 [i_5] = (~-var_4);
                        var_47 = (max(var_47, var_9));
                    }
                }
                arr_112 [i_4] [i_5] [i_24] [i_5] = -var_0;

                for (int i_32 = 2; i_32 < 12;i_32 += 1) /* same iter space */
                {
                    arr_115 [i_5] [i_24] [i_5] [i_5] = (((var_9 ? var_2 : 4290777062)));
                    var_48 = (min(var_48, (var_11 && var_10)));
                    arr_116 [i_5] [i_5] = var_10;
                    var_49 = (!var_7);
                    arr_117 [i_5] [i_24] [i_5] [i_5] = (((!var_4) ? var_9 : -47));
                }
                for (int i_33 = 2; i_33 < 12;i_33 += 1) /* same iter space */
                {
                    arr_122 [11] [i_5] [i_5] [i_4] = (--4190197);
                    arr_123 [i_33 - 2] [i_5] [i_5] [i_4] = (var_2 * var_6);
                }
                for (int i_34 = 0; i_34 < 14;i_34 += 1)
                {
                    var_50 = (-12 == 42875);

                    for (int i_35 = 1; i_35 < 1;i_35 += 1)
                    {
                        arr_132 [i_24] [i_5] [i_24 + 2] [i_34] [i_35] [i_5] = (((((var_8 ? var_10 : var_8))) && var_8));
                        var_51 ^= (var_9 || var_3);
                    }
                    arr_133 [i_34] [i_5] [i_5] [i_4] [i_5] [1] = (((!4141475842) ^ (var_3 / var_7)));
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 14;i_36 += 1)
                {
                    for (int i_37 = 3; i_37 < 11;i_37 += 1)
                    {
                        {
                            arr_138 [9] [i_5] = (!var_6);
                            var_52 = (min(var_52, (((9 ? 247 : 0)))));
                            arr_139 [i_4 + 1] [i_5] = ((-6196 ? 504540362 : 867585840));
                            var_53 = (!var_9);
                            arr_140 [i_5] [i_24] [i_24] [i_36] [i_37] = 18446744073709551615;
                        }
                    }
                }
            }
            for (int i_38 = 0; i_38 < 14;i_38 += 1)
            {
                arr_143 [i_5] = ((var_2 ? var_5 : var_1));
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 14;i_39 += 1)
                {
                    for (int i_40 = 1; i_40 < 11;i_40 += 1)
                    {
                        {
                            var_54 = var_7;
                            arr_151 [i_4] [i_5] [i_38] [i_39] [i_40] [i_39] [i_39] = (!var_10);
                            arr_152 [1] [i_5] [i_38] [i_5] [i_40] = var_1;
                        }
                    }
                }
            }
        }
        for (int i_41 = 0; i_41 < 14;i_41 += 1)
        {
            var_55 ^= (((((min(4290777091, 6)))) ? (867585840 + -3427381457) : (var_8 >= 18446744073709551615)));
            var_56 -= (min((min((var_9 | 867585821), var_9)), (((var_3 ? ((-9176714878393083948 ? var_0 : var_9)) : 1169161205)))));

            /* vectorizable */
            for (int i_42 = 1; i_42 < 10;i_42 += 1)
            {
                var_57 = (max(var_57, var_1));
                var_58 = -var_4;
            }
            var_59 = (var_6 & var_9);
        }
        /* vectorizable */
        for (int i_43 = 0; i_43 < 14;i_43 += 1)
        {
            var_60 -= -1871528160;
            var_61 -= var_2;
            /* LoopNest 3 */
            for (int i_44 = 2; i_44 < 11;i_44 += 1)
            {
                for (int i_45 = 3; i_45 < 11;i_45 += 1)
                {
                    for (int i_46 = 0; i_46 < 14;i_46 += 1)
                    {
                        {
                            arr_169 [i_4 + 1] [i_43] [i_44 + 1] [i_45] [i_46] = ((var_4 ? ((var_3 ? var_10 : var_0)) : (var_0 >= var_9)));
                            var_62 = -1671282999;
                            var_63 += (!-18718);
                            var_64 *= -0;
                            arr_170 [i_43] [i_43] [i_45] [i_45] [i_46] [i_43] = (var_11 <= var_1);
                        }
                    }
                }
            }
        }
        for (int i_47 = 0; i_47 < 14;i_47 += 1)
        {
            var_65 = ((((min(-358616635, -var_2))) ? (((max(var_2, -18718)))) : (var_7 * var_7)));
            var_66 = (max(var_66, var_9));
            var_67 = ((((min(var_10, 11097949807322948539))) ? (((max(var_8, var_8)))) : (max(var_7, var_2))));
            arr_175 [i_47] = (min(((((max(var_0, var_6))) + (max(var_2, var_5)))), (((!((max(var_8, var_0))))))));
        }
        arr_176 [i_4] [12] = (max((((var_10 - var_4) ? var_1 : (max(3427381455, 65513)))), var_11));
        var_68 = (max(var_68, -1364780484));
        var_69 = (min(var_69, 10));
    }
    #pragma endscop
}
