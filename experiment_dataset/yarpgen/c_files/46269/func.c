/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46269
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */signed char) var_1);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_14 = ((/* implicit */long long int) var_3);
        var_15 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_17 = ((/* implicit */long long int) var_6);
            var_18 = var_8;
        }
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_2);
            arr_9 [i_1] [i_3] = ((/* implicit */int) var_11);
        }
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                            var_21 = ((/* implicit */unsigned char) var_9);
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) var_8);
                            arr_31 [i_1] [i_1] [i_1] [i_8] [i_1] [15U] = ((/* implicit */short) var_9);
                            arr_32 [i_8] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_3))))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) var_8);
            }
            var_25 = ((/* implicit */signed char) var_10);
        }
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_26 = (!(((/* implicit */_Bool) var_2)));
                        arr_41 [i_1] [i_1] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) var_8);
                var_28 = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (short i_16 = 2; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) var_1);
                            var_30 = ((/* implicit */signed char) (~(var_5)));
                            var_31 = ((/* implicit */unsigned char) (+(var_10)));
                            arr_51 [i_14] = ((/* implicit */int) var_1);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 2) /* same iter space */
                {
                    arr_55 [i_14] = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(var_1))))));
                        var_34 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                    }
                }
                for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 2) /* same iter space */
                {
                    arr_60 [i_1] [(signed char)19] [i_1] [i_14] [i_1] = ((/* implicit */unsigned char) var_7);
                    var_35 = ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) var_9);
                        var_37 = ((/* implicit */signed char) var_11);
                        var_38 ^= var_5;
                    }
                }
            }
            for (unsigned long long int i_21 = 4; i_21 < 20; i_21 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))));
                var_40 = ((/* implicit */unsigned short) var_9);
                var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
            }
            for (unsigned long long int i_22 = 4; i_22 < 20; i_22 += 2) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned long long int) var_3);
                arr_69 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (unsigned short i_23 = 2; i_23 < 22; i_23 += 4) 
                {
                    var_43 = ((/* implicit */int) var_10);
                    var_44 = ((/* implicit */unsigned int) var_8);
                    var_45 = ((/* implicit */unsigned long long int) var_2);
                    var_46 = ((/* implicit */unsigned int) var_3);
                }
            }
            var_47 = ((/* implicit */signed char) var_11);
            var_48 = ((/* implicit */long long int) var_4);
            var_49 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        for (unsigned int i_24 = 0; i_24 < 23; i_24 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 23; i_25 += 1) 
            {
                for (unsigned char i_26 = 1; i_26 < 21; i_26 += 4) 
                {
                    for (long long int i_27 = 0; i_27 < 23; i_27 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) var_7);
                            arr_81 [19LL] [i_26] [i_27] = ((/* implicit */unsigned long long int) var_6);
                            var_51 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
            } 
            var_52 = ((/* implicit */unsigned int) var_10);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_28 = 1; i_28 < 21; i_28 += 2) /* same iter space */
        {
            var_53 = ((/* implicit */_Bool) var_0);
            /* LoopSeq 1 */
            for (long long int i_29 = 2; i_29 < 20; i_29 += 1) 
            {
                var_54 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
                var_56 = ((/* implicit */_Bool) var_5);
                var_57 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                arr_87 [i_29] = ((/* implicit */long long int) var_8);
            }
            var_58 = ((/* implicit */_Bool) var_3);
        }
        for (unsigned long long int i_30 = 1; i_30 < 21; i_30 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_31 = 0; i_31 < 23; i_31 += 4) 
            {
                var_59 = ((/* implicit */signed char) (~(var_10)));
                /* LoopNest 2 */
                for (signed char i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    for (unsigned int i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        {
                            var_60 = ((/* implicit */_Bool) var_0);
                            var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) var_5))));
                            var_62 = ((/* implicit */short) var_7);
                            arr_101 [(signed char)13] [i_30 + 1] [(signed char)13] [i_30 + 2] [i_30] = var_9;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_34 = 1; i_34 < 21; i_34 += 1) /* same iter space */
                {
                    arr_104 [i_30] [i_1] [i_34 - 1] [i_34] = ((/* implicit */signed char) var_9);
                    /* LoopSeq 1 */
                    for (unsigned int i_35 = 0; i_35 < 23; i_35 += 4) 
                    {
                        var_63 = ((/* implicit */_Bool) var_9);
                        var_64 = ((/* implicit */unsigned short) (+((~(var_1)))));
                    }
                    /* LoopSeq 2 */
                    for (short i_36 = 2; i_36 < 21; i_36 += 4) 
                    {
                        var_65 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
                        var_66 = ((/* implicit */int) max((var_66), (((/* implicit */int) var_11))));
                        arr_110 [i_1] [i_30] [i_30] [i_34] = var_4;
                        arr_111 [i_1] [i_1] [i_31] [i_30] [11U] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_8))))));
                        var_67 = ((/* implicit */int) var_4);
                    }
                    for (unsigned char i_37 = 1; i_37 < 20; i_37 += 4) 
                    {
                        var_68 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
                        var_69 = ((/* implicit */unsigned char) var_8);
                        var_70 *= ((/* implicit */signed char) var_1);
                    }
                }
                for (unsigned short i_38 = 1; i_38 < 21; i_38 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_39 = 0; i_39 < 23; i_39 += 3) 
                    {
                        arr_120 [i_30] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_7))))));
                        var_71 = ((/* implicit */_Bool) var_5);
                    }
                    for (short i_40 = 0; i_40 < 23; i_40 += 1) 
                    {
                        var_72 = ((/* implicit */unsigned long long int) var_6);
                        var_73 = ((/* implicit */unsigned short) var_6);
                        arr_124 [i_40] [(short)19] [i_40] [i_30] [(short)19] = ((/* implicit */signed char) var_9);
                    }
                    arr_125 [i_30] = ((/* implicit */unsigned short) (+(6638848050357718426LL)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_41 = 1; i_41 < 20; i_41 += 2) 
                    {
                        arr_130 [i_30] = ((/* implicit */unsigned char) var_7);
                        var_74 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                        arr_131 [i_31] [12U] [i_30] [i_31] [i_31] = ((/* implicit */int) var_8);
                    }
                    for (unsigned long long int i_42 = 2; i_42 < 22; i_42 += 2) /* same iter space */
                    {
                        var_75 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                        var_76 = ((/* implicit */unsigned char) (+((+(var_10)))));
                    }
                    for (unsigned long long int i_43 = 2; i_43 < 22; i_43 += 2) /* same iter space */
                    {
                        var_77 = var_7;
                        var_78 = ((/* implicit */_Bool) var_5);
                    }
                    var_79 = ((/* implicit */int) (!(var_4)));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_44 = 0; i_44 < 23; i_44 += 1) 
            {
                var_80 = (+(((/* implicit */int) var_11)));
                var_81 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        }
    }
    for (unsigned short i_45 = 3; i_45 < 9; i_45 += 2) 
    {
        var_82 = ((/* implicit */int) var_4);
        /* LoopSeq 3 */
        for (long long int i_46 = 2; i_46 < 10; i_46 += 3) 
        {
            var_83 = ((/* implicit */unsigned long long int) var_7);
            arr_148 [i_45] [9ULL] [i_45] = ((/* implicit */_Bool) var_3);
            arr_149 [i_45] [i_46] [i_45] = ((/* implicit */long long int) var_4);
            arr_150 [i_45] [i_45] = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
            var_84 = ((/* implicit */int) var_4);
        }
        for (signed char i_47 = 0; i_47 < 13; i_47 += 3) /* same iter space */
        {
            arr_155 [i_47] [i_45] [i_45 + 2] = ((/* implicit */unsigned char) var_4);
            var_85 |= ((/* implicit */long long int) var_8);
            /* LoopNest 2 */
            for (signed char i_48 = 0; i_48 < 13; i_48 += 3) 
            {
                for (unsigned char i_49 = 0; i_49 < 13; i_49 += 2) 
                {
                    {
                        var_86 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                        arr_161 [i_45] [i_47] [i_48] [3ULL] [i_49] = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_50 = 0; i_50 < 13; i_50 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_51 = 1; i_51 < 12; i_51 += 4) 
                {
                    for (unsigned long long int i_52 = 0; i_52 < 13; i_52 += 1) 
                    {
                        {
                            var_87 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                            arr_169 [i_45] [i_45] [i_45] [i_51 - 1] [i_52] = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                var_88 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            }
        }
        for (signed char i_53 = 0; i_53 < 13; i_53 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_54 = 0; i_54 < 13; i_54 += 4) 
            {
                var_89 = ((/* implicit */signed char) var_4);
                var_90 = ((/* implicit */unsigned long long int) var_11);
                var_91 = ((/* implicit */_Bool) var_0);
                /* LoopSeq 1 */
                for (_Bool i_55 = 0; i_55 < 1; i_55 += 1) 
                {
                    arr_179 [3U] [i_45] [3U] [i_54] [i_54] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                    var_92 |= ((/* implicit */_Bool) var_0);
                }
                /* LoopSeq 4 */
                for (unsigned int i_56 = 0; i_56 < 13; i_56 += 4) /* same iter space */
                {
                    arr_183 [i_56] [i_45] [i_45] [i_45 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    var_93 = ((/* implicit */unsigned long long int) var_3);
                    var_94 = ((/* implicit */short) (-((+(((/* implicit */int) var_2))))));
                }
                for (unsigned int i_57 = 0; i_57 < 13; i_57 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_58 = 0; i_58 < 13; i_58 += 4) /* same iter space */
                    {
                        arr_192 [i_45] [i_53] [i_54] [i_57] = ((/* implicit */unsigned short) var_6);
                        var_95 = ((/* implicit */_Bool) var_11);
                    }
                    for (unsigned long long int i_59 = 0; i_59 < 13; i_59 += 4) /* same iter space */
                    {
                        var_96 = ((/* implicit */unsigned long long int) var_5);
                        var_97 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        var_98 &= ((/* implicit */_Bool) var_0);
                    }
                    for (unsigned char i_60 = 1; i_60 < 11; i_60 += 2) 
                    {
                        arr_199 [i_45 + 2] [i_45 + 2] [i_45] [i_45] [i_45 - 2] [i_45] [i_45] = ((/* implicit */unsigned int) var_6);
                        var_99 = var_4;
                        arr_200 [i_45] = ((/* implicit */int) var_1);
                        arr_201 [i_45] [i_45] [i_45] [i_45] [i_60] [i_45] [i_60] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)8))));
                    }
                    arr_202 [i_45] [i_54] [i_57] = ((/* implicit */unsigned int) var_3);
                    arr_203 [i_45] = ((/* implicit */long long int) var_6);
                }
                for (unsigned long long int i_61 = 0; i_61 < 13; i_61 += 4) 
                {
                    arr_206 [i_45] [i_45] [i_53] = ((/* implicit */unsigned long long int) var_3);
                    var_100 = ((/* implicit */short) var_7);
                    var_101 &= ((/* implicit */unsigned char) var_3);
                }
                for (unsigned char i_62 = 0; i_62 < 13; i_62 += 2) 
                {
                    var_102 = (+((-(var_0))));
                    var_103 -= ((/* implicit */unsigned int) var_2);
                }
            }
            for (long long int i_63 = 0; i_63 < 13; i_63 += 4) 
            {
                var_104 = ((/* implicit */unsigned char) var_7);
                var_105 = ((/* implicit */unsigned short) var_0);
            }
            for (unsigned int i_64 = 0; i_64 < 13; i_64 += 1) 
            {
                arr_215 [i_45] [i_45] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                var_106 = ((/* implicit */unsigned short) var_2);
                /* LoopSeq 2 */
                for (unsigned short i_65 = 0; i_65 < 13; i_65 += 4) /* same iter space */
                {
                    var_107 &= ((/* implicit */short) var_6);
                    var_108 = (-(var_9));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_66 = 0; i_66 < 13; i_66 += 1) 
                    {
                        var_109 = ((/* implicit */unsigned int) max((var_109), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        var_110 = var_11;
                        var_111 = ((/* implicit */unsigned char) (-((+(var_1)))));
                        var_112 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)56972))));
                        var_113 = ((/* implicit */short) var_9);
                    }
                }
                for (unsigned short i_67 = 0; i_67 < 13; i_67 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_68 = 1; i_68 < 12; i_68 += 4) 
                    {
                        var_114 = var_3;
                        arr_226 [i_45] [i_45] = ((/* implicit */long long int) var_6);
                        var_115 = ((/* implicit */_Bool) var_10);
                        var_116 = var_11;
                    }
                    for (unsigned short i_69 = 0; i_69 < 13; i_69 += 3) 
                    {
                        var_117 = ((/* implicit */unsigned char) var_4);
                        var_118 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                        arr_231 [i_45] [i_45] [i_53] [i_45] [i_64] [i_67] [i_69] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        var_119 -= ((/* implicit */unsigned int) var_10);
                        var_120 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                    }
                    for (unsigned int i_70 = 0; i_70 < 13; i_70 += 4) 
                    {
                        arr_235 [i_45] [i_67] [i_45] [i_45] = ((/* implicit */_Bool) var_1);
                        var_121 = ((/* implicit */unsigned int) var_4);
                    }
                    var_122 = ((/* implicit */unsigned int) var_3);
                    arr_236 [i_45] [i_45] = (~((~(var_5))));
                    /* LoopSeq 2 */
                    for (unsigned short i_71 = 3; i_71 < 12; i_71 += 4) 
                    {
                        var_123 = ((/* implicit */unsigned short) var_0);
                        var_124 = var_8;
                        var_125 = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (_Bool i_72 = 0; i_72 < 1; i_72 += 1) 
                    {
                        arr_242 [i_45] [i_45] [2U] [i_64] [9LL] [9ULL] = ((/* implicit */unsigned int) var_10);
                        var_126 = ((/* implicit */unsigned long long int) var_11);
                        arr_243 [i_45] [i_45] = ((/* implicit */unsigned short) var_1);
                        arr_244 [i_45] [i_53] [i_53] [i_45] [i_45] = ((/* implicit */long long int) var_4);
                    }
                    var_127 -= ((/* implicit */signed char) var_10);
                }
            }
            var_128 += ((/* implicit */unsigned char) var_9);
            arr_245 [i_45 + 1] [i_53] [i_45] = ((/* implicit */unsigned char) var_9);
            var_129 = ((/* implicit */_Bool) var_2);
            arr_246 [i_45] [i_53] [i_45] = ((/* implicit */unsigned short) var_5);
        }
        var_130 = ((/* implicit */unsigned char) var_0);
    }
    /* LoopSeq 1 */
    for (signed char i_73 = 2; i_73 < 21; i_73 += 1) 
    {
        var_131 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
        var_132 = ((/* implicit */unsigned long long int) var_11);
        var_133 = ((/* implicit */unsigned int) var_6);
    }
}
