/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 += var_1;
        arr_2 [i_0] [i_0] = var_11;
        var_14 = var_3;
        var_15 = (~(!var_7));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = var_9;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = var_6;
            var_18 = var_8;
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_19 = var_2;
            arr_9 [i_1] [i_3] = var_11;
        }

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            arr_12 [i_1] [i_1] = var_10;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 = var_8;
                            var_21 = var_9;
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = var_2;
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_22 = var_8;
                            arr_31 [i_1] [i_1] [i_1] [i_8] [i_1] [15] = var_9;
                            arr_32 [i_8] = -var_3;
                            var_23 = var_7;
                        }
                    }
                }
                var_24 = var_8;
            }
            var_25 = var_10;
        }

        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_26 = (!var_2);
                        arr_41 [i_1] [i_1] [i_12] [i_12] [i_12] [i_13] = var_10;
                    }
                }
            }

            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                var_27 = var_8;
                var_28 = var_0;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_29 = var_1;
                            var_30 = (~var_5);
                            var_31 = var_10;
                            arr_51 [i_14] = var_1;
                        }
                    }
                }

                for (int i_17 = 2; i_17 < 21;i_17 += 1) /* same iter space */
                {
                    arr_55 [i_14] = var_9;

                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        var_32 = -var_4;
                        var_33 = (min(var_33, var_1));
                        var_34 *= (!var_11);
                    }
                }
                for (int i_19 = 2; i_19 < 21;i_19 += 1) /* same iter space */
                {
                    arr_60 [i_1] [19] [i_1] [i_14] [i_1] = var_7;
                    var_35 = var_10;

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_36 = var_9;
                        var_37 = var_11;
                        var_38 ^= var_5;
                    }
                }
            }
            for (int i_21 = 4; i_21 < 20;i_21 += 1) /* same iter space */
            {
                var_39 = -var_3;
                var_40 = var_9;
                var_41 = ((!(~var_8)));
            }
            for (int i_22 = 4; i_22 < 20;i_22 += 1) /* same iter space */
            {
                var_42 = var_3;
                arr_69 [i_1] [i_1] [i_1] [i_1] = var_3;

                for (int i_23 = 2; i_23 < 22;i_23 += 1)
                {
                    var_43 = var_10;
                    var_44 = var_8;
                    var_45 = var_2;
                    var_46 = var_3;
                }
            }
            var_47 = var_11;
            var_48 = var_4;
            var_49 ^= ((~(!var_3)));
        }
        for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 21;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        {
                            var_50 = var_7;
                            arr_81 [19] [i_26] [i_27] = var_6;
                            var_51 = var_10;
                        }
                    }
                }
            }
            var_52 = var_10;
        }

        for (int i_28 = 1; i_28 < 21;i_28 += 1) /* same iter space */
        {
            var_53 = var_0;

            for (int i_29 = 2; i_29 < 20;i_29 += 1)
            {
                var_54 = (!var_8);
                var_55 = (min(var_55, (!var_1)));
                var_56 = var_5;
                var_57 = var_3;
                arr_87 [i_29] = var_8;
            }
            var_58 = var_3;
        }
        for (int i_30 = 1; i_30 < 21;i_30 += 1) /* same iter space */
        {

            for (int i_31 = 0; i_31 < 23;i_31 += 1)
            {
                var_59 = (~var_10);
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 23;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        {
                            var_60 = var_0;
                            var_61 = (min(var_61, var_5));
                            var_62 = var_7;
                            arr_101 [13] [i_30 + 1] [13] [i_30 + 2] [i_30] = var_9;
                        }
                    }
                }

                for (int i_34 = 1; i_34 < 21;i_34 += 1) /* same iter space */
                {
                    arr_104 [i_30] [i_1] [i_34 - 1] [i_34] = var_9;

                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        var_63 = var_9;
                        var_64 = (~var_1);
                    }

                    for (int i_36 = 2; i_36 < 21;i_36 += 1)
                    {
                        var_65 ^= ((-(!-var_3)));
                        var_66 = (max(var_66, var_11));
                        arr_110 [i_1] [i_30] [i_30] [i_34] = var_4;
                        arr_111 [i_1] [i_1] [i_31] [i_30] [11] = -var_8;
                        var_67 = var_4;
                    }
                    for (int i_37 = 1; i_37 < 20;i_37 += 1)
                    {
                        var_68 = (!255);
                        var_69 = var_8;
                        var_70 *= var_1;
                    }
                }
                for (int i_38 = 1; i_38 < 21;i_38 += 1) /* same iter space */
                {

                    for (int i_39 = 0; i_39 < 23;i_39 += 1)
                    {
                        arr_120 [i_30] = ((-(~var_7)));
                        var_71 = var_5;
                    }
                    for (int i_40 = 0; i_40 < 23;i_40 += 1)
                    {
                        var_72 = var_6;
                        var_73 = var_6;
                        arr_124 [i_40] [19] [i_40] [i_30] [19] = var_9;
                    }
                    arr_125 [i_30] = 6638848050357718426;

                    for (int i_41 = 1; i_41 < 20;i_41 += 1)
                    {
                        arr_130 [i_30] = var_7;
                        var_74 = (!var_2);
                        arr_131 [i_31] [12] [i_30] [i_31] [i_31] = var_8;
                    }
                    for (int i_42 = 2; i_42 < 22;i_42 += 1) /* same iter space */
                    {
                        var_75 = (!var_11);
                        var_76 = var_10;
                    }
                    for (int i_43 = 2; i_43 < 22;i_43 += 1) /* same iter space */
                    {
                        var_77 = var_7;
                        var_78 = var_5;
                    }
                    var_79 = (!var_4);
                }
            }

            for (int i_44 = 0; i_44 < 23;i_44 += 1)
            {
                var_80 = var_11;
                var_81 = ((-(-127 - 1)));
            }
        }
    }
    for (int i_45 = 3; i_45 < 9;i_45 += 1)
    {
        var_82 = var_4;

        for (int i_46 = 2; i_46 < 10;i_46 += 1)
        {
            var_83 = var_7;
            arr_148 [i_45] [9] [i_45] = var_3;
            arr_149 [i_45] [i_46] [i_45] = var_4;
            arr_150 [i_45] [i_45] = (~var_4);
            var_84 = var_4;
        }
        for (int i_47 = 0; i_47 < 13;i_47 += 1) /* same iter space */
        {
            arr_155 [i_47] [i_45] [i_45 + 2] = var_4;
            var_85 |= var_8;
            /* LoopNest 2 */
            for (int i_48 = 0; i_48 < 13;i_48 += 1)
            {
                for (int i_49 = 0; i_49 < 13;i_49 += 1)
                {
                    {
                        var_86 = -var_7;
                        arr_161 [i_45] [i_47] [i_48] [3] [i_49] = var_1;
                    }
                }
            }

            for (int i_50 = 0; i_50 < 13;i_50 += 1)
            {
                /* LoopNest 2 */
                for (int i_51 = 1; i_51 < 12;i_51 += 1)
                {
                    for (int i_52 = 0; i_52 < 13;i_52 += 1)
                    {
                        {
                            var_87 = var_11;
                            arr_169 [i_45] [i_45] [i_45] [i_51 - 1] [i_52] = var_9;
                        }
                    }
                }
                var_88 -= (!var_9);
            }
        }
        for (int i_53 = 0; i_53 < 13;i_53 += 1) /* same iter space */
        {

            for (int i_54 = 0; i_54 < 13;i_54 += 1)
            {
                var_89 = var_4;
                var_90 = var_11;
                var_91 = var_0;

                for (int i_55 = 0; i_55 < 1;i_55 += 1)
                {
                    arr_179 [3] [i_45] [3] [i_54] [i_54] = -var_4;
                    var_92 |= var_0;
                }

                for (int i_56 = 0; i_56 < 13;i_56 += 1) /* same iter space */
                {
                    arr_183 [i_56] [i_45] [i_45] [i_45 - 2] = (!var_6);
                    var_93 = var_3;
                    var_94 = -var_2;
                }
                for (int i_57 = 0; i_57 < 13;i_57 += 1) /* same iter space */
                {

                    for (int i_58 = 0; i_58 < 13;i_58 += 1) /* same iter space */
                    {
                        arr_192 [i_45] [i_53] [i_54] [i_57] = var_6;
                        var_95 = var_11;
                    }
                    for (int i_59 = 0; i_59 < 13;i_59 += 1) /* same iter space */
                    {
                        var_96 = var_5;
                        var_97 = (!var_3);
                        var_98 &= var_0;
                    }
                    for (int i_60 = 1; i_60 < 11;i_60 += 1)
                    {
                        arr_199 [i_45 + 2] [i_45 + 2] [i_45] [i_45] [i_45 - 2] [i_45] [i_45] = var_6;
                        var_99 = var_4;
                        arr_200 [i_45] = var_1;
                        arr_201 [i_45] [i_45] [i_45] [i_45] [i_60] [i_45] [i_60] = 8;
                    }
                    arr_202 [i_45] [i_54] [i_57] = var_3;
                    arr_203 [i_45] = var_6;
                }
                for (int i_61 = 0; i_61 < 13;i_61 += 1)
                {
                    arr_206 [i_45] [i_45] [i_53] = var_3;
                    var_100 = var_7;
                    var_101 &= var_3;
                }
                for (int i_62 = 0; i_62 < 13;i_62 += 1)
                {
                    var_102 = -var_0;
                    var_103 -= var_2;
                }
            }
            for (int i_63 = 0; i_63 < 13;i_63 += 1)
            {
                var_104 = var_7;
                var_105 = var_0;
            }
            for (int i_64 = 0; i_64 < 13;i_64 += 1)
            {
                arr_215 [i_45] [i_45] = var_7;
                var_106 = var_2;

                for (int i_65 = 0; i_65 < 13;i_65 += 1) /* same iter space */
                {
                    var_107 &= var_6;
                    var_108 = -var_9;

                    for (int i_66 = 0; i_66 < 13;i_66 += 1)
                    {
                        var_109 = (max(var_109, (!var_9)));
                        var_110 = var_11;
                        var_111 = -var_1;
                        var_112 = -56972;
                        var_113 = var_9;
                    }
                }
                for (int i_67 = 0; i_67 < 13;i_67 += 1) /* same iter space */
                {

                    for (int i_68 = 1; i_68 < 12;i_68 += 1)
                    {
                        var_114 = var_3;
                        arr_226 [i_45] [i_45] = var_6;
                        var_115 = var_10;
                        var_116 = var_11;
                    }
                    for (int i_69 = 0; i_69 < 13;i_69 += 1)
                    {
                        var_117 = var_4;
                        var_118 = (!var_8);
                        arr_231 [i_45] [i_45] [i_53] [i_45] [i_64] [i_67] [i_69] = var_2;
                        var_119 -= var_10;
                        var_120 = -var_11;
                    }
                    for (int i_70 = 0; i_70 < 13;i_70 += 1)
                    {
                        arr_235 [i_45] [i_67] [i_45] [i_45] = var_1;
                        var_121 = var_4;
                    }
                    var_122 = var_3;
                    arr_236 [i_45] [i_45] = (~(~var_5));

                    for (int i_71 = 3; i_71 < 12;i_71 += 1)
                    {
                        var_123 = var_0;
                        var_124 = var_8;
                        var_125 = var_7;
                    }
                    for (int i_72 = 0; i_72 < 1;i_72 += 1)
                    {
                        arr_242 [i_45] [i_45] [2] [i_64] [9] [9] = var_10;
                        var_126 = var_11;
                        arr_243 [i_45] [i_45] = var_1;
                        arr_244 [i_45] [i_53] [i_53] [i_45] [i_45] = var_4;
                    }
                    var_127 -= var_10;
                }
            }
            var_128 += var_9;
            arr_245 [i_45 + 1] [i_53] [i_45] = var_9;
            var_129 = var_2;
            arr_246 [i_45] [i_53] [i_45] = var_5;
        }
        var_130 = var_0;
    }

    for (int i_73 = 2; i_73 < 21;i_73 += 1)
    {
        var_131 = -var_2;
        var_132 = var_11;
        var_133 = var_6;
    }
    #pragma endscop
}
