/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213594
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = var_3;
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_3] [i_3] [6U] [6U] [i_3] = ((/* implicit */unsigned short) var_10);
                        arr_15 [i_0] [(unsigned short)18] [i_0] |= ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_2] [i_3] = var_2;
                        var_16 |= ((/* implicit */unsigned char) var_6);
                    }
                    var_17 ^= ((/* implicit */unsigned char) var_7);
                }
                arr_21 [(short)18] [i_1] [i_2] [(unsigned char)3] &= ((/* implicit */_Bool) var_11);
            }
            for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) var_2);
                    arr_28 [i_6] [i_6] [i_6 + 3] [20ULL] [i_6] [i_6] = var_4;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_19 ^= ((/* implicit */long long int) var_2);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_10))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) var_5);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_14))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_23 ^= ((/* implicit */int) var_8);
                        var_24 = ((/* implicit */unsigned short) var_5);
                        var_25 ^= ((/* implicit */long long int) var_9);
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_0))));
                        var_27 = ((/* implicit */int) var_6);
                    }
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_13))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_29 = var_3;
                    arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) var_4);
                    var_30 = ((/* implicit */_Bool) var_10);
                    var_31 -= var_12;
                    arr_41 [i_0] [0LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_6);
                }
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_9))));
                    var_33 = ((/* implicit */int) var_7);
                    var_34 = var_3;
                }
                for (int i_13 = 1; i_13 < 17; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_35 += ((/* implicit */_Bool) var_5);
                        var_36 = ((/* implicit */unsigned int) var_13);
                        var_37 = ((/* implicit */int) var_1);
                        var_38 = ((/* implicit */long long int) var_14);
                        var_39 = ((/* implicit */int) var_9);
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) var_4))));
                        var_41 = ((/* implicit */signed char) var_10);
                    }
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */unsigned char) var_5);
                        var_43 = ((/* implicit */unsigned short) var_2);
                        var_44 = ((/* implicit */_Bool) var_2);
                        var_45 = var_1;
                        var_46 |= ((/* implicit */unsigned long long int) var_4);
                    }
                    var_47 *= ((/* implicit */_Bool) var_1);
                }
                var_48 = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) var_13);
                            var_50 = ((/* implicit */unsigned long long int) var_0);
                            var_51 = ((/* implicit */unsigned short) var_3);
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) var_2))));
                            var_53 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned char i_19 = 1; i_19 < 20; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    {
                        var_54 = ((/* implicit */unsigned char) var_11);
                        var_55 = ((/* implicit */int) var_12);
                    }
                } 
            } 
        }
        for (int i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_22 = 2; i_22 < 19; i_22 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_24 = 1; i_24 < 18; i_24 += 4) 
                    {
                        var_56 = ((/* implicit */int) var_10);
                        var_57 = ((/* implicit */_Bool) var_11);
                        var_58 = ((/* implicit */long long int) var_13);
                        var_59 += ((/* implicit */signed char) var_9);
                        var_60 = ((/* implicit */unsigned char) var_12);
                    }
                    for (signed char i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        arr_81 [i_0] [i_21] [i_23] [i_23 + 1] [(signed char)14] [i_25] = ((/* implicit */long long int) var_3);
                        var_61 = ((/* implicit */_Bool) var_9);
                        var_62 *= ((/* implicit */unsigned long long int) var_10);
                        arr_82 [i_23] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    }
                    /* vectorizable */
                    for (unsigned short i_26 = 4; i_26 < 18; i_26 += 4) 
                    {
                        var_63 = ((/* implicit */_Bool) var_7);
                        arr_85 [i_0] [i_21] [i_23] [i_21] [i_26] [4U] = ((/* implicit */unsigned int) var_1);
                        arr_86 [i_0] [1] [(unsigned char)0] [i_23] [i_26] = ((/* implicit */short) var_7);
                        var_64 |= ((/* implicit */signed char) var_9);
                    }
                    var_65 = ((/* implicit */unsigned long long int) var_1);
                    arr_87 [(unsigned char)13] [i_21] [i_23] [i_21] = ((/* implicit */_Bool) var_9);
                }
                for (short i_27 = 1; i_27 < 20; i_27 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 3) /* same iter space */
                    {
                        var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) var_13))));
                        var_67 = ((/* implicit */signed char) var_0);
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 3) /* same iter space */
                    {
                        arr_97 [20ULL] = ((/* implicit */_Bool) var_1);
                        var_68 = ((/* implicit */signed char) var_6);
                        var_69 ^= ((/* implicit */unsigned char) var_2);
                        var_70 = ((/* implicit */short) max((var_70), (var_6)));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 3) /* same iter space */
                    {
                        var_71 = ((/* implicit */int) var_4);
                        arr_101 [i_30] [9LL] = ((/* implicit */_Bool) var_10);
                    }
                    var_72 = ((/* implicit */long long int) var_6);
                }
                var_73 = ((/* implicit */long long int) var_0);
                var_74 = ((/* implicit */unsigned int) var_6);
            }
            for (long long int i_31 = 1; i_31 < 20; i_31 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_32 = 0; i_32 < 21; i_32 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_33 = 1; i_33 < 20; i_33 += 4) 
                    {
                        arr_109 [i_32] [i_33 + 1] [i_21] [i_32] &= ((/* implicit */unsigned int) var_11);
                        var_75 ^= ((/* implicit */long long int) var_9);
                        arr_110 [20LL] [i_31] = ((/* implicit */unsigned int) var_4);
                    }
                    var_76 = var_13;
                }
                /* vectorizable */
                for (unsigned short i_34 = 1; i_34 < 18; i_34 += 2) 
                {
                    var_77 = ((/* implicit */int) var_4);
                    arr_114 [i_34 - 1] [i_21] [i_31] = ((/* implicit */long long int) var_10);
                    arr_115 [i_31] [i_21] = ((/* implicit */short) var_5);
                    /* LoopSeq 1 */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        arr_118 [i_0] [i_31] = ((/* implicit */int) var_0);
                        arr_119 [i_31] = var_10;
                        var_78 = ((/* implicit */short) max((var_78), (((/* implicit */short) var_12))));
                    }
                }
                for (int i_36 = 0; i_36 < 21; i_36 += 1) 
                {
                    var_79 = ((/* implicit */unsigned long long int) var_2);
                    var_80 += ((/* implicit */unsigned char) var_11);
                }
                for (signed char i_37 = 0; i_37 < 21; i_37 += 2) 
                {
                    var_81 = var_14;
                    arr_125 [7ULL] [i_31] [0U] = ((/* implicit */unsigned short) var_6);
                }
                /* LoopNest 2 */
                for (signed char i_38 = 0; i_38 < 21; i_38 += 1) 
                {
                    for (unsigned short i_39 = 3; i_39 < 20; i_39 += 4) 
                    {
                        {
                            arr_131 [i_0] [i_0] [i_31] = var_14;
                            var_82 ^= ((/* implicit */short) var_11);
                            var_83 = ((/* implicit */unsigned long long int) var_11);
                            var_84 = ((/* implicit */short) var_13);
                            var_85 *= ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_40 = 4; i_40 < 20; i_40 += 4) 
            {
                for (int i_41 = 0; i_41 < 21; i_41 += 1) 
                {
                    {
                        var_86 *= ((/* implicit */_Bool) var_9);
                        var_87 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_43 = 0; i_43 < 21; i_43 += 4) /* same iter space */
                {
                    var_88 = ((/* implicit */unsigned int) min((var_88), (((/* implicit */unsigned int) var_1))));
                    arr_144 [i_0] [i_0] = var_4;
                    var_89 ^= var_13;
                }
                /* vectorizable */
                for (unsigned char i_44 = 0; i_44 < 21; i_44 += 4) /* same iter space */
                {
                    arr_148 [i_0] [i_21] [11] [(_Bool)1] = ((/* implicit */unsigned int) var_5);
                    var_90 &= ((/* implicit */unsigned long long int) var_9);
                    var_91 = var_5;
                }
                for (int i_45 = 4; i_45 < 20; i_45 += 1) 
                {
                    arr_151 [i_21] [i_21] [17LL] [7LL] [(unsigned char)14] [i_21] = ((/* implicit */unsigned char) var_7);
                    arr_152 [i_42] [i_42] [i_42] [(unsigned char)18] = var_1;
                    var_92 |= ((/* implicit */short) var_13);
                    var_93 = var_13;
                }
                /* LoopNest 2 */
                for (unsigned char i_46 = 2; i_46 < 19; i_46 += 1) 
                {
                    for (long long int i_47 = 0; i_47 < 21; i_47 += 1) 
                    {
                        {
                            var_94 = ((/* implicit */long long int) var_5);
                            arr_158 [(unsigned char)0] = ((/* implicit */_Bool) var_1);
                            var_95 = ((/* implicit */_Bool) min((var_95), (((/* implicit */_Bool) var_11))));
                            var_96 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                arr_159 [i_21] = var_14;
                /* LoopSeq 2 */
                for (unsigned long long int i_48 = 4; i_48 < 20; i_48 += 4) 
                {
                    var_97 = var_9;
                    arr_162 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                    var_98 = ((/* implicit */_Bool) min((var_98), (((/* implicit */_Bool) var_6))));
                    /* LoopSeq 1 */
                    for (_Bool i_49 = 0; i_49 < 1; i_49 += 1) 
                    {
                        arr_166 [i_0] [i_49] [i_42] [i_48] = ((/* implicit */long long int) var_5);
                        arr_167 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)3] [(_Bool)1] |= var_4;
                        var_99 = ((/* implicit */unsigned short) var_7);
                    }
                }
                /* vectorizable */
                for (_Bool i_50 = 0; i_50 < 0; i_50 += 1) 
                {
                    arr_171 [(signed char)10] [i_21] [i_42] [i_50 + 1] [i_42] = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_51 = 0; i_51 < 21; i_51 += 4) 
                    {
                        var_100 = ((/* implicit */int) min((var_100), (((/* implicit */int) var_6))));
                        var_101 = ((/* implicit */unsigned char) var_6);
                    }
                    var_102 = ((/* implicit */unsigned short) var_14);
                }
            }
        }
        for (short i_52 = 2; i_52 < 20; i_52 += 1) 
        {
            /* LoopNest 2 */
            for (int i_53 = 0; i_53 < 21; i_53 += 4) 
            {
                for (long long int i_54 = 1; i_54 < 20; i_54 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_55 = 0; i_55 < 1; i_55 += 1) 
                        {
                            var_103 = ((/* implicit */signed char) var_11);
                            var_104 = ((/* implicit */_Bool) var_1);
                            arr_184 [(_Bool)1] [i_52] [i_52] [(_Bool)1] [i_52] [i_52] = ((/* implicit */short) var_0);
                        }
                        /* vectorizable */
                        for (int i_56 = 4; i_56 < 18; i_56 += 1) 
                        {
                            arr_188 [i_52] = var_1;
                            var_105 = ((/* implicit */_Bool) var_14);
                        }
                        for (long long int i_57 = 0; i_57 < 21; i_57 += 4) 
                        {
                            var_106 = ((/* implicit */int) var_0);
                            arr_192 [i_57] [i_52 - 2] [i_54 - 1] |= ((/* implicit */unsigned char) var_13);
                            var_107 = ((/* implicit */unsigned char) min((var_107), (((/* implicit */unsigned char) var_11))));
                        }
                        var_108 = ((/* implicit */unsigned long long int) var_13);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_58 = 3; i_58 < 20; i_58 += 3) 
            {
                for (_Bool i_59 = 0; i_59 < 1; i_59 += 1) 
                {
                    {
                        var_109 &= ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 3 */
                        for (unsigned char i_60 = 0; i_60 < 21; i_60 += 1) 
                        {
                            arr_203 [i_0] [i_60] [i_52] [i_59] [13] [i_60] = ((/* implicit */unsigned char) var_6);
                            var_110 |= ((/* implicit */_Bool) var_12);
                        }
                        for (long long int i_61 = 0; i_61 < 21; i_61 += 1) 
                        {
                            arr_208 [i_0] [i_0] [i_0] [i_0] [i_52] = ((/* implicit */_Bool) var_12);
                            arr_209 [i_52] [(_Bool)1] [i_58] [i_59] [i_61] = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (_Bool i_62 = 0; i_62 < 1; i_62 += 1) 
                        {
                            var_111 ^= ((/* implicit */unsigned char) var_13);
                            var_112 = ((/* implicit */int) max((var_112), (((/* implicit */int) var_10))));
                            arr_213 [i_0] [i_52] [i_52] [i_59] [i_52] = ((/* implicit */_Bool) var_5);
                            arr_214 [(signed char)13] [i_52] [i_52] [i_0] = ((/* implicit */short) var_2);
                            arr_215 [i_0] [i_0] [i_0] &= ((/* implicit */short) var_11);
                        }
                        var_113 |= ((/* implicit */_Bool) var_1);
                        arr_216 [i_58] [i_52] [16] [i_58] = ((/* implicit */short) var_9);
                    }
                } 
            } 
            arr_217 [i_52] [i_52 + 1] = ((/* implicit */unsigned short) var_10);
        }
    }
    for (unsigned char i_63 = 0; i_63 < 10; i_63 += 4) 
    {
        /* LoopNest 3 */
        for (int i_64 = 0; i_64 < 10; i_64 += 4) 
        {
            for (unsigned short i_65 = 0; i_65 < 10; i_65 += 1) 
            {
                for (unsigned long long int i_66 = 0; i_66 < 10; i_66 += 2) 
                {
                    {
                        arr_230 [i_65] [i_65] [i_66] [i_65] [i_66] = ((/* implicit */unsigned short) var_14);
                        var_114 = ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_67 = 2; i_67 < 8; i_67 += 1) 
        {
            for (_Bool i_68 = 0; i_68 < 1; i_68 += 1) 
            {
                {
                    var_115 = ((/* implicit */unsigned short) var_9);
                    var_116 *= ((/* implicit */long long int) var_13);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_69 = 0; i_69 < 1; i_69 += 1) 
        {
            arr_241 [i_69] [i_69] [i_69] = ((/* implicit */unsigned int) var_10);
            /* LoopSeq 2 */
            for (unsigned int i_70 = 0; i_70 < 10; i_70 += 4) 
            {
                var_117 = var_6;
                var_118 += ((/* implicit */unsigned long long int) var_14);
            }
            for (int i_71 = 0; i_71 < 10; i_71 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_72 = 0; i_72 < 10; i_72 += 3) 
                {
                    for (signed char i_73 = 2; i_73 < 9; i_73 += 4) 
                    {
                        {
                            var_119 = var_5;
                            var_120 = ((/* implicit */short) var_14);
                            var_121 = ((/* implicit */unsigned char) var_4);
                            arr_252 [i_69] [(short)6] [i_71] [i_71] [i_71] [i_71] [(unsigned short)7] = var_6;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_74 = 0; i_74 < 10; i_74 += 3) 
                {
                    var_122 = ((/* implicit */unsigned long long int) var_1);
                    var_123 = ((/* implicit */long long int) var_0);
                }
                for (int i_75 = 0; i_75 < 10; i_75 += 2) 
                {
                    var_124 = ((/* implicit */unsigned short) var_8);
                    arr_260 [i_69] = ((/* implicit */unsigned char) var_11);
                    var_125 = ((/* implicit */unsigned short) min((var_125), (((/* implicit */unsigned short) var_12))));
                }
                for (unsigned long long int i_76 = 2; i_76 < 9; i_76 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_77 = 0; i_77 < 10; i_77 += 4) 
                    {
                        var_126 ^= ((/* implicit */unsigned long long int) var_0);
                        var_127 = ((/* implicit */short) max((var_127), (((/* implicit */short) var_8))));
                        var_128 = ((/* implicit */_Bool) var_11);
                    }
                    arr_266 [i_63] [1LL] [i_69] [(signed char)7] [i_63] [i_63] = ((/* implicit */unsigned int) var_1);
                }
                var_129 &= ((/* implicit */unsigned short) var_3);
            }
            /* LoopNest 2 */
            for (unsigned char i_78 = 3; i_78 < 9; i_78 += 1) 
            {
                for (int i_79 = 0; i_79 < 10; i_79 += 4) 
                {
                    {
                        arr_272 [i_78] [i_79] |= ((/* implicit */unsigned long long int) var_10);
                        var_130 = ((/* implicit */int) var_7);
                        /* LoopSeq 3 */
                        for (_Bool i_80 = 0; i_80 < 1; i_80 += 1) 
                        {
                            var_131 += ((/* implicit */_Bool) var_11);
                            var_132 = ((/* implicit */unsigned int) var_7);
                            var_133 = ((/* implicit */signed char) max((var_133), (((/* implicit */signed char) var_9))));
                        }
                        for (int i_81 = 4; i_81 < 7; i_81 += 3) 
                        {
                            var_134 = ((/* implicit */int) var_7);
                            arr_277 [i_63] [i_69] [i_78 - 1] [1ULL] [(unsigned char)2] = ((/* implicit */int) var_3);
                        }
                        for (unsigned long long int i_82 = 0; i_82 < 10; i_82 += 4) 
                        {
                            arr_280 [i_69] [i_69] = ((/* implicit */unsigned char) var_4);
                            var_135 ^= ((/* implicit */unsigned int) var_5);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_83 = 2; i_83 < 8; i_83 += 1) 
        {
            var_136 = ((/* implicit */int) var_5);
            arr_284 [i_63] = ((/* implicit */int) var_9);
            /* LoopNest 2 */
            for (int i_84 = 1; i_84 < 6; i_84 += 1) 
            {
                for (long long int i_85 = 0; i_85 < 10; i_85 += 4) 
                {
                    {
                        var_137 = var_2;
                        arr_291 [i_63] = ((/* implicit */unsigned char) var_4);
                        arr_292 [(_Bool)1] = ((/* implicit */long long int) var_14);
                        /* LoopSeq 1 */
                        for (short i_86 = 0; i_86 < 10; i_86 += 1) 
                        {
                            arr_297 [(unsigned char)7] [3] [i_84] [i_85] [i_86] = var_10;
                            var_138 = ((/* implicit */unsigned int) var_8);
                            var_139 = ((/* implicit */unsigned int) var_10);
                        }
                        var_140 ^= ((/* implicit */unsigned short) var_7);
                    }
                } 
            } 
        }
        for (short i_87 = 0; i_87 < 10; i_87 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_88 = 0; i_88 < 10; i_88 += 1) 
            {
                var_141 *= ((/* implicit */unsigned short) var_5);
                arr_304 [1LL] = ((/* implicit */int) var_4);
            }
            var_142 = ((/* implicit */_Bool) var_14);
            var_143 = var_2;
            arr_305 [i_63] [(_Bool)1] [i_63] = ((/* implicit */unsigned long long int) var_4);
            arr_306 [i_63] [i_87] = ((/* implicit */signed char) var_9);
        }
    }
    /* LoopNest 3 */
    for (short i_89 = 0; i_89 < 12; i_89 += 4) 
    {
        for (unsigned long long int i_90 = 0; i_90 < 12; i_90 += 1) 
        {
            for (unsigned char i_91 = 0; i_91 < 12; i_91 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_92 = 2; i_92 < 10; i_92 += 2) 
                    {
                        for (unsigned long long int i_93 = 0; i_93 < 12; i_93 += 3) 
                        {
                            {
                                var_144 = ((/* implicit */short) var_0);
                                var_145 ^= ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_94 = 1; i_94 < 11; i_94 += 3) 
                    {
                        for (unsigned char i_95 = 3; i_95 < 10; i_95 += 4) 
                        {
                            {
                                var_146 *= ((/* implicit */unsigned int) var_14);
                                var_147 ^= ((/* implicit */signed char) var_10);
                                var_148 *= var_14;
                            }
                        } 
                    } 
                    var_149 = ((/* implicit */signed char) var_9);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_96 = 0; i_96 < 12; i_96 += 3) 
                    {
                        var_150 = ((/* implicit */int) min((var_150), (((/* implicit */int) var_14))));
                        arr_328 [i_89] [i_89] [i_90] [i_89] = ((/* implicit */_Bool) var_14);
                        var_151 = ((/* implicit */_Bool) var_11);
                    }
                }
            } 
        } 
    } 
}
