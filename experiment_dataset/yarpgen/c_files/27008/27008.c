/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [7] [i_2] = ((min(var_3, var_2)));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [10] [i_1] [i_1] [i_1] = ((2 ? (min(((max(var_10, var_3))), (min(4349967136907743822, -4349967136907743822)))) : (max((min(var_7, var_7)), var_10))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_1] [i_4] = (((min(var_4, var_9))) ? var_4 : var_0);
                            arr_16 [i_2] [i_2] [i_1] = ((min(var_7, var_3)));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_20 [6] [11] [5] [5] [i_3] [i_1] [5] = (((min(var_2, var_6))));
                            arr_21 [i_1] [i_1] [i_1] = -4349967136907743822;
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            arr_24 [i_6 + 1] [i_1] [i_2] = (max(-1410231613, 9));
                            var_11 = (max(((max(var_2, var_4))), ((min(var_9, var_9)))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_12 ^= var_6;
                            var_13 = (max((min(var_6, var_3)), (((((max(var_2, var_2))) ? 9 : var_4)))));
                        }
                        arr_29 [i_1] [i_3] [i_2] [i_1] = (max(1, -4349967136907743804));
                    }
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_2] [i_1] = (min((((var_8 ? var_9 : var_10))), (min(var_4, var_7))));
                        var_14 = ((var_5 ? var_1 : -1410231613));
                        arr_33 [i_0] [i_0] [i_1] = (max(((var_0 ? var_10 : var_9)), var_8));
                        var_15 = (((((-4349967136907743817 ? 131071 : 1))) ? var_8 : ((var_6 ? var_6 : var_6))));
                        arr_34 [i_0] [7] [i_0] [i_1] [i_2] = (((var_5 ? var_8 : var_8)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_42 [i_0] [i_9] [i_0] [i_11] [i_11] = (max((((min(var_6, var_7)))), (max(var_9, var_1))));
                        arr_43 [i_11] [i_11] [i_11] [i_0] = ((((max(var_3, ((var_9 ? var_9 : var_6))))) ? var_3 : (max((((var_4 ? var_0 : var_10))), var_2))));
                        arr_44 [i_11] [0] [i_10] [i_9] [4] |= (max(var_1, ((var_9 ? var_1 : var_0))));
                    }
                    arr_45 [i_0] = ((min(var_5, var_8)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_52 [i_12] [i_12] [i_12] = ((38825 ? (((-4349967136907743817 ? 38384 : -99))) : (max(var_4, var_10))));
                    var_16 += ((var_5 ? var_1 : var_3));
                    var_17 = (min(var_17, -1145666901));

                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        arr_55 [i_0] [i_12 + 1] [7] [i_14] [i_12] = var_7;
                        arr_56 [i_0] [i_12] = var_5;
                        var_18 += 131066;
                        arr_57 [i_12] [i_12] [i_12] = var_1;
                    }
                    for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
                    {
                        arr_61 [i_12] [i_12] [i_12] [i_12] [6] = (((var_3 ? var_5 : var_4)));
                        var_19 = var_8;
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 10;i_16 += 1)
    {
        var_20 = (max(var_9, var_1));
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 8;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            {
                                arr_73 [i_16 + 2] [i_16] [i_19] [i_16] = (max((min(-1, var_8)), 1885293952671460351));
                                var_21 = var_8;
                                var_22 = (max(-10, 2));
                            }
                        }
                    }
                    var_23 = ((var_7 ? (((var_9 ? var_8 : var_6))) : (((var_6 ? var_0 : (max(var_8, var_7)))))));
                }
            }
        }
        arr_74 [i_16] = max((min(var_3, ((var_0 ? var_9 : var_5)))), var_10);
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        var_24 = var_9;
        var_25 = (max(var_25, (((var_6 ? var_9 : var_5)))));
    }
    for (int i_22 = 0; i_22 < 16;i_22 += 1)
    {
        arr_81 [i_22] = (max(var_8, ((var_2 ? var_3 : (max(4349967136907743836, 1))))));
        var_26 = (min(var_26, (((min(4294967295, -1))))));
        var_27 = (min(var_27, ((max((min(((var_5 ? var_1 : var_7)), var_2)), ((min(((var_4 ? var_9 : var_2)), (max(var_8, var_9))))))))));
    }

    for (int i_23 = 2; i_23 < 22;i_23 += 1)
    {
        var_28 -= ((min(((var_4 ? var_8 : var_3)), var_3)));
        var_29 = var_8;
        var_30 = var_7;

        for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
        {
            arr_87 [i_23 + 1] [1] = (max(((max(var_2, ((min(-117, 97)))))), (max(var_2, (max(var_9, var_9))))));
            arr_88 [i_24] [i_24] [i_23] |= (((1 ? (max(-1, 5818566411638140848)) : 97)));
            /* LoopNest 3 */
            for (int i_25 = 1; i_25 < 22;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        {
                            arr_97 [i_27] = (min((max((min(var_7, var_8)), var_8)), var_7));
                            var_31 = (max(var_31, (((var_5 ? (((((var_5 ? var_9 : var_4))) ? (max(var_1, var_8)) : var_2)) : var_6)))));
                            var_32 = 4349967136907743836;
                        }
                    }
                }
            }

            for (int i_28 = 0; i_28 < 24;i_28 += 1)
            {
                arr_100 [i_23] [i_23] [i_28] = (((var_2 ? var_1 : (min(var_8, var_1)))));
                arr_101 [i_24] [i_24] [i_24] = (min(var_0, (max(var_10, var_6))));
            }
            for (int i_29 = 0; i_29 < 24;i_29 += 1)
            {
                arr_104 [i_23] [i_29] = ((max(var_1, var_7)));
                var_33 = (max(-2071602189718942576, -4349967136907743822));
                arr_105 [i_24] [i_24] [12] = ((min(var_7, ((var_8 ? var_4 : var_7)))));

                /* vectorizable */
                for (int i_30 = 1; i_30 < 21;i_30 += 1)
                {
                    var_34 = ((var_2 ? var_7 : var_4));
                    arr_108 [i_23] [i_30] [i_23] [i_30 + 2] = var_10;
                    var_35 = var_9;
                    arr_109 [i_24] [i_30] = var_4;
                }
            }
            for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
            {
                var_36 ^= var_0;
                var_37 = ((min(var_3, var_2)));
                /* LoopNest 2 */
                for (int i_32 = 2; i_32 < 23;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 0;i_33 += 1)
                    {
                        {
                            arr_120 [i_33] [0] [1] [16] [23] [i_24] [11] = 1747820581;
                            var_38 = (min((((-2147483647 - 1) ? 18775 : 58)), -9213948037543385582));
                            arr_121 [i_23] = (((((var_6 ? var_8 : var_6))) ? (((max(var_5, var_2)))) : (min(var_6, var_3))));
                        }
                    }
                }
                var_39 = (max(var_39, ((max(var_5, var_10)))));
                var_40 *= (max(var_1, var_9));
            }
            for (int i_34 = 0; i_34 < 24;i_34 += 1) /* same iter space */
            {
                arr_126 [i_24] [5] = ((var_0 ? (max(((max(var_3, var_0))), 0)) : ((max(var_2, var_8)))));

                for (int i_35 = 1; i_35 < 22;i_35 += 1)
                {
                    var_41 = var_9;
                    arr_131 [i_35] [2] [i_35] [i_35] = (max(((var_7 ? ((var_5 ? var_5 : var_5)) : (min(var_0, var_5)))), -532321871));

                    for (int i_36 = 3; i_36 < 22;i_36 += 1)
                    {
                        arr_134 [i_34] [i_35] = (min(99, 127));
                        var_42 ^= (var_8 ? ((var_0 ? (min(11956, -4349967136907743837)) : var_6)) : (min(var_4, var_7)));
                        var_43 = (max(var_8, var_8));
                        arr_135 [i_35] [i_24] = var_3;
                        arr_136 [i_35] [1] [i_34] = 464261299;
                    }
                    arr_137 [i_23] [i_35] [2] = ((((((var_4 ? var_5 : var_9))) ? var_1 : var_0)));
                }
                for (int i_37 = 0; i_37 < 24;i_37 += 1)
                {

                    for (int i_38 = 0; i_38 < 24;i_38 += 1)
                    {
                        var_44 = (min(var_44, var_10));
                        arr_146 [i_23] [i_24] [16] [i_37] [i_23] = ((max(var_5, ((min(7061, 2147483646))))));
                        arr_147 [i_23] [i_34] [i_38] = var_6;
                        arr_148 [i_23] [i_24] [i_24] [i_24] [21] &= (max(var_8, ((max(var_8, var_2)))));
                    }
                    for (int i_39 = 1; i_39 < 23;i_39 += 1)
                    {
                        arr_152 [19] [1] [i_34] [i_37] [i_39] = (((((var_10 ? (((min(0, -58)))) : (min(var_9, var_4))))) ? var_2 : ((var_9 ? var_0 : var_5))));
                        var_45 = var_2;
                        arr_153 [i_23] [i_23] [i_34] [1] [i_39] = var_6;
                    }
                    for (int i_40 = 0; i_40 < 24;i_40 += 1)
                    {
                        var_46 = var_0;
                        var_47 = (max(var_9, var_9));
                    }
                    arr_156 [i_23] [i_24] = var_6;
                    arr_157 [i_24] [i_24] [i_34] [i_37] = (max((((max(var_2, var_6)))), var_6));
                }
                for (int i_41 = 3; i_41 < 23;i_41 += 1)
                {
                    var_48 = var_1;
                    arr_161 [i_23] [i_24] [i_41] = (min((max(var_1, var_0)), var_7));
                    arr_162 [i_23 - 2] [i_24] [9] [i_41] = var_0;
                }
                var_49 = var_10;
            }
        }
        for (int i_42 = 0; i_42 < 24;i_42 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_43 = 1; i_43 < 1;i_43 += 1)
            {
                for (int i_44 = 3; i_44 < 23;i_44 += 1)
                {
                    {
                        arr_173 [0] [i_42] [i_44] [9] = var_3;
                        var_50 = var_8;
                    }
                }
            }
            var_51 = var_1;
        }
        /* LoopNest 3 */
        for (int i_45 = 0; i_45 < 24;i_45 += 1)
        {
            for (int i_46 = 0; i_46 < 24;i_46 += 1)
            {
                for (int i_47 = 4; i_47 < 23;i_47 += 1)
                {
                    {
                        var_52 = ((max(102, 1)));
                        var_53 -= (min((max(((var_0 ? var_9 : var_8)), (min(var_0, var_6)))), (((min(var_10, var_9))))));
                        arr_183 [19] [i_46] [i_45] = (min(var_5, var_3));
                    }
                }
            }
        }
    }
    var_54 = var_4;

    for (int i_48 = 0; i_48 < 25;i_48 += 1)
    {

        /* vectorizable */
        for (int i_49 = 1; i_49 < 22;i_49 += 1) /* same iter space */
        {
            var_55 = var_1;
            var_56 -= 121;
            /* LoopNest 2 */
            for (int i_50 = 0; i_50 < 1;i_50 += 1)
            {
                for (int i_51 = 0; i_51 < 25;i_51 += 1)
                {
                    {

                        for (int i_52 = 0; i_52 < 1;i_52 += 1)
                        {
                            arr_195 [i_49] [i_48] [i_49] [i_50] [i_51] [i_52] = var_5;
                            arr_196 [i_48] [i_48] [i_49] [3] [i_48] [i_48] = var_0;
                        }
                        var_57 = ((var_2 ? var_9 : var_6));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_53 = 1; i_53 < 22;i_53 += 1) /* same iter space */
        {
            var_58 = ((var_0 ? var_7 : var_9));
            arr_199 [i_53 + 2] = var_2;

            for (int i_54 = 0; i_54 < 25;i_54 += 1)
            {
                arr_202 [20] [i_53] [i_53] = ((var_0 ? -44 : var_10));
                arr_203 [i_48] [i_48] [i_54] [1] = var_4;
                var_59 = var_0;
                /* LoopNest 2 */
                for (int i_55 = 0; i_55 < 25;i_55 += 1)
                {
                    for (int i_56 = 0; i_56 < 1;i_56 += 1)
                    {
                        {
                            arr_208 [i_54] [3] [3] [i_55] [i_54] [i_55] [i_53] = var_9;
                            arr_209 [i_56] [i_54] [i_54] [i_53] [i_48] = ((var_6 ? -58 : 60198327));
                            var_60 = 3099778044336449212;
                            var_61 = ((var_2 ? var_6 : ((var_2 ? var_2 : var_8))));
                        }
                    }
                }
            }
            for (int i_57 = 0; i_57 < 25;i_57 += 1)
            {
                var_62 = var_10;

                for (int i_58 = 2; i_58 < 23;i_58 += 1)
                {
                    arr_216 [i_48] [i_58] [1] [i_58] [i_48] [i_53] = ((2147483646 ? var_7 : var_9));
                    arr_217 [18] [i_53] [6] [i_58] [i_53] = var_5;

                    for (int i_59 = 0; i_59 < 1;i_59 += 1)
                    {
                        var_63 = var_3;
                        var_64 -= var_5;
                        var_65 -= var_9;
                        var_66 = (min(var_66, -1530213838));
                        var_67 = var_8;
                    }
                    var_68 = var_2;
                }
                for (int i_60 = 0; i_60 < 25;i_60 += 1)
                {
                    var_69 = (((((var_7 ? var_6 : var_4))) ? 18446744073709551615 : var_10));
                    arr_224 [i_57] [i_53 - 1] [i_53 - 1] [i_60] [i_53] = var_6;

                    for (int i_61 = 0; i_61 < 1;i_61 += 1)
                    {
                        var_70 = var_10;
                        arr_227 [i_57] = (((((var_0 ? var_2 : var_6))) ? 9223372036854775807 : var_5));
                    }
                    var_71 = (max(var_71, var_2));
                    var_72 = var_5;
                }
                for (int i_62 = 0; i_62 < 25;i_62 += 1)
                {
                    var_73 = (max(var_73, (((-4349967136907743837 ? 4208784498 : 31)))));

                    for (int i_63 = 0; i_63 < 25;i_63 += 1)
                    {
                        var_74 ^= var_3;
                        var_75 = (min(var_75, ((var_7 ? var_5 : var_10))));
                    }
                    arr_234 [i_62] [i_53] [14] [i_53] = var_9;
                    arr_235 [i_62] [i_53 + 3] [6] [i_62] [i_62] = 1;
                }
                for (int i_64 = 0; i_64 < 25;i_64 += 1)
                {

                    for (int i_65 = 1; i_65 < 22;i_65 += 1) /* same iter space */
                    {
                        arr_241 [i_48] [i_65] [i_48] = var_3;
                        arr_242 [i_48] [i_53 - 1] [i_48] [i_57] [i_64] [i_65] = ((-41 ? 1 : 127));
                        arr_243 [i_65] [i_53] [i_53] [i_64] [i_53] = var_8;
                        var_76 = var_6;
                        var_77 = var_9;
                    }
                    for (int i_66 = 1; i_66 < 22;i_66 += 1) /* same iter space */
                    {
                        arr_246 [i_53] [i_64] = var_4;
                        var_78 = var_3;
                        var_79 = var_1;
                        var_80 = var_7;
                        var_81 = var_9;
                    }
                    arr_247 [8] = ((var_8 ? var_6 : var_2));
                }
            }
            for (int i_67 = 2; i_67 < 24;i_67 += 1) /* same iter space */
            {
                var_82 = 12687093339454910497;
                arr_250 [i_67] [i_67] = ((var_10 ? var_6 : var_10));
            }
            for (int i_68 = 2; i_68 < 24;i_68 += 1) /* same iter space */
            {
                arr_254 [i_48] [i_53] [i_68] [i_68] = var_2;

                for (int i_69 = 0; i_69 < 25;i_69 += 1)
                {
                    arr_258 [i_48] [5] [23] [i_68] [1] [23] = ((var_8 ? var_6 : ((var_1 ? var_4 : var_6))));
                    arr_259 [i_68] [i_68] [i_68] = var_9;
                    var_83 -= var_9;
                    var_84 = (max(var_84, (((var_3 ? var_8 : var_3)))));
                }
                for (int i_70 = 1; i_70 < 24;i_70 += 1)
                {
                    arr_262 [i_68] [i_53 - 1] = var_8;
                    var_85 = ((var_0 ? var_9 : var_4));

                    for (int i_71 = 0; i_71 < 25;i_71 += 1)
                    {
                        var_86 = ((((var_8 ? var_6 : var_8))) ? ((var_2 ? var_7 : var_5)) : var_0);
                        var_87 = var_5;
                        var_88 = var_2;
                    }
                    arr_265 [i_48] [i_48] &= var_1;
                }
            }
        }
        arr_266 [i_48] = ((min(var_0, var_5)));
    }
    #pragma endscop
}
