/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_14 = (min(var_14, (~var_0)));
            var_15 = (max(var_15, (((15 ? 1876292139704834424 : 2146435072)))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_16 = (~0);
                    var_17 = var_12;
                    var_18 *= (~var_7);
                    arr_14 [i_0] [1] [i_2] [i_3] [i_3] = (~var_5);
                    var_19 -= ((((var_6 ? var_3 : var_4)) > var_10));
                }
                var_20 |= -var_12;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5] [i_5] = ((((var_1 ? var_8 : var_4)) <= var_0));
                            var_21 = var_1;
                            var_22 = var_11;
                        }
                    }
                }
                var_23 = -var_10;
            }

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_25 [i_6] [i_1] [i_0] [i_0] = var_8;

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        var_24 = ((var_1 ? var_12 : var_0));
                        var_25 -= -var_8;
                        arr_31 [i_0] [i_1] [i_6] [i_7] = (!var_1);
                        arr_32 [i_0] [i_1] [i_6] [i_1] [i_8] = -var_4;
                    }
                    arr_33 [i_0] [i_0] [i_0] [i_0] &= ((-214950068711137609 ? 1876292139704834426 : 1));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_0] = ((var_1 ? var_7 : var_11));
                        var_26 = ((~(!var_4)));
                        var_27 = -27746;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_28 ^= var_9;
                        var_29 -= ((var_0 ? var_8 : var_12));
                        var_30 = (min(var_30, var_8));
                        var_31 = (var_0 < var_12);
                    }

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_32 = var_9;
                        var_33 *= var_9;
                        arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] = (16885 && 8990211540570214709);
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_34 *= (~1876292139704834448);
                        arr_48 [i_6] [i_1] [i_7] [i_7] &= (1 + 1876292139704834414);
                    }
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_35 -= var_10;
                        arr_55 [i_0] [i_1] [i_6] [2] [i_14] = ((var_4 ? var_11 : var_1));
                    }
                    var_36 = (min(var_36, (var_5 != var_12)));

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_37 = (var_2 && 16570451934004717191);
                        arr_59 [i_0] [i_0] [i_1] [i_6] [i_13] [i_15] [i_15] = ((var_12 ? var_6 : var_10));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_62 [i_0] [11] [14] [i_6] [i_13] [i_16] [i_16] = (var_1 ? var_3 : var_8);
                        var_38 *= ((var_2 ? var_5 : (var_5 / var_12)));
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_39 = ((var_6 ? var_9 : var_6));
                        var_40 ^= var_6;
                    }
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 2; i_19 < 18;i_19 += 1)
                    {
                        var_41 = -8388607;
                        arr_73 [i_0] [12] [i_6] [i_18] [i_18] = ((var_0 ? var_10 : var_5));
                        var_42 = (((214950068711137609 ? 1 : 2148532244)));
                    }
                    for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
                    {
                        arr_76 [i_0] [i_0] [i_6] [i_6] [i_18] [i_20] = (var_0 <= var_10);
                        var_43 = (~var_6);
                        arr_77 [i_20] [i_20] [i_20] [i_20] [i_20] [15] [i_20] = var_7;
                        var_44 = var_4;
                        arr_78 [i_20] [i_18] [i_6] &= (((var_10 >> var_8) ? -var_0 : ((var_5 ? var_6 : var_0))));
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
                    {
                        arr_83 [i_0] [i_0] [i_0] [i_6] [15] [i_0] [i_21] = (!var_4);
                        arr_84 [i_0] [i_0] [i_6] [10] [i_21] = var_7;
                        arr_85 [i_0] [i_6] [i_6] [i_6] [i_1] [i_18] [i_6] = var_9;
                        var_45 |= var_8;
                    }

                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        var_46 = var_8;
                        var_47 = ((var_11 << (var_10 - 7489)));
                        var_48 = ((var_9 > (var_12 < var_2)));
                    }
                }
                for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
                {
                    var_49 = var_9;
                    var_50 = ((var_6 ? var_12 : var_8));
                    var_51 = (max(var_51, (var_12 ^ var_10)));
                    var_52 = ((var_9 & ((var_0 ? var_6 : var_1))));
                }
            }
            for (int i_24 = 2; i_24 < 17;i_24 += 1)
            {
                var_53 = -var_3;
                var_54 = var_6;
                arr_93 [7] [i_0] [i_0] = ((var_4 ? var_8 : var_1));
                var_55 |= (~var_7);
            }
            for (int i_25 = 3; i_25 < 16;i_25 += 1)
            {
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        {
                            arr_102 [i_0] [i_1] [i_1] [i_26] |= (var_10 && var_2);
                            arr_103 [i_0] [i_1] [i_1] [i_25] [i_26] [i_27] = (var_3 <= var_11);
                        }
                    }
                }
                var_56 = (var_3 == var_2);
                var_57 = ((var_10 ? var_4 : var_0));
            }

            for (int i_28 = 0; i_28 < 19;i_28 += 1)
            {
                var_58 *= ((var_2 ? var_6 : var_1));
                arr_106 [i_28] [i_28] [i_1] [i_0] = (~var_1);

                for (int i_29 = 0; i_29 < 19;i_29 += 1)
                {
                    arr_111 [16] [4] [4] [i_1] [i_0] [i_0] = (~1876292139704834424);
                    arr_112 [i_0] [i_0] [i_0] [i_0] = ((3 ? (var_7 < var_5) : var_5));
                }
                var_59 = (((var_0 || var_8) != var_11));
                var_60 = -var_2;
            }
        }

        for (int i_30 = 0; i_30 < 19;i_30 += 1)
        {
            var_61 *= ((var_3 ? var_12 : 0));
            var_62 = ((var_12 ? var_3 : var_11));
            var_63 = ((var_9 ? var_2 : var_2));
        }
        arr_117 [i_0] = (var_6 >= var_7);
        arr_118 [1] [i_0] = ((var_1 ? var_6 : var_10));

        for (int i_31 = 1; i_31 < 18;i_31 += 1)
        {
            /* LoopNest 3 */
            for (int i_32 = 1; i_32 < 18;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 1;i_33 += 1)
                {
                    for (int i_34 = 1; i_34 < 18;i_34 += 1)
                    {
                        {
                            var_64 = (var_11 / var_9);
                            var_65 = (min(var_65, (var_10 || var_4)));
                            var_66 = ((var_8 ? var_9 : var_3));
                        }
                    }
                }
            }

            for (int i_35 = 2; i_35 < 15;i_35 += 1)
            {
                /* LoopNest 2 */
                for (int i_36 = 1; i_36 < 18;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 1;i_37 += 1)
                    {
                        {
                            arr_139 [i_0] [i_31] [i_31] [i_31] [i_36] [i_37] = (!var_3);
                            var_67 -= ((var_3 ? var_5 : var_0));
                            var_68 |= ((var_3 ? var_9 : var_4));
                            var_69 -= (!var_3);
                            var_70 &= var_10;
                        }
                    }
                }

                for (int i_38 = 0; i_38 < 19;i_38 += 1)
                {
                    arr_144 [17] [i_31] [2] [i_31] [i_0] = var_3;
                    var_71 = var_3;
                    arr_145 [1] [i_38] [i_31] [i_31] [1] [1] |= (var_6 >= var_4);
                    arr_146 [i_0] [i_38] [i_35] [i_35] [0] [i_38] |= var_10;
                }
                var_72 = 16570451934004717201;

                for (int i_39 = 2; i_39 < 16;i_39 += 1)
                {

                    for (int i_40 = 2; i_40 < 15;i_40 += 1)
                    {
                        var_73 = var_11;
                        var_74 &= ((16570451934004717192 ? 3102121129 : 2981462553));
                        var_75 ^= ((var_4 & ((var_12 ? var_6 : var_5))));
                        arr_152 [i_0] [i_0] [i_31] [i_35 + 4] [i_39] [i_35 + 4] [i_40] = (var_9 <= var_4);
                        var_76 -= -var_2;
                    }
                    var_77 = (var_11 / var_10);
                    var_78 *= var_8;
                    arr_153 [i_0] [i_31] [i_0] [i_31] [i_35] [i_39] = var_3;
                }
                for (int i_41 = 1; i_41 < 18;i_41 += 1) /* same iter space */
                {
                    var_79 = ((var_12 || (var_6 && var_1)));

                    for (int i_42 = 0; i_42 < 19;i_42 += 1)
                    {
                        arr_160 [i_31] [i_42] [i_41] [i_35] [i_31] [i_31] [i_31] = -var_4;
                        var_80 = ((var_11 ? var_7 : var_11));
                        arr_161 [i_0] [i_0] [i_31] [i_0] [i_0] = -var_6;
                    }
                    for (int i_43 = 0; i_43 < 19;i_43 += 1)
                    {
                        arr_164 [i_0] [14] [i_0] [i_31] [i_0] = (~var_6);
                        var_81 = (var_10 ? var_5 : var_11);
                        var_82 = var_7;
                        var_83 = (min(var_83, var_4));
                    }
                    var_84 *= var_7;
                }
                for (int i_44 = 1; i_44 < 18;i_44 += 1) /* same iter space */
                {

                    for (int i_45 = 2; i_45 < 16;i_45 += 1)
                    {
                        var_85 |= var_2;
                        var_86 -= ((~(!var_5)));
                    }
                    for (int i_46 = 0; i_46 < 19;i_46 += 1)
                    {
                        var_87 = var_9;
                        var_88 = -4294967284;
                    }
                    var_89 = var_3;
                    var_90 -= 3;
                }
            }
            for (int i_47 = 1; i_47 < 1;i_47 += 1)
            {
                var_91 -= var_9;
                var_92 &= var_3;
                /* LoopNest 2 */
                for (int i_48 = 0; i_48 < 19;i_48 += 1)
                {
                    for (int i_49 = 0; i_49 < 19;i_49 += 1)
                    {
                        {
                            var_93 = (var_8 || var_5);
                            arr_180 [i_0] [i_31] [i_31] [i_47] [i_48] [i_49] = var_5;
                            var_94 ^= (var_3 / var_7);
                        }
                    }
                }
            }
            for (int i_50 = 0; i_50 < 19;i_50 += 1)
            {
                var_95 = (var_7 <= var_11);
                arr_185 [i_0] [i_31] [i_0] [i_0] = -var_8;
                var_96 = (((~var_10) | var_1));
            }
        }
        for (int i_51 = 0; i_51 < 1;i_51 += 1)
        {
            var_97 = var_5;
            var_98 = ((var_9 >= ((var_0 >> (var_1 + 6202)))));
            arr_188 [i_0] [i_0] [i_51] &= ((var_11 ? var_5 : var_2));
        }
    }

    for (int i_52 = 4; i_52 < 9;i_52 += 1)
    {
        /* LoopNest 2 */
        for (int i_53 = 0; i_53 < 11;i_53 += 1)
        {
            for (int i_54 = 0; i_54 < 11;i_54 += 1)
            {
                {

                    for (int i_55 = 0; i_55 < 11;i_55 += 1)
                    {

                        for (int i_56 = 0; i_56 < 11;i_56 += 1)
                        {
                            var_99 = ((var_10 & ((var_2 ? var_12 : var_5))));
                            var_100 |= ((var_0 ? var_5 : var_6));
                        }
                        var_101 = (min(var_101, ((((((var_10 ? (1 >= 24) : var_9))) ? (~var_9) : var_3)))));
                        arr_202 [i_55] [i_54] [i_53] [i_52 - 4] = var_11;
                        var_102 = -var_8;
                    }

                    for (int i_57 = 0; i_57 < 1;i_57 += 1)
                    {
                        var_103 = var_2;
                        var_104 = (!-var_7);
                    }
                }
            }
        }
        var_105 = (((var_2 ? var_8 : var_3)));
        /* LoopNest 2 */
        for (int i_58 = 0; i_58 < 11;i_58 += 1)
        {
            for (int i_59 = 3; i_59 < 9;i_59 += 1)
            {
                {

                    for (int i_60 = 4; i_60 < 9;i_60 += 1)
                    {
                        var_106 *= ((!(((var_9 ? var_8 : var_10)))));

                        for (int i_61 = 0; i_61 < 1;i_61 += 1)
                        {
                            var_107 = ((~(var_8 - var_10)));
                            arr_214 [i_52] [i_61] [i_52] = (!var_12);
                            var_108 = var_3;
                            var_109 = var_4;
                        }
                    }

                    for (int i_62 = 0; i_62 < 11;i_62 += 1) /* same iter space */
                    {
                        var_110 |= (!32757);

                        for (int i_63 = 0; i_63 < 11;i_63 += 1)
                        {
                            var_111 = var_10;
                            var_112 &= ((var_11 ? -var_6 : (var_4 >> var_0)));
                            var_113 = var_9;
                        }
                        for (int i_64 = 0; i_64 < 11;i_64 += 1) /* same iter space */
                        {
                            var_114 = ((var_3 + 2147483647) << ((-(!var_12))));
                            arr_222 [i_52] [i_58] [i_59] [i_58] [i_64] &= (((((-(var_10 & var_11)))) ? ((var_0 ? ((1 ? 1876292139704834430 : 0)) : var_8)) : (var_8 & var_9)));
                            arr_223 [7] [i_58] [i_58] [i_58] [i_58] [i_58] [i_58] &= (((var_10 ? var_10 : var_4)));
                        }
                        for (int i_65 = 0; i_65 < 11;i_65 += 1) /* same iter space */
                        {
                            var_115 |= (((!var_11) ? (!var_5) : ((var_3 ? -var_2 : var_2))));
                            var_116 ^= var_11;
                            var_117 = ((~((var_1 ? var_2 : var_4))));
                            var_118 *= (((61532 ? 1 : 4411417354290795449)));
                        }
                    }
                    for (int i_66 = 0; i_66 < 11;i_66 += 1) /* same iter space */
                    {
                        var_119 -= var_11;
                        arr_228 [i_52] [i_58] [i_59] [i_66] |= var_4;
                        var_120 -= (((3209 ? -15478 : 1009821171)));
                    }
                    for (int i_67 = 0; i_67 < 11;i_67 += 1) /* same iter space */
                    {
                        arr_231 [i_52] [i_52] [i_67] [i_52] [i_52] = (~var_11);
                        arr_232 [1] [i_67] = var_5;
                    }
                    for (int i_68 = 0; i_68 < 11;i_68 += 1)
                    {

                        for (int i_69 = 0; i_69 < 11;i_69 += 1)
                        {
                            var_121 = ((((((var_0 ? var_2 : var_4)))) && var_0));
                            var_122 -= var_11;
                        }

                        /* vectorizable */
                        for (int i_70 = 0; i_70 < 11;i_70 += 1)
                        {
                            var_123 = ((var_11 ? ((var_5 ? var_4 : var_3)) : var_8));
                            arr_241 [10] [i_68] [i_59] [9] [i_70] = (var_3 ^ var_3);
                        }
                        var_124 *= (((var_5 + var_11) ? (-1 - 5) : (((var_11 ? var_7 : var_12)))));
                    }

                    for (int i_71 = 1; i_71 < 1;i_71 += 1) /* same iter space */
                    {
                        var_125 *= (!var_11);
                        var_126 = -1073741823;
                    }
                    for (int i_72 = 1; i_72 < 1;i_72 += 1) /* same iter space */
                    {

                        for (int i_73 = 0; i_73 < 11;i_73 += 1) /* same iter space */
                        {
                            var_127 = var_7;
                            arr_248 [i_52] [i_58] [i_59 + 2] [i_72] [6] = (~-15478);
                        }
                        /* vectorizable */
                        for (int i_74 = 0; i_74 < 11;i_74 += 1) /* same iter space */
                        {
                            var_128 = var_11;
                            var_129 |= ((var_11 ? var_12 : var_10));
                            var_130 |= (var_4 & var_6);
                        }

                        for (int i_75 = 0; i_75 < 11;i_75 += 1)
                        {
                            var_131 = ((var_5 & (var_1 % -15478)));
                            var_132 *= (var_1 - var_9);
                        }
                        for (int i_76 = 2; i_76 < 10;i_76 += 1)
                        {
                            var_133 = var_10;
                            arr_258 [7] [i_72] = ((var_10 << ((((var_7 ? var_2 : var_3)) - 14866663458537782061))));
                            var_134 = (max(var_134, (((var_0 || (((var_2 - (var_8 & var_11)))))))));
                        }
                    }
                    arr_259 [8] [i_52] [i_59] = ((var_8 ? (var_6 - var_1) : (var_10 - var_12)));
                }
            }
        }
    }
    #pragma endscop
}
