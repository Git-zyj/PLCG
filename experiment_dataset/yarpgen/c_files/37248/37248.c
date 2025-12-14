/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = var_9;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = -1;
            var_13 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_1] [i_2] [3] = (~var_1);

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_14 = var_10;
                            var_15 = ((~((var_10 ? var_10 : var_2))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = -var_9;
                            arr_19 [i_0] [i_2] [i_2] [i_3] [i_0] = (~var_7);
                        }
                        arr_20 [i_2] [i_1] [i_1] [i_3] = ((62278 ? 1 : 3));
                    }
                }
            }
        }
        var_17 = (min((!var_3), (min(var_3, var_6))));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_24 [i_6] = ((-(!var_9)));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_35 [i_6] [18] [i_8] [i_6] [i_10] = var_10;
                            var_18 = (!var_9);
                        }
                    }
                }
                var_19 = var_0;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_20 = var_0;
                var_21 = (1 / 1);
                var_22 = (~var_3);
                arr_40 [i_6] [i_6] [i_11] = var_5;
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_23 = (((var_5 ^ var_1) ? var_7 : var_3));

                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    var_24 = (var_4 / 1);
                    var_25 = var_0;
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    arr_51 [i_6] [i_7] [i_6] [i_14] = (~var_1);

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_26 = var_2;
                        var_27 = var_4;
                    }
                }
                for (int i_16 = 2; i_16 < 18;i_16 += 1)
                {
                    arr_59 [i_6] [4] [i_6] [i_7] [i_6] [i_16] = var_6;

                    for (int i_17 = 1; i_17 < 19;i_17 += 1)
                    {
                        var_28 = (~var_2);
                        arr_64 [i_6 - 2] [i_6] [i_6] [i_16] [i_17] = var_10;
                        var_29 = (((var_10 + var_10) + var_9));
                        var_30 = (~1);
                    }
                }
                arr_65 [i_6] [i_6] [i_6] = (~var_6);
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_69 [i_6] [i_6] = var_5;
                /* LoopNest 2 */
                for (int i_19 = 3; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_31 = var_4;
                            arr_74 [i_6] [i_7] = ((var_2 * (~var_10)));
                            var_32 = var_7;
                        }
                    }
                }
                arr_75 [i_6] = var_8;
            }
            var_33 = var_6;

            for (int i_21 = 2; i_21 < 19;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        {
                            arr_87 [i_6] [i_6] [i_7] [i_7] [i_21] [i_22] [i_6] = var_5;
                            arr_88 [i_21] [i_6] = var_4;
                            arr_89 [12] [i_7] [i_6] [i_22] [i_23] = (~1574674931);
                        }
                    }
                }
                var_34 = -var_10;

                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        arr_95 [i_6] [i_6] [i_7] [i_6] [i_6] [i_6] = (var_1 + var_4);
                        arr_96 [i_6] [i_6] [i_21 - 1] [i_6] [i_25] = var_5;
                    }
                    var_35 = -var_7;
                }
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_36 = var_6;
                    arr_100 [i_6] [i_6] [i_6] [i_6] = (var_0 & var_2);
                    var_37 = ((~(var_3 ^ var_8)));
                }
                arr_101 [i_6] [i_7] [i_21] = var_9;
            }
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                arr_104 [i_6] [i_6] [i_6] = ((-((var_6 ? var_4 : var_7))));
                var_38 = (var_9 * -var_5);
                arr_105 [i_6] [1] [16] [1] = -var_1;
            }
            arr_106 [i_6] [i_6] [i_7] = 1;
            arr_107 [i_6] = ((var_7 ? var_4 : var_4));
        }
        arr_108 [i_6] = (min(26038, 1));

        for (int i_28 = 0; i_28 < 20;i_28 += 1)
        {
            arr_111 [i_6] = var_4;

            for (int i_29 = 3; i_29 < 18;i_29 += 1)
            {
                arr_115 [i_6] [i_28] [i_29] = ((var_7 ? var_7 : (~-1)));
                arr_116 [19] [i_28] [i_6] [i_29] = var_8;
                arr_117 [8] [i_6] [i_6] [19] = ((~(~var_0)));
                arr_118 [i_6] [i_28] [i_29] = ((-(-33756 + var_8)));
            }
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                arr_121 [i_6] [i_6] = var_2;
                var_39 = min(var_7, (var_3 - var_10));
            }
            for (int i_31 = 1; i_31 < 19;i_31 += 1)
            {

                for (int i_32 = 0; i_32 < 20;i_32 += 1)
                {
                    arr_129 [i_6] [i_6] [i_6] = var_9;
                    arr_130 [i_32] [i_6] [i_6] [i_6 + 1] = (max((~var_9), (min(var_7, var_10))));
                    var_40 = (1 & -19921);
                }
                for (int i_33 = 0; i_33 < 20;i_33 += 1)
                {

                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_41 = var_7;
                        arr_135 [i_6] = ((~((-(23777 >> 0)))));
                    }
                    /* vectorizable */
                    for (int i_35 = 2; i_35 < 16;i_35 += 1) /* same iter space */
                    {
                        var_42 = ((var_10 ? (~var_9) : var_10));
                        var_43 = ((~((var_6 ? var_2 : var_1))));
                    }
                    for (int i_36 = 2; i_36 < 16;i_36 += 1) /* same iter space */
                    {
                        var_44 = (min((~var_2), (25521324 % -5422)));
                        var_45 = ((((~var_5) != (!var_1))) ? var_2 : (+-3509383491));
                        arr_142 [i_6] = var_0;
                        var_46 = (min((~var_1), var_5));
                    }
                    for (int i_37 = 2; i_37 < 16;i_37 += 1) /* same iter space */
                    {
                        arr_146 [i_37 + 3] [i_6] [i_28] [i_6] [i_6] = (max(var_10, var_2));
                        var_47 = var_5;
                    }

                    for (int i_38 = 3; i_38 < 18;i_38 += 1)
                    {
                        var_48 = ((((min(var_3, (~var_8)))) ? (min(((var_4 ? var_2 : var_4)), var_9)) : var_2));
                        arr_149 [i_6] [i_28] [i_31 + 1] [i_28] [i_6] = (max(31780, 19470));
                        var_49 = var_7;
                        arr_150 [i_6 - 1] [i_28] [i_31 + 1] [i_6] [i_31 + 1] = -785583808;
                    }
                    for (int i_39 = 0; i_39 < 20;i_39 += 1)
                    {
                        arr_154 [i_6] [i_28] [i_31] [i_6] [i_39] = (max(var_8, var_10));
                        var_50 = ((~(~var_8)));
                        var_51 = ((((max((min(var_3, var_0)), var_7))) ? (((!(((var_7 ? var_4 : var_7)))))) : (((!(((var_9 ? var_0 : var_9))))))));
                        var_52 = (((var_8 & var_6) | var_9));
                    }
                    arr_155 [i_6] [i_28] [i_28] [16] [i_6] [i_6] = (((~1) + 1679429523));
                }
                /* LoopNest 2 */
                for (int i_40 = 1; i_40 < 1;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 20;i_41 += 1)
                    {
                        {
                            var_53 = var_3;
                            var_54 = var_9;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_42 = 0; i_42 < 1;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 20;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 20;i_44 += 1)
                    {
                        {
                            var_55 = var_5;
                            var_56 = (1 >= var_8);
                            var_57 = ((var_5 ? var_3 : (((!((max(var_9, var_3))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_45 = 0; i_45 < 1;i_45 += 1)
            {
                for (int i_46 = 0; i_46 < 20;i_46 += 1)
                {
                    {

                        for (int i_47 = 2; i_47 < 19;i_47 += 1) /* same iter space */
                        {
                            arr_176 [i_6] [i_28] [i_6] = ((+(((~var_9) ? var_6 : var_7))));
                            arr_177 [i_6] [i_6] = -var_2;
                        }
                        for (int i_48 = 2; i_48 < 19;i_48 += 1) /* same iter space */
                        {
                            arr_180 [i_6] [i_6] [i_6] [i_46] [i_48] = var_5;
                            var_58 = ((var_8 ? (3282252674 && -69453666) : (min(var_5, var_1))));
                            var_59 = (-var_3 / -var_3);
                            var_60 = var_0;
                            var_61 = (+-525631562);
                        }
                        for (int i_49 = 2; i_49 < 19;i_49 += 1) /* same iter space */
                        {
                            arr_184 [i_6] [i_6] = var_5;
                            var_62 = (min(var_9, var_8));
                            arr_185 [i_28] [i_45] [4] [i_6] = var_3;
                            arr_186 [i_6] [i_6] [i_45] = ((-var_6 & ((18949 ? 3929739989 : 250))));
                            arr_187 [9] [8] [i_6] [i_6] [i_6] [i_6] = ((65531 > (min(31770, 1450506181))));
                        }
                        arr_188 [i_6] [i_46] = ((~((-(~var_4)))));
                        arr_189 [i_6] [i_6] [i_6] [i_45] [i_46] [10] = (~var_10);
                    }
                }
            }
        }
        for (int i_50 = 0; i_50 < 20;i_50 += 1)
        {
            arr_194 [i_6] = ((-(((var_9 >= (min(var_1, var_3)))))));
            /* LoopNest 2 */
            for (int i_51 = 1; i_51 < 19;i_51 += 1)
            {
                for (int i_52 = 2; i_52 < 19;i_52 += 1)
                {
                    {
                        var_63 = var_5;
                        arr_201 [i_6] [i_6] [i_6] [i_6] = ((((-var_10 >= (~var_6))) ? (max((min(var_10, var_2)), var_4)) : (((var_3 && var_9) ? var_1 : (max(var_1, -6497))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_53 = 2; i_53 < 19;i_53 += 1)
        {
            var_64 = var_4;

            for (int i_54 = 0; i_54 < 0;i_54 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_55 = 0; i_55 < 20;i_55 += 1)
                {
                    for (int i_56 = 0; i_56 < 20;i_56 += 1)
                    {
                        {
                            var_65 = -19911;
                            var_66 = (!var_2);
                        }
                    }
                }
                var_67 = (var_3 ? ((1450506181 ? 1450506172 : 48)) : var_1);
            }
            for (int i_57 = 0; i_57 < 0;i_57 += 1) /* same iter space */
            {
                var_68 = var_9;
                var_69 = var_3;
            }
            for (int i_58 = 0; i_58 < 0;i_58 += 1) /* same iter space */
            {
                var_70 = ((~(~var_8)));

                for (int i_59 = 0; i_59 < 1;i_59 += 1)
                {
                    var_71 = (((33756 ? 180 : 37)) | ((116 ? 31154 : 25426)));

                    for (int i_60 = 0; i_60 < 20;i_60 += 1)
                    {
                        var_72 = -101;
                        arr_223 [i_53] [i_6] [i_60] = ((var_5 ? var_2 : var_8));
                        arr_224 [i_6] [i_53] [i_6] [i_59] [i_6] = ((var_5 ? var_10 : var_3));
                        var_73 = ((((var_10 ? var_8 : var_10)) - ((var_5 ? var_2 : var_7))));
                    }
                    for (int i_61 = 3; i_61 < 18;i_61 += 1)
                    {
                        arr_227 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1] = var_8;
                        arr_228 [i_6] = (((!var_4) ? var_8 : -var_3));
                        var_74 = (((!var_1) != ((var_2 ? var_10 : var_3))));
                        arr_229 [i_6] = var_6;
                    }
                    for (int i_62 = 1; i_62 < 18;i_62 += 1)
                    {
                        var_75 = ((~((var_3 ? var_1 : var_5))));
                        var_76 = (!var_3);
                        var_77 = ((~(~var_2)));
                        var_78 = (((~var_6) ? (~var_4) : (~var_9)));
                        var_79 = var_1;
                    }
                    for (int i_63 = 1; i_63 < 1;i_63 += 1)
                    {
                        arr_235 [7] [i_6] [i_53] [7] [i_53 + 1] [i_6] [7] = (~var_6);
                        var_80 = ((var_10 ? (~var_4) : var_2));
                    }
                    var_81 = (~var_10);
                }
                /* LoopNest 2 */
                for (int i_64 = 0; i_64 < 20;i_64 += 1)
                {
                    for (int i_65 = 3; i_65 < 17;i_65 += 1)
                    {
                        {
                            var_82 = (1 / 28372);
                            var_83 = var_10;
                            var_84 = var_10;
                            var_85 = (~-var_1);
                            var_86 = -var_4;
                        }
                    }
                }
                arr_242 [i_6] [i_6] [i_58] = var_3;
                var_87 = -var_8;
            }
            var_88 = ((-(~var_5)));
        }
    }
    var_89 = ((!(((var_9 ? 18236654413803432892 : -var_7)))));
    var_90 = 93;
    var_91 = ((+(((var_7 && var_1) ? 12821 : var_9))));
    #pragma endscop
}
