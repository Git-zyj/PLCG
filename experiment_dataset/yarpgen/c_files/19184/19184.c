/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 += (~var_16);
    var_21 = var_3;
    var_22 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_23 = var_17;
        var_24 *= var_17;

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [i_1 + 1] = var_4;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_25 = var_6;
                            arr_13 [i_4] = var_2;
                            var_26 *= var_7;
                        }
                    }
                }
            }
            arr_14 [i_0] [i_1 - 2] [i_1 - 2] = var_1;
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_5] [i_6] = 59568;

            /* vectorizable */
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_28 [i_6] [i_6] [i_6] [i_8] = (~var_14);

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_33 [i_5] [i_6] [i_7] [i_8] [i_8] [i_6] = (!var_0);
                        arr_34 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = var_14;
                        var_27 = (min(var_27, (!var_16)));
                        arr_35 [i_5] [i_5] [10] [i_6] [i_5] = var_0;
                    }
                    var_28 &= var_5;
                    var_29 = var_13;
                    var_30 = (min(var_30, -var_7));
                }
                arr_36 [i_6] [i_5] [i_7] [i_5] = var_2;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        {
                            var_31 *= var_14;
                            var_32 *= -var_18;
                            var_33 -= (!var_2);
                        }
                    }
                }
                var_34 = var_8;
            }
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                arr_46 [i_6] [i_6] [i_6] [i_5] = var_13;

                for (int i_13 = 3; i_13 < 22;i_13 += 1)
                {
                    var_35 = var_1;
                    var_36 = var_14;
                    var_37 = (~var_4);
                    var_38 = -5971;
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 22;i_14 += 1)
                {
                    var_39 = -var_17;
                    var_40 = (~var_1);
                    var_41 = var_13;
                }
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                arr_55 [i_6] [i_6] [i_6] [i_6] = var_14;
                arr_56 [i_6] [i_6] = var_12;
                arr_57 [i_6] = 59560;
                var_42 = 10427;
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                arr_62 [i_16] [i_6] [i_6] [i_5] = (~var_13);

                for (int i_17 = 2; i_17 < 22;i_17 += 1)
                {
                    var_43 *= var_18;
                    var_44 = var_2;

                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        var_45 ^= var_0;
                        var_46 = var_15;
                        arr_69 [i_18] [i_6] [i_6] [i_6] = var_15;
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_47 &= -var_18;
                        var_48 = var_15;
                    }
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        var_49 = (min(var_49, var_13));
                        var_50 = var_12;
                        arr_74 [i_6] [i_5] [i_5] [i_17] [16] = (!var_3);
                        arr_75 [i_5] [i_6] [i_5] [i_17 - 2] [i_6] = var_12;
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        arr_80 [i_5] [i_6] [i_6] [i_6] [i_16] = var_3;
                        arr_81 [i_5] [i_6] [i_16] [i_17 - 2] [i_6] = (!var_5);
                        var_51 = -var_15;
                    }
                    var_52 = (!var_1);

                    for (int i_22 = 0; i_22 < 0;i_22 += 1)
                    {
                        var_53 = (min(var_53, var_10));
                        arr_85 [i_5] [22] [i_16] [i_17] [i_22 + 1] [i_6] = var_13;
                        arr_86 [i_5] [i_6] [i_5] [i_5] [i_5] = var_16;
                        var_54 = var_5;
                    }
                }
                for (int i_23 = 1; i_23 < 22;i_23 += 1)
                {
                    arr_89 [i_5] [i_6] [i_5] [i_23] = -var_3;
                    var_55 = (min(var_55, var_1));

                    for (int i_24 = 2; i_24 < 20;i_24 += 1)
                    {
                        var_56 = 0;
                        var_57 = var_3;
                        var_58 = (!var_5);
                    }
                    for (int i_25 = 2; i_25 < 20;i_25 += 1)
                    {
                        var_59 = (min(var_59, var_12));
                        var_60 ^= (!var_18);
                    }
                    arr_95 [i_5] [i_6] [i_6] [4] = -var_12;
                }
                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    arr_98 [i_6] [i_6] [i_6] [i_16] [i_26] [i_26] = var_0;
                    var_61 = var_8;
                }
                var_62 = var_8;
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 23;i_28 += 1)
                    {
                        {
                            var_63 = (min(var_63, var_4));
                            arr_104 [i_5] [i_6] [i_5] [i_5] [12] = var_14;
                            var_64 = var_10;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_29 = 2; i_29 < 19;i_29 += 1)
        {
            var_65 = (!var_2);
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 23;i_30 += 1)
            {
                for (int i_31 = 1; i_31 < 1;i_31 += 1)
                {
                    {
                        var_66 -= -var_3;
                        var_67 = (max(var_67, var_5));
                        arr_115 [i_29] = var_13;
                        arr_116 [i_31] [i_29] [i_29] [i_5] = var_12;
                        var_68 *= var_10;
                    }
                }
            }
            var_69 = 0;
            var_70 = (~var_5);
        }
        for (int i_32 = 1; i_32 < 21;i_32 += 1)
        {
            var_71 &= (!var_9);

            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                var_72 = var_12;
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 23;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        {
                            var_73 -= var_3;
                            arr_128 [i_32] [3] [i_32] = var_4;
                            var_74 = var_10;
                            var_75 = (!68718952448);
                            var_76 = -var_7;
                        }
                    }
                }
                var_77 = (min(var_77, -var_8));
            }
            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                var_78 = var_11;
                var_79 = (max(var_79, var_0));
                arr_131 [i_32] = var_3;
                var_80 = var_3;
            }
            var_81 = ((-(!var_4)));
            var_82 ^= var_1;
        }
        for (int i_37 = 2; i_37 < 19;i_37 += 1)
        {
            var_83 = (min(var_83, var_16));
            var_84 = -var_10;
            var_85 = -var_3;
        }
        var_86 = (~var_18);
        var_87 = (~var_16);
        var_88 *= 0;
    }
    /* vectorizable */
    for (int i_38 = 0; i_38 < 1;i_38 += 1)
    {

        for (int i_39 = 2; i_39 < 18;i_39 += 1)
        {

            for (int i_40 = 0; i_40 < 19;i_40 += 1)
            {
                var_89 = (!var_1);
                arr_143 [i_39] = (~var_18);
                var_90 -= var_1;
            }
            for (int i_41 = 0; i_41 < 19;i_41 += 1)
            {

                for (int i_42 = 2; i_42 < 18;i_42 += 1)
                {
                    var_91 *= var_12;
                    var_92 = var_2;
                }
                for (int i_43 = 1; i_43 < 17;i_43 += 1)
                {
                    arr_151 [i_39] = var_12;
                    var_93 &= (!var_7);
                }
                for (int i_44 = 0; i_44 < 19;i_44 += 1)
                {

                    for (int i_45 = 2; i_45 < 15;i_45 += 1)
                    {
                        var_94 += -var_1;
                        var_95 = var_5;
                    }
                    for (int i_46 = 3; i_46 < 18;i_46 += 1)
                    {
                        var_96 = var_10;
                        var_97 = (!var_8);
                        arr_159 [i_46] [i_39] [i_38] [i_39] [i_38] = var_4;
                        arr_160 [i_39] [i_39] [i_39 - 1] [i_39] = var_12;
                    }

                    for (int i_47 = 0; i_47 < 19;i_47 += 1)
                    {
                        var_98 = var_6;
                        arr_163 [i_39] = -var_1;
                    }
                    arr_164 [i_38] [i_39] [i_39 - 1] [i_39] [i_44] = var_13;
                }
                arr_165 [i_39] [i_38] [17] [12] = var_8;
            }
            for (int i_48 = 3; i_48 < 17;i_48 += 1)
            {
                arr_168 [i_39 - 1] [i_39 + 1] [5] [i_39] = var_7;
                var_99 = var_8;
                var_100 = var_2;
                arr_169 [i_38] [i_39] [i_38] = var_8;
            }

            for (int i_49 = 0; i_49 < 19;i_49 += 1)
            {
                var_101 *= (!var_3);
                var_102 = (!var_4);
                var_103 = var_12;
            }
            for (int i_50 = 0; i_50 < 19;i_50 += 1) /* same iter space */
            {
                arr_175 [i_38] [i_38] [i_50] [i_39] = var_16;
                var_104 = var_16;
                var_105 = var_3;
            }
            for (int i_51 = 0; i_51 < 19;i_51 += 1) /* same iter space */
            {

                for (int i_52 = 0; i_52 < 19;i_52 += 1)
                {
                    var_106 += var_5;

                    for (int i_53 = 0; i_53 < 19;i_53 += 1)
                    {
                        var_107 *= var_0;
                        var_108 = (!var_5);
                        var_109 = var_3;
                    }
                    var_110 = var_5;
                }

                for (int i_54 = 0; i_54 < 19;i_54 += 1)
                {
                    var_111 = var_1;

                    for (int i_55 = 0; i_55 < 1;i_55 += 1)
                    {
                        var_112 *= var_7;
                        var_113 *= var_17;
                    }
                    for (int i_56 = 1; i_56 < 18;i_56 += 1)
                    {
                        var_114 = (max(var_114, var_14));
                        var_115 *= -var_8;
                    }
                    for (int i_57 = 0; i_57 < 19;i_57 += 1)
                    {
                        arr_193 [i_39] = var_12;
                        var_116 = -var_9;
                        arr_194 [0] [i_39 - 1] [i_39] [i_39 - 2] [i_39] = ((~(~746795107225928546)));
                    }
                    arr_195 [17] [i_39] [i_39 - 1] [i_51] [i_39 - 1] = (~var_13);
                    arr_196 [i_39] [i_39] [i_39] [i_39 - 2] = var_6;
                }
                for (int i_58 = 3; i_58 < 17;i_58 += 1)
                {
                    var_117 = var_8;
                    var_118 = (!var_11);
                }
                arr_200 [i_39] [i_39] = var_15;
            }

            for (int i_59 = 2; i_59 < 18;i_59 += 1)
            {
                /* LoopNest 2 */
                for (int i_60 = 1; i_60 < 18;i_60 += 1)
                {
                    for (int i_61 = 0; i_61 < 19;i_61 += 1)
                    {
                        {
                            var_119 = var_17;
                            var_120 = var_7;
                            var_121 = var_12;
                        }
                    }
                }
                arr_209 [i_39] = var_18;
                var_122 += (!var_17);
            }
            for (int i_62 = 1; i_62 < 16;i_62 += 1)
            {
                /* LoopNest 2 */
                for (int i_63 = 2; i_63 < 18;i_63 += 1)
                {
                    for (int i_64 = 3; i_64 < 16;i_64 += 1)
                    {
                        {
                            arr_217 [i_39] [i_39] [i_39] [i_39] = var_6;
                            var_123 = (min(var_123, (((~(!var_12))))));
                            var_124 = var_10;
                            var_125 = var_11;
                            arr_218 [i_38] [i_39 + 1] [i_39] [i_62] [i_39] [i_63] [i_64 - 1] = var_16;
                        }
                    }
                }
                var_126 = (max(var_126, var_14));
                arr_219 [i_38] [i_39] [i_39] [i_62] = ((-(~var_16)));
            }

            for (int i_65 = 0; i_65 < 19;i_65 += 1)
            {
                var_127 = var_9;

                for (int i_66 = 1; i_66 < 15;i_66 += 1)
                {
                    var_128 += var_7;
                    var_129 = var_3;
                }
                for (int i_67 = 1; i_67 < 15;i_67 += 1)
                {

                    for (int i_68 = 1; i_68 < 18;i_68 += 1) /* same iter space */
                    {
                        arr_228 [i_39] = var_15;
                        var_130 = var_7;
                    }
                    for (int i_69 = 1; i_69 < 18;i_69 += 1) /* same iter space */
                    {
                        arr_232 [i_38] [i_39] = var_1;
                        var_131 = (!var_17);
                        var_132 = (~var_15);
                    }
                    var_133 *= var_6;
                    var_134 = var_16;
                    var_135 = (!var_4);
                }
            }
        }
        var_136 = var_15;
        arr_233 [1] = (~var_0);
        var_137 = -var_10;
    }
    for (int i_70 = 0; i_70 < 0;i_70 += 1)
    {
        arr_236 [i_70] [i_70] = var_8;
        arr_237 [i_70] [14] = var_4;
        arr_238 [i_70] = var_4;

        for (int i_71 = 0; i_71 < 1;i_71 += 1)
        {
            arr_241 [i_70] [i_71] = var_2;
            var_138 = var_10;

            for (int i_72 = 2; i_72 < 18;i_72 += 1)
            {

                /* vectorizable */
                for (int i_73 = 0; i_73 < 21;i_73 += 1)
                {
                    arr_247 [i_70 + 1] [i_71] [i_71] [i_72 - 2] [i_72] [i_73] = var_2;

                    for (int i_74 = 3; i_74 < 17;i_74 += 1)
                    {
                        var_139 = var_12;
                        arr_251 [1] [i_71] |= var_0;
                        var_140 = var_18;
                    }

                    for (int i_75 = 2; i_75 < 20;i_75 += 1)
                    {
                        var_141 = (min(var_141, (~var_12)));
                        var_142 = var_1;
                    }
                    var_143 = var_8;
                }
                for (int i_76 = 0; i_76 < 21;i_76 += 1)
                {
                    arr_256 [i_70] [i_71] [16] [i_76] &= var_18;
                    arr_257 [i_76] [i_71] [i_76] [i_72 + 1] [i_71] [i_70] = var_6;
                }
                var_144 = var_15;
            }
            var_145 = var_0;
            var_146 = var_3;
        }
    }
    #pragma endscop
}
