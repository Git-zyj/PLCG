/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = var_3;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] [6] [6] [i_3] = var_10;
                        arr_15 [i_0] [18] [i_0] |= var_3;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_0] [i_2] [i_3] = var_2;
                        var_16 |= var_6;
                    }
                    var_17 ^= var_7;
                }
                arr_21 [18] [i_1] [i_2] [3] &= var_11;
            }
            for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_18 = var_2;
                    arr_28 [i_6] [i_6] [i_6 + 3] [20] [i_6] [i_6] = var_4;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_19 ^= var_2;
                        var_20 = (max(var_20, var_10));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_21 = var_5;
                        var_22 = (max(var_22, var_14));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_23 ^= var_8;
                        var_24 = var_5;
                        var_25 ^= var_9;
                        var_26 = (max(var_26, var_0));
                        var_27 = var_6;
                    }
                    var_28 = (min(var_28, var_13));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_29 = var_3;
                    arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= var_4;
                    var_30 = var_10;
                    var_31 -= var_12;
                    arr_41 [i_0] [0] [i_0] [i_0] [i_0] = var_6;
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_32 = (min(var_32, var_9));
                    var_33 = var_7;
                    var_34 = var_3;
                }
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_35 += var_5;
                        var_36 = var_13;
                        var_37 = var_1;
                        var_38 = var_14;
                        var_39 = var_9;
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                    {
                        var_40 = (max(var_40, var_4));
                        var_41 = var_10;
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        var_42 ^= var_5;
                        var_43 = var_2;
                        var_44 = var_2;
                        var_45 = var_1;
                        var_46 |= var_4;
                    }
                    var_47 *= var_1;
                }
                var_48 = var_3;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_49 = var_13;
                            var_50 = var_0;
                            var_51 = var_3;
                            var_52 = (max(var_52, var_2));
                            var_53 = var_3;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    {
                        var_54 = var_11;
                        var_55 = var_12;
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {

            for (int i_22 = 2; i_22 < 19;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 0;i_23 += 1)
                {

                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        var_56 = var_10;
                        var_57 = var_11;
                        var_58 = var_13;
                        var_59 += var_9;
                        var_60 = var_12;
                    }
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        arr_81 [i_0] [i_21] [i_23] [i_23 + 1] [14] [i_25] = var_3;
                        var_61 = var_9;
                        var_62 *= var_10;
                        arr_82 [i_23] [i_0] [i_0] = var_7;
                    }
                    /* vectorizable */
                    for (int i_26 = 4; i_26 < 18;i_26 += 1)
                    {
                        var_63 = var_7;
                        arr_85 [i_0] [i_21] [i_23] [i_21] [i_26] [4] = var_1;
                        arr_86 [i_0] [1] [0] [i_23] [i_26] = var_7;
                        var_64 |= var_9;
                    }
                    var_65 = var_1;
                    arr_87 [13] [i_21] [i_23] [i_21] = var_9;
                }
                for (int i_27 = 1; i_27 < 20;i_27 += 1)
                {

                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 21;i_28 += 1) /* same iter space */
                    {
                        var_66 = (max(var_66, var_13));
                        var_67 = var_0;
                    }
                    for (int i_29 = 0; i_29 < 21;i_29 += 1) /* same iter space */
                    {
                        arr_97 [20] = var_1;
                        var_68 = var_6;
                        var_69 ^= var_2;
                        var_70 = (max(var_70, var_6));
                    }
                    for (int i_30 = 0; i_30 < 21;i_30 += 1) /* same iter space */
                    {
                        var_71 = var_4;
                        arr_101 [i_30] [9] = var_10;
                    }
                    var_72 = var_6;
                }
                var_73 = var_0;
                var_74 = var_6;
            }
            for (int i_31 = 1; i_31 < 20;i_31 += 1)
            {

                for (int i_32 = 0; i_32 < 21;i_32 += 1)
                {

                    for (int i_33 = 1; i_33 < 20;i_33 += 1)
                    {
                        arr_109 [i_32] [i_33 + 1] [i_21] [i_32] &= var_11;
                        var_75 ^= var_9;
                        arr_110 [20] [i_31] = var_4;
                    }
                    var_76 = var_13;
                }
                /* vectorizable */
                for (int i_34 = 1; i_34 < 18;i_34 += 1)
                {
                    var_77 = var_4;
                    arr_114 [i_34 - 1] [i_21] [i_31] = var_10;
                    arr_115 [i_31] [i_21] = var_5;

                    for (int i_35 = 0; i_35 < 1;i_35 += 1)
                    {
                        arr_118 [i_0] [i_31] = var_0;
                        arr_119 [i_31] = var_10;
                        var_78 = (max(var_78, var_12));
                    }
                }
                for (int i_36 = 0; i_36 < 21;i_36 += 1)
                {
                    var_79 = var_2;
                    var_80 += var_11;
                }
                for (int i_37 = 0; i_37 < 21;i_37 += 1)
                {
                    var_81 = var_14;
                    arr_125 [7] [i_31] [0] = var_6;
                }
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 21;i_38 += 1)
                {
                    for (int i_39 = 3; i_39 < 20;i_39 += 1)
                    {
                        {
                            arr_131 [i_0] [i_0] [i_31] = var_14;
                            var_82 ^= var_11;
                            var_83 = var_11;
                            var_84 = var_13;
                            var_85 *= var_4;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_40 = 4; i_40 < 20;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 21;i_41 += 1)
                {
                    {
                        var_86 *= var_9;
                        var_87 = var_5;
                    }
                }
            }

            for (int i_42 = 0; i_42 < 1;i_42 += 1)
            {

                /* vectorizable */
                for (int i_43 = 0; i_43 < 21;i_43 += 1) /* same iter space */
                {
                    var_88 = (min(var_88, var_1));
                    arr_144 [i_0] [i_0] = var_4;
                    var_89 ^= var_13;
                }
                /* vectorizable */
                for (int i_44 = 0; i_44 < 21;i_44 += 1) /* same iter space */
                {
                    arr_148 [i_0] [i_21] [11] [1] = var_5;
                    var_90 &= var_9;
                    var_91 = var_5;
                }
                for (int i_45 = 4; i_45 < 20;i_45 += 1)
                {
                    arr_151 [i_21] [i_21] [17] [7] [14] [i_21] = var_7;
                    arr_152 [i_42] [i_42] [i_42] [18] = var_1;
                    var_92 |= var_13;
                    var_93 = var_13;
                }
                /* LoopNest 2 */
                for (int i_46 = 2; i_46 < 19;i_46 += 1)
                {
                    for (int i_47 = 0; i_47 < 21;i_47 += 1)
                    {
                        {
                            var_94 = var_5;
                            arr_158 [0] = var_1;
                            var_95 = (min(var_95, var_11));
                            var_96 = var_8;
                        }
                    }
                }
                arr_159 [i_21] = var_14;

                for (int i_48 = 4; i_48 < 20;i_48 += 1)
                {
                    var_97 = var_9;
                    arr_162 [i_0] [i_0] = var_9;
                    var_98 = (min(var_98, var_6));

                    for (int i_49 = 0; i_49 < 1;i_49 += 1)
                    {
                        arr_166 [i_0] [i_49] [i_42] [i_48] = var_5;
                        arr_167 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [1] |= var_4;
                        var_99 = var_7;
                    }
                }
                /* vectorizable */
                for (int i_50 = 0; i_50 < 0;i_50 += 1)
                {
                    arr_171 [10] [i_21] [i_42] [i_50 + 1] [i_42] = var_11;

                    for (int i_51 = 0; i_51 < 21;i_51 += 1)
                    {
                        var_100 = (min(var_100, var_6));
                        var_101 = var_6;
                    }
                    var_102 = var_14;
                }
            }
        }
        for (int i_52 = 2; i_52 < 20;i_52 += 1)
        {
            /* LoopNest 2 */
            for (int i_53 = 0; i_53 < 21;i_53 += 1)
            {
                for (int i_54 = 1; i_54 < 20;i_54 += 1)
                {
                    {

                        for (int i_55 = 0; i_55 < 1;i_55 += 1)
                        {
                            var_103 = var_11;
                            var_104 = var_1;
                            arr_184 [1] [i_52] [i_52] [1] [i_52] [i_52] = var_0;
                        }
                        /* vectorizable */
                        for (int i_56 = 4; i_56 < 18;i_56 += 1)
                        {
                            arr_188 [i_52] = var_1;
                            var_105 = var_14;
                        }
                        for (int i_57 = 0; i_57 < 21;i_57 += 1)
                        {
                            var_106 = var_0;
                            arr_192 [i_57] [i_52 - 2] [i_54 - 1] |= var_13;
                            var_107 = (min(var_107, var_11));
                        }
                        var_108 = var_13;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_58 = 3; i_58 < 20;i_58 += 1)
            {
                for (int i_59 = 0; i_59 < 1;i_59 += 1)
                {
                    {
                        var_109 &= var_4;

                        for (int i_60 = 0; i_60 < 21;i_60 += 1)
                        {
                            arr_203 [i_0] [i_60] [i_52] [i_59] [13] [i_60] = var_6;
                            var_110 |= var_12;
                        }
                        for (int i_61 = 0; i_61 < 21;i_61 += 1)
                        {
                            arr_208 [i_0] [i_0] [i_0] [i_0] [i_52] = var_12;
                            arr_209 [i_52] [1] [i_58] [i_59] [i_61] = var_14;
                        }
                        for (int i_62 = 0; i_62 < 1;i_62 += 1)
                        {
                            var_111 ^= var_13;
                            var_112 = (max(var_112, var_10));
                            arr_213 [i_0] [i_52] [i_52] [i_59] [i_52] = var_5;
                            arr_214 [13] [i_52] [i_52] [i_0] = var_2;
                            arr_215 [i_0] [i_0] [i_0] &= var_11;
                        }
                        var_113 |= var_1;
                        arr_216 [i_58] [i_52] [16] [i_58] = var_9;
                    }
                }
            }
            arr_217 [i_52] [i_52 + 1] = var_10;
        }
    }
    for (int i_63 = 0; i_63 < 10;i_63 += 1)
    {
        /* LoopNest 3 */
        for (int i_64 = 0; i_64 < 10;i_64 += 1)
        {
            for (int i_65 = 0; i_65 < 10;i_65 += 1)
            {
                for (int i_66 = 0; i_66 < 10;i_66 += 1)
                {
                    {
                        arr_230 [i_65] [i_65] [i_66] [i_65] [i_66] = var_14;
                        var_114 = var_6;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_67 = 2; i_67 < 8;i_67 += 1)
        {
            for (int i_68 = 0; i_68 < 1;i_68 += 1)
            {
                {
                    var_115 = var_9;
                    var_116 *= var_13;
                }
            }
        }

        /* vectorizable */
        for (int i_69 = 0; i_69 < 1;i_69 += 1)
        {
            arr_241 [i_69] [i_69] [i_69] = var_10;

            for (int i_70 = 0; i_70 < 10;i_70 += 1)
            {
                var_117 = var_6;
                var_118 += var_14;
            }
            for (int i_71 = 0; i_71 < 10;i_71 += 1)
            {
                /* LoopNest 2 */
                for (int i_72 = 0; i_72 < 10;i_72 += 1)
                {
                    for (int i_73 = 2; i_73 < 9;i_73 += 1)
                    {
                        {
                            var_119 = var_5;
                            var_120 = var_14;
                            var_121 = var_4;
                            arr_252 [i_69] [6] [i_71] [i_71] [i_71] [i_71] [7] = var_6;
                        }
                    }
                }

                for (int i_74 = 0; i_74 < 10;i_74 += 1)
                {
                    var_122 = var_1;
                    var_123 = var_0;
                }
                for (int i_75 = 0; i_75 < 10;i_75 += 1)
                {
                    var_124 = var_8;
                    arr_260 [i_69] = var_11;
                    var_125 = (min(var_125, var_12));
                }
                for (int i_76 = 2; i_76 < 9;i_76 += 1)
                {

                    for (int i_77 = 0; i_77 < 10;i_77 += 1)
                    {
                        var_126 ^= var_0;
                        var_127 = (max(var_127, var_8));
                        var_128 = var_11;
                    }
                    arr_266 [i_63] [1] [i_69] [7] [i_63] [i_63] = var_1;
                }
                var_129 &= var_3;
            }
            /* LoopNest 2 */
            for (int i_78 = 3; i_78 < 9;i_78 += 1)
            {
                for (int i_79 = 0; i_79 < 10;i_79 += 1)
                {
                    {
                        arr_272 [i_78] [i_79] |= var_10;
                        var_130 = var_7;

                        for (int i_80 = 0; i_80 < 1;i_80 += 1)
                        {
                            var_131 += var_11;
                            var_132 = var_7;
                            var_133 = (max(var_133, var_9));
                        }
                        for (int i_81 = 4; i_81 < 7;i_81 += 1)
                        {
                            var_134 = var_7;
                            arr_277 [i_63] [i_69] [i_78 - 1] [1] [2] = var_3;
                        }
                        for (int i_82 = 0; i_82 < 10;i_82 += 1)
                        {
                            arr_280 [i_69] [i_69] = var_4;
                            var_135 ^= var_5;
                        }
                    }
                }
            }
        }
        for (int i_83 = 2; i_83 < 8;i_83 += 1)
        {
            var_136 = var_5;
            arr_284 [i_63] = var_9;
            /* LoopNest 2 */
            for (int i_84 = 1; i_84 < 6;i_84 += 1)
            {
                for (int i_85 = 0; i_85 < 10;i_85 += 1)
                {
                    {
                        var_137 = var_2;
                        arr_291 [i_63] = var_4;
                        arr_292 [1] = var_14;

                        for (int i_86 = 0; i_86 < 10;i_86 += 1)
                        {
                            arr_297 [7] [3] [i_84] [i_85] [i_86] = var_10;
                            var_138 = var_8;
                            var_139 = var_10;
                        }
                        var_140 ^= var_7;
                    }
                }
            }
        }
        for (int i_87 = 0; i_87 < 10;i_87 += 1)
        {

            for (int i_88 = 0; i_88 < 10;i_88 += 1)
            {
                var_141 *= var_5;
                arr_304 [1] = var_4;
            }
            var_142 = var_14;
            var_143 = var_2;
            arr_305 [i_63] [1] [i_63] = var_4;
            arr_306 [i_63] [i_87] = var_9;
        }
    }
    /* LoopNest 3 */
    for (int i_89 = 0; i_89 < 12;i_89 += 1)
    {
        for (int i_90 = 0; i_90 < 12;i_90 += 1)
        {
            for (int i_91 = 0; i_91 < 12;i_91 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_92 = 2; i_92 < 10;i_92 += 1)
                    {
                        for (int i_93 = 0; i_93 < 12;i_93 += 1)
                        {
                            {
                                var_144 = var_0;
                                var_145 ^= var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_94 = 1; i_94 < 11;i_94 += 1)
                    {
                        for (int i_95 = 3; i_95 < 10;i_95 += 1)
                        {
                            {
                                var_146 *= var_14;
                                var_147 ^= var_10;
                                var_148 *= var_14;
                            }
                        }
                    }
                    var_149 = var_9;

                    /* vectorizable */
                    for (int i_96 = 0; i_96 < 12;i_96 += 1)
                    {
                        var_150 = (min(var_150, var_14));
                        arr_328 [i_89] [i_89] [i_90] [i_89] = var_14;
                        var_151 = var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
