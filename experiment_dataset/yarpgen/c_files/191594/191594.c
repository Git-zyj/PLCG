/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((!(!var_0))), var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [7] [i_0] [i_0] = (max((max((max(var_2, var_7)), (~var_11))), ((min(var_8, ((min(var_10, var_9))))))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = (min(var_2, (min(var_4, (min(var_1, var_11))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_13 -= var_6;
                            var_14 = var_8;
                            var_15 &= (!var_0);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = 3;
                            var_17 = (min(var_17, (((~((-(~var_9))))))));
                            var_18 = var_6;
                            var_19 = ((!((min(var_11, -var_11)))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_20 = (min((!-7), var_8));
                            var_21 = ((~(max(((max(var_0, var_4))), (min(var_7, var_2))))));
                            arr_23 [i_0] [i_0] [i_0] = var_9;
                            var_22 = (max(var_10, (max(0, var_7))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = (min(var_23, (~var_8)));
                            arr_26 [i_3] [i_0] [9] [i_3 - 1] [4] [i_3] = (!var_1);
                            var_24 = (max(var_24, var_8));
                        }

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_25 = ((!(min(var_2, var_3))));
                            var_26 *= (min((max((min(var_5, var_1)), ((min(var_3, var_2))))), var_0));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min(-var_8, (~var_3))), var_5));
                            arr_30 [7] [i_0] = var_9;
                        }
                        arr_31 [i_0] [i_0] [i_2] [i_3 + 2] = (~var_11);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_27 = var_5;
                            var_28 = (max(var_28, var_3));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_29 = var_7;
                            var_30 &= var_1;
                        }

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_31 = (max(var_31, var_2));
                            var_32 = (~var_4);
                            arr_40 [i_0] [i_0] = (!var_2);
                            var_33 = (min(var_33, var_11));
                        }
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            arr_43 [i_0] [i_0] = var_4;
                            var_34 = -var_1;
                            arr_44 [10] [i_0] [10] [i_9] [i_9] = var_3;
                        }
                    }

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_35 = (min(var_35, (!var_7)));
                        var_36 = ((~(max((max(var_7, var_10)), ((max(var_10, var_3)))))));

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_37 = (min(var_37, var_2));
                            var_38 = var_6;
                        }
                        arr_50 [i_0] [i_0] = var_2;
                    }
                    for (int i_16 = 2; i_16 < 10;i_16 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            arr_57 [i_0] [i_0] [2] [i_2] = var_2;
                            arr_58 [i_0] [0] = var_6;
                            var_39 = (!var_1);
                            var_40 = (~var_4);
                        }

                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            var_41 = (max((min((max(var_8, var_1)), var_4)), (max((max(var_1, var_8)), ((min(var_0, var_6)))))));
                            var_42 &= (min(var_10, (~var_8)));
                            var_43 = ((max((min(var_7, var_0), (~var_6)))));
                            arr_62 [i_0] [i_0] [i_1] [i_0] [i_16] [1] = var_4;
                        }
                        for (int i_19 = 3; i_19 < 10;i_19 += 1)
                        {
                            var_44 = var_10;
                            arr_65 [i_0] [i_1] [i_19 - 2] [i_0] = var_6;
                        }
                        /* vectorizable */
                        for (int i_20 = 1; i_20 < 11;i_20 += 1)
                        {
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_2);
                            var_45 &= (~-var_4);
                            arr_70 [i_0] [i_0] [i_0] = ((!(!var_5)));
                            var_46 = var_5;
                        }
                        var_47 *= var_10;
                    }
                    /* vectorizable */
                    for (int i_21 = 2; i_21 < 10;i_21 += 1) /* same iter space */
                    {
                        var_48 = -var_1;

                        for (int i_22 = 1; i_22 < 11;i_22 += 1)
                        {
                            arr_76 [i_21] [i_21] [i_21] [i_21] [i_0] [i_21 + 1] = var_4;
                            arr_77 [i_22] [i_0] [i_2] [i_0] [i_0] = ((-(!0)));
                            var_49 = 3;
                            var_50 *= var_8;
                        }
                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            var_51 = var_8;
                            var_52 = var_0;
                        }

                        for (int i_24 = 0; i_24 < 12;i_24 += 1)
                        {
                            arr_82 [i_0] = var_4;
                            var_53 = var_11;
                        }
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        arr_86 [i_0] [i_1] = ((-(max(var_0, (~-8)))));

                        /* vectorizable */
                        for (int i_26 = 1; i_26 < 10;i_26 += 1)
                        {
                            var_54 = ((~(!var_0)));
                            var_55 = -var_6;
                        }
                        for (int i_27 = 0; i_27 < 1;i_27 += 1)
                        {
                            arr_93 [i_0] [i_1] [i_1] [i_25] [i_1] |= var_7;
                            var_56 *= (max(-1, 1));
                            var_57 *= (max(((max(((min(var_9, var_2))), (~var_6)))), var_0));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_28 = 0; i_28 < 12;i_28 += 1)
        {
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 12;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {
                    for (int i_31 = 1; i_31 < 8;i_31 += 1)
                    {
                        {
                            var_58 = var_5;
                            var_59 = var_9;
                        }
                    }
                }
            }

            for (int i_32 = 2; i_32 < 10;i_32 += 1)
            {
                var_60 = (~var_8);
                var_61 = var_1;
                var_62 = var_1;
            }

            for (int i_33 = 0; i_33 < 12;i_33 += 1)
            {
                arr_112 [i_0] [i_28] = var_7;
                arr_113 [4] [i_0] = var_2;

                for (int i_34 = 0; i_34 < 12;i_34 += 1)
                {
                    var_63 = var_9;
                    arr_118 [i_0] [i_0] [2] [i_0] [i_0] [i_0] = var_0;

                    for (int i_35 = 0; i_35 < 12;i_35 += 1)
                    {
                        var_64 += ((!(!var_6)));
                        arr_122 [i_35] [i_0] = (~-4);
                        var_65 = var_10;
                    }
                    for (int i_36 = 0; i_36 < 12;i_36 += 1)
                    {
                        var_66 |= var_6;
                        var_67 = 0;
                    }

                    for (int i_37 = 0; i_37 < 12;i_37 += 1)
                    {
                        arr_128 [i_0] [i_0] = var_5;
                        var_68 = (min(var_68, var_5));
                        var_69 = (!var_2);
                        var_70 ^= ((!(!var_5)));
                    }
                    for (int i_38 = 0; i_38 < 1;i_38 += 1)
                    {
                        arr_131 [9] [i_0] = var_1;
                        var_71 = var_5;
                        var_72 -= ((-(!var_7)));
                        var_73 = (!1);
                    }
                    for (int i_39 = 2; i_39 < 10;i_39 += 1)
                    {
                        arr_134 [i_0] [i_33] [i_0] [i_39] = var_1;
                        var_74 = var_3;
                    }
                }
                for (int i_40 = 3; i_40 < 11;i_40 += 1)
                {

                    for (int i_41 = 3; i_41 < 10;i_41 += 1)
                    {
                        var_75 &= (~4611686018427387904);
                        arr_142 [7] [i_0] [7] [0] [i_40] [2] = var_5;
                    }
                    for (int i_42 = 4; i_42 < 8;i_42 += 1)
                    {
                        var_76 = var_11;
                        var_77 = var_2;
                        var_78 = (min(var_78, var_4));
                        var_79 = var_3;
                    }
                    arr_145 [0] [i_33] [i_0] = var_9;

                    for (int i_43 = 0; i_43 < 12;i_43 += 1)
                    {
                        var_80 *= (+-0);
                        var_81 = (~var_3);
                        var_82 = (max(var_82, var_2));
                    }
                }
                for (int i_44 = 0; i_44 < 12;i_44 += 1) /* same iter space */
                {
                    var_83 = ((~(!var_3)));

                    for (int i_45 = 0; i_45 < 12;i_45 += 1)
                    {
                        arr_156 [i_0] [i_44] = var_3;
                        var_84 -= (~var_6);
                    }
                    for (int i_46 = 0; i_46 < 12;i_46 += 1)
                    {
                        var_85 = (~var_4);
                        arr_159 [i_33] [3] [1] [i_46] [i_0] [8] [i_46] = var_10;
                    }
                }
                for (int i_47 = 0; i_47 < 12;i_47 += 1) /* same iter space */
                {

                    for (int i_48 = 0; i_48 < 1;i_48 += 1)
                    {
                        var_86 = var_2;
                        arr_168 [i_0] [1] = var_9;
                        var_87 &= ((!(!var_4)));
                        var_88 = var_7;
                    }
                    var_89 *= var_5;

                    for (int i_49 = 0; i_49 < 12;i_49 += 1)
                    {
                        var_90 = 576460752303423480;
                        var_91 = var_1;
                        var_92 = ((!(!var_1)));
                        var_93 += (~var_4);
                    }
                }
            }
            for (int i_50 = 0; i_50 < 12;i_50 += 1)
            {

                for (int i_51 = 0; i_51 < 12;i_51 += 1)
                {
                    var_94 = var_7;

                    for (int i_52 = 0; i_52 < 12;i_52 += 1)
                    {
                        arr_179 [i_0] [7] [i_0] [i_0] [i_0] = var_8;
                        var_95 *= var_10;
                        var_96 &= -var_3;
                    }
                    for (int i_53 = 0; i_53 < 12;i_53 += 1)
                    {
                        arr_182 [i_28] [i_0] [9] [1] [7] = var_1;
                        var_97 = var_2;
                    }
                    var_98 &= var_9;
                }

                for (int i_54 = 2; i_54 < 8;i_54 += 1)
                {
                    arr_185 [i_0] [i_0] [i_50] [i_28] [i_0] [i_0] = (~var_2);

                    for (int i_55 = 1; i_55 < 10;i_55 += 1)
                    {
                        var_99 = var_2;
                        arr_188 [i_0] = (~var_5);
                    }

                    for (int i_56 = 0; i_56 < 12;i_56 += 1)
                    {
                        arr_191 [i_0] [i_0] [1] [10] [i_56] = (!var_5);
                        var_100 = var_3;
                        arr_192 [6] [0] [i_54] [i_54 - 2] [i_56] &= var_8;
                    }
                    for (int i_57 = 0; i_57 < 12;i_57 += 1)
                    {
                        var_101 = -var_11;
                        var_102 = var_2;
                    }

                    for (int i_58 = 0; i_58 < 12;i_58 += 1) /* same iter space */
                    {
                        var_103 = var_1;
                        var_104 = (~var_2);
                        arr_198 [i_0] [i_0] [i_50] [i_0] [i_0] = var_7;
                        arr_199 [i_0] [i_0] [i_0] [i_54] [i_58] = var_7;
                    }
                    for (int i_59 = 0; i_59 < 12;i_59 += 1) /* same iter space */
                    {
                        arr_203 [10] [i_28] [i_0] [i_54] [i_0] = var_2;
                        arr_204 [i_0] [i_0] = var_1;
                        arr_205 [i_59] [i_28] &= (!var_6);
                    }
                }

                for (int i_60 = 0; i_60 < 12;i_60 += 1)
                {

                    for (int i_61 = 0; i_61 < 12;i_61 += 1)
                    {
                        arr_213 [5] [i_28] [5] [i_0] = var_5;
                        arr_214 [i_0] [i_28] [7] [i_60] [i_61] = var_6;
                        arr_215 [i_0] [i_0] [i_0] [i_0] = var_2;
                        arr_216 [8] [i_0] [i_50] [1] [7] = var_2;
                        var_105 = (min(var_105, (!0)));
                    }
                    arr_217 [i_0] = var_9;
                    var_106 = var_8;
                }

                for (int i_62 = 0; i_62 < 12;i_62 += 1)
                {

                    for (int i_63 = 0; i_63 < 1;i_63 += 1)
                    {
                        var_107 ^= var_9;
                        var_108 = var_0;
                        arr_224 [i_0] [i_0] [i_50] [i_0] = ((!(!var_2)));
                    }
                    for (int i_64 = 0; i_64 < 12;i_64 += 1)
                    {
                        var_109 -= (!var_1);
                        var_110 = (!var_5);
                        var_111 -= (!-var_2);
                    }

                    for (int i_65 = 2; i_65 < 10;i_65 += 1)
                    {
                        arr_230 [i_0] [i_28] [i_50] [i_28] [1] [4] [8] |= var_1;
                        arr_231 [8] [i_28] [i_0] [i_65] = (!var_7);
                    }
                    for (int i_66 = 0; i_66 < 12;i_66 += 1)
                    {
                        arr_234 [0] [i_28] [i_0] [9] [9] = var_9;
                        arr_235 [i_0] [i_0] [i_28] [i_50] [i_0] [i_66] = var_7;
                        arr_236 [i_0] [1] [i_50] [i_62] [i_62] [i_62] = var_9;
                    }

                    for (int i_67 = 0; i_67 < 12;i_67 += 1)
                    {
                        var_112 = var_7;
                        arr_239 [i_67] [i_62] [i_0] [i_28] [10] = var_6;
                    }
                    for (int i_68 = 0; i_68 < 12;i_68 += 1)
                    {
                        var_113 -= var_3;
                        var_114 = (min(var_114, var_11));
                    }
                }
                for (int i_69 = 0; i_69 < 1;i_69 += 1)
                {

                    for (int i_70 = 1; i_70 < 10;i_70 += 1)
                    {
                        arr_248 [6] [i_0] = var_7;
                        arr_249 [i_0] = var_5;
                        arr_250 [i_0] [i_0] = (~var_1);
                        var_115 = -var_6;
                        arr_251 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(~var_7));
                    }
                    arr_252 [8] [3] [i_50] [i_0] [i_0] = (!-var_5);
                    var_116 = var_10;
                    var_117 = -var_3;
                }
                for (int i_71 = 0; i_71 < 12;i_71 += 1)
                {
                    var_118 = var_2;

                    for (int i_72 = 0; i_72 < 12;i_72 += 1)
                    {
                        arr_259 [i_0] [i_28] [i_28] [i_50] [i_71] [5] = var_2;
                        var_119 = -var_0;
                        arr_260 [i_0] [i_28] [i_50] [i_71] [i_0] = var_0;
                    }
                    for (int i_73 = 4; i_73 < 10;i_73 += 1)
                    {
                        var_120 = var_2;
                        var_121 = ((-(~var_10)));
                        var_122 = (min(var_122, var_2));
                    }

                    for (int i_74 = 3; i_74 < 11;i_74 += 1)
                    {
                        var_123 = var_0;
                        var_124 = var_5;
                        var_125 = ((!(!var_9)));
                        var_126 = (min(var_126, var_3));
                    }
                    for (int i_75 = 0; i_75 < 12;i_75 += 1)
                    {
                        var_127 = var_0;
                        arr_267 [i_0] = (~-var_9);
                    }
                    for (int i_76 = 0; i_76 < 12;i_76 += 1) /* same iter space */
                    {
                        arr_272 [i_50] [10] [i_50] [i_50] [i_50] [i_50] |= (!var_6);
                        var_128 = var_11;
                    }
                    for (int i_77 = 0; i_77 < 12;i_77 += 1) /* same iter space */
                    {
                        arr_275 [i_71] [i_0] [i_0] [i_0] [i_77] = var_6;
                        var_129 *= var_6;
                        var_130 = var_2;
                        var_131 = var_7;
                        var_132 = var_8;
                    }
                }
                for (int i_78 = 0; i_78 < 12;i_78 += 1)
                {
                    arr_278 [i_0] [i_50] [6] &= var_10;

                    for (int i_79 = 0; i_79 < 12;i_79 += 1)
                    {
                        arr_281 [i_78] &= var_10;
                        arr_282 [i_50] [i_50] [9] [1] [i_50] [i_0] [i_50] = var_9;
                    }
                    for (int i_80 = 0; i_80 < 12;i_80 += 1)
                    {
                        var_133 = (min(var_133, (((!(!var_9))))));
                        arr_285 [i_0] [i_0] [i_0] [6] = (!var_2);
                    }
                    var_134 = var_4;
                }
                var_135 = var_9;
            }
        }
        for (int i_81 = 2; i_81 < 11;i_81 += 1)
        {

            /* vectorizable */
            for (int i_82 = 0; i_82 < 12;i_82 += 1)
            {
                var_136 = var_11;

                for (int i_83 = 2; i_83 < 11;i_83 += 1)
                {
                    var_137 = (~var_7);
                    arr_295 [i_0] [i_0] [i_0] [7] [i_83 - 2] = var_1;
                }
                /* LoopNest 2 */
                for (int i_84 = 2; i_84 < 11;i_84 += 1)
                {
                    for (int i_85 = 0; i_85 < 1;i_85 += 1)
                    {
                        {
                            var_138 = var_8;
                            arr_302 [2] [i_0] [i_82] [2] [2] = (!var_10);
                        }
                    }
                }
                var_139 = (min(var_139, (~var_7)));
                var_140 = var_4;
            }
            arr_303 [10] &= var_9;

            for (int i_86 = 2; i_86 < 9;i_86 += 1)
            {
                arr_307 [i_0] = var_2;
                var_141 = ((max(var_4, (!var_8))));
                var_142 = ((((!((max(var_9, var_4)))))));

                /* vectorizable */
                for (int i_87 = 1; i_87 < 11;i_87 += 1)
                {

                    for (int i_88 = 0; i_88 < 12;i_88 += 1)
                    {
                        var_143 = (max(var_143, var_5));
                        arr_314 [i_0] [i_81 - 2] [i_86 - 2] [i_87 - 1] [i_86] &= var_6;
                        arr_315 [i_0] [i_0] [i_0] [4] [5] = (~var_1);
                        arr_316 [i_0] [i_81] [i_0] [i_81] [i_81 - 2] = ((~(~var_3)));
                    }
                    for (int i_89 = 0; i_89 < 12;i_89 += 1)
                    {
                        var_144 = var_8;
                        var_145 = -var_4;
                        arr_319 [i_0] [i_0] [1] [1] [9] [i_0] [i_0] = -var_8;
                        arr_320 [i_0] [2] [i_86 - 2] [i_86 - 2] [i_0] [i_87] [i_81 - 2] = var_11;
                    }
                    for (int i_90 = 0; i_90 < 1;i_90 += 1)
                    {
                        var_146 = var_9;
                        var_147 *= var_2;
                    }
                    for (int i_91 = 1; i_91 < 11;i_91 += 1)
                    {
                        var_148 *= var_8;
                        var_149 = var_8;
                        var_150 = (min(var_150, var_7));
                        arr_326 [i_0] [10] [3] [4] [5] = var_7;
                        var_151 = (~var_11);
                    }
                    arr_327 [i_0] [i_0] [i_86 - 1] [i_87] = (~65535);
                    var_152 *= var_8;
                }
                /* vectorizable */
                for (int i_92 = 3; i_92 < 10;i_92 += 1)
                {

                    for (int i_93 = 0; i_93 < 12;i_93 += 1)
                    {
                        var_153 = (max(var_153, (((!(!var_0))))));
                        var_154 = (--32742);
                    }
                    var_155 = (max(var_155, var_7));

                    for (int i_94 = 0; i_94 < 12;i_94 += 1)
                    {
                        arr_337 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0] = var_0;
                        arr_338 [6] [i_0] [2] [6] [i_94] = var_4;
                    }
                    for (int i_95 = 0; i_95 < 12;i_95 += 1)
                    {
                        arr_342 [i_0] [i_0] [i_92] = var_4;
                        var_156 = var_1;
                        arr_343 [1] [4] [i_0] [i_92 - 3] [1] [i_95] = var_2;
                    }
                    var_157 = (max(var_157, var_6));
                }
            }

            for (int i_96 = 0; i_96 < 12;i_96 += 1)
            {

                for (int i_97 = 0; i_97 < 12;i_97 += 1)
                {
                    var_158 = (+-0);

                    for (int i_98 = 0; i_98 < 12;i_98 += 1)
                    {
                        arr_352 [i_0] [i_81] [i_96] [i_97] [i_97] [10] |= ((~(~var_10)));
                        var_159 = (min(var_159, var_0));
                        arr_353 [i_0] = (~var_4);
                    }
                    for (int i_99 = 0; i_99 < 12;i_99 += 1)
                    {
                        arr_358 [i_0] [i_81] [i_96] [i_97] [3] [2] = (~0);
                        arr_359 [i_0] [i_81] [i_96] = var_4;
                        var_160 = (min(var_160, var_3));
                    }
                }
                for (int i_100 = 1; i_100 < 9;i_100 += 1)
                {
                    arr_362 [i_0] [i_0] [i_81] [i_96] [i_0] = ((~(!var_0)));
                    var_161 *= (!var_1);
                }
                var_162 = var_4;
                arr_363 [i_0] [i_0] [i_0] [i_96] = ((~((-(!var_4)))));
            }
        }
        for (int i_101 = 0; i_101 < 12;i_101 += 1)
        {

            for (int i_102 = 0; i_102 < 1;i_102 += 1)
            {
                var_163 = ((-((max(var_11, (min(var_5, var_8)))))));

                /* vectorizable */
                for (int i_103 = 3; i_103 < 10;i_103 += 1)
                {
                    arr_373 [i_0] [i_102] [i_101] [i_0] = var_4;
                    arr_374 [i_0] = var_0;
                }
                /* vectorizable */
                for (int i_104 = 0; i_104 < 12;i_104 += 1)
                {

                    for (int i_105 = 0; i_105 < 12;i_105 += 1)
                    {
                        arr_379 [0] [5] [i_102] [i_0] [5] = var_6;
                        arr_380 [i_102] [i_102] [i_102] [i_102] [8] [i_0] [i_102] = var_6;
                        var_164 |= (~var_8);
                    }
                    var_165 = (min(var_165, var_3));
                    var_166 = var_3;
                }
                /* vectorizable */
                for (int i_106 = 0; i_106 < 1;i_106 += 1)
                {
                    var_167 = var_7;
                    var_168 *= (!var_3);
                }
                arr_385 [i_0] [i_0] = ((max((max(var_1, var_4), var_4))));
            }
            for (int i_107 = 0; i_107 < 12;i_107 += 1)
            {
                /* LoopNest 2 */
                for (int i_108 = 0; i_108 < 12;i_108 += 1)
                {
                    for (int i_109 = 0; i_109 < 12;i_109 += 1)
                    {
                        {
                            arr_392 [i_0] = (min(32750, 1));
                            var_169 = var_2;
                            var_170 = var_4;
                            arr_393 [i_0] [i_0] [3] [2] [i_109] [i_0] = var_7;
                        }
                    }
                }
                var_171 = (max(var_171, (((-((-(min(var_0, var_2)))))))));

                /* vectorizable */
                for (int i_110 = 0; i_110 < 12;i_110 += 1)
                {

                    for (int i_111 = 0; i_111 < 12;i_111 += 1)
                    {
                        arr_400 [i_0] [i_0] = ((~(~var_4)));
                        var_172 = var_5;
                        var_173 = -var_3;
                        var_174 = (~var_9);
                        var_175 *= var_8;
                    }
                    for (int i_112 = 0; i_112 < 12;i_112 += 1)
                    {
                        var_176 = (+-1);
                        var_177 = var_0;
                        arr_403 [i_0] [i_0] [i_0] [4] [i_112] = var_2;
                        arr_404 [i_101] [i_0] = (!var_10);
                        var_178 = (min(var_178, (!var_10)));
                    }
                    for (int i_113 = 0; i_113 < 12;i_113 += 1)
                    {
                        var_179 = var_2;
                        var_180 = 18446744073709551607;
                    }
                    var_181 &= var_3;
                    var_182 = -var_7;
                    arr_407 [i_107] [i_107] [i_107] [i_101] &= (~-var_8);
                }
                var_183 -= var_6;
            }
            var_184 = (min(var_11, var_6));
        }
    }
    for (int i_114 = 0; i_114 < 18;i_114 += 1)
    {
        /* LoopNest 3 */
        for (int i_115 = 2; i_115 < 15;i_115 += 1)
        {
            for (int i_116 = 0; i_116 < 18;i_116 += 1)
            {
                for (int i_117 = 3; i_117 < 15;i_117 += 1)
                {
                    {

                        for (int i_118 = 0; i_118 < 1;i_118 += 1)
                        {
                            var_185 = (min(((min(((max(var_9, 1))), var_8))), -var_1));
                            arr_420 [i_114] [i_114] [i_114] [i_116] [i_116] [i_117 - 2] [i_118] = var_2;
                            var_186 = (min(var_186, ((max(((min((min(var_3, var_0)), (max(var_10, var_0))))), var_1)))));
                            arr_421 [i_114] [i_115 - 1] [6] = (min(var_3, -var_10));
                        }
                        for (int i_119 = 3; i_119 < 15;i_119 += 1)
                        {
                            arr_426 [i_114] [i_114] [i_114] [i_115] [i_119 - 1] [i_115] = var_5;
                            arr_427 [i_114] [i_117 + 1] [i_117 + 1] = var_1;
                            arr_428 [i_114] [i_115] [i_116] [i_116] [i_116] [i_117 - 2] [i_119] = max(var_8, (max(18446744073709551605, 18446744073709551614)));
                        }
                        var_187 = var_10;
                    }
                }
            }
        }
        var_188 = (~((min((!var_10), var_11))));
    }
    #pragma endscop
}
