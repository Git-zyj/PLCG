/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205498
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
    var_16 = ((/* implicit */int) ((unsigned long long int) var_4));
    var_17 -= ((/* implicit */signed char) var_14);
    var_18 |= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (signed char)-17);
            var_20 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]);
        }
        arr_5 [i_0] [i_0] = (signed char)-17;
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_4] [i_4] [i_3] [i_2] [i_2] = (unsigned char)239;
                                arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0]);
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_2] [i_2 + 1] [12LL] = ((/* implicit */long long int) arr_11 [i_3] [(signed char)14] [i_3] [i_3]);
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0] [i_0]));
        arr_21 [i_0] = ((/* implicit */_Bool) (signed char)10);
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) ((unsigned char) (short)32763));
        arr_25 [i_6] = ((/* implicit */long long int) (short)32766);
        var_22 += (_Bool)1;
        arr_26 [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) arr_22 [i_6]))), (16755161059131905998ULL)));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_31 [i_7] = ((/* implicit */long long int) arr_23 [i_7]);
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned short) arr_27 [i_7]);
                            arr_43 [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) (unsigned char)237);
                            var_24 = ((/* implicit */int) arr_22 [i_7]);
                            arr_44 [i_7] [i_8] [(unsigned char)19] [i_10] [i_11] = ((_Bool) (short)-22325);
                        }
                    } 
                } 
            } 
            arr_45 [i_8] [(_Bool)1] = ((/* implicit */_Bool) arr_36 [i_7] [i_8]);
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_33 [i_8] [i_12]);
                        arr_51 [i_13] [i_12] [i_8] [i_7] = ((/* implicit */short) (unsigned char)18);
                        arr_52 [i_13] [i_12] [i_7] [i_7] = ((/* implicit */unsigned short) arr_47 [i_7] [i_8]);
                        arr_53 [i_7] [i_7] [(signed char)20] = ((/* implicit */long long int) (unsigned char)18);
                        var_26 = ((/* implicit */long long int) (unsigned char)13);
                    }
                } 
            } 
            var_27 = arr_30 [i_7];
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 4; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_64 [i_7] [i_7] [i_14] [i_15] [i_16] [(unsigned char)13] [i_17] = ((/* implicit */unsigned int) arr_38 [i_17 - 4]);
                            arr_65 [17] [i_16] [i_15 - 2] [i_14] [i_7] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_62 [i_7] [i_7] [i_7] [i_7] [i_7])));
                            arr_66 [i_7] [i_16] [i_16] [i_16] = ((unsigned short) arr_57 [i_15 - 2] [i_17 + 4]);
                            var_28 = ((/* implicit */signed char) (unsigned char)253);
                        }
                    } 
                } 
                arr_67 [i_15] [i_7] [i_14] [i_7] = (unsigned short)65529;
                var_29 = ((/* implicit */signed char) (short)-749);
                /* LoopNest 2 */
                for (long long int i_18 = 2; i_18 < 18; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) -1LL);
                            var_31 = ((/* implicit */unsigned int) (unsigned char)237);
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */long long int) ((unsigned short) 16755161059131906007ULL));
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 20; i_20 += 2) 
            {
                for (unsigned char i_21 = 3; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) ((long long int) ((short) (short)-32763)));
                        /* LoopSeq 2 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_34 = arr_54 [i_7] [i_14];
                            var_35 += ((/* implicit */short) ((signed char) arr_61 [0LL] [(unsigned short)13] [i_21 + 1]));
                            var_36 = ((/* implicit */unsigned short) ((short) arr_29 [i_20 + 1]));
                        }
                        for (short i_23 = 2; i_23 < 20; i_23 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) ((unsigned char) arr_74 [i_14] [i_20 + 1]));
                            arr_84 [i_21] [i_21] [i_21] = ((/* implicit */long long int) ((int) (unsigned char)213));
                            var_38 = ((/* implicit */long long int) arr_71 [i_14] [12LL] [i_21] [i_21] [i_20]);
                        }
                    }
                } 
            } 
            arr_85 [(_Bool)1] [i_14] &= ((/* implicit */signed char) arr_28 [i_14]);
            var_39 = ((/* implicit */int) ((unsigned long long int) arr_68 [i_7] [i_14] [i_7] [i_7]));
        }
        for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 2) 
        {
            arr_88 [i_7] [19U] [i_7] = ((/* implicit */unsigned char) 8184ULL);
            var_40 = ((/* implicit */unsigned char) (short)-1);
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_25 = 2; i_25 < 10; i_25 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_26 = 0; i_26 < 11; i_26 += 2) 
        {
            for (short i_27 = 0; i_27 < 11; i_27 += 2) 
            {
                for (unsigned short i_28 = 0; i_28 < 11; i_28 += 2) 
                {
                    {
                        arr_102 [i_25 - 1] [(_Bool)0] [i_25] = (unsigned char)0;
                        arr_103 [i_25] [i_26] [i_27] [i_28] = arr_86 [(_Bool)1];
                        var_41 &= ((/* implicit */_Bool) ((long long int) (unsigned char)129));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 1; i_29 < 10; i_29 += 2) 
                        {
                            arr_106 [i_29] [i_29] [i_27] [i_27] [i_26] [i_29] [i_25] = ((/* implicit */_Bool) arr_47 [i_28] [i_26]);
                            arr_107 [(signed char)10] [i_29] [(signed char)10] = ((/* implicit */long long int) (unsigned char)0);
                            var_42 *= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */short) arr_35 [i_29 - 1] [i_27] [i_25 - 1] [i_25 - 1])), ((short)-32763))));
                        }
                    }
                } 
            } 
        } 
        arr_108 [i_25] [i_25] = ((/* implicit */_Bool) -6751890783774663676LL);
        /* LoopSeq 4 */
        for (signed char i_30 = 2; i_30 < 10; i_30 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_31 = 4; i_31 < 9; i_31 += 2) 
            {
                arr_114 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((short) (unsigned char)178));
                arr_115 [i_25 + 1] [i_30 - 1] [i_30] [i_31 - 1] = ((long long int) max((arr_76 [i_25] [0LL] [i_31] [i_31 - 3]), (arr_76 [i_31] [i_31] [i_30] [i_25 - 2])));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_32 = 2; i_32 < 10; i_32 += 2) 
            {
                var_43 |= arr_27 [i_25];
                arr_119 [i_32] [(unsigned short)2] [i_25] [i_25] = ((/* implicit */short) ((_Bool) arr_47 [i_25] [i_25]));
            }
        }
        for (long long int i_33 = 0; i_33 < 11; i_33 += 2) 
        {
            arr_122 [i_25] = ((/* implicit */unsigned short) ((signed char) max((arr_58 [i_25 - 1]), (((/* implicit */long long int) (short)-22325)))));
            /* LoopSeq 1 */
            for (int i_34 = 0; i_34 < 11; i_34 += 2) 
            {
                arr_125 [i_33] [i_25] = ((/* implicit */short) ((_Bool) 13291013982751301023ULL));
                var_44 = ((/* implicit */unsigned long long int) (signed char)10);
            }
            /* LoopNest 2 */
            for (short i_35 = 3; i_35 < 7; i_35 += 2) 
            {
                for (short i_36 = 0; i_36 < 11; i_36 += 2) 
                {
                    {
                        arr_131 [i_36] [i_36] [i_35] [(unsigned short)3] [i_25 + 1] [i_25] = ((/* implicit */unsigned short) (unsigned char)223);
                        arr_132 [i_25] [i_33] = ((long long int) ((signed char) arr_86 [i_25 - 2]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_37 = 0; i_37 < 11; i_37 += 2) 
        {
            arr_135 [i_25] = ((/* implicit */short) (unsigned char)157);
            arr_136 [i_25] [i_25] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) (signed char)83)), (18446744073709551615ULL))));
        }
        for (unsigned long long int i_38 = 1; i_38 < 8; i_38 += 2) 
        {
            var_45 = ((/* implicit */unsigned short) 4294967279U);
            var_46 += min(((unsigned char)19), (((/* implicit */unsigned char) (signed char)(-127 - 1))));
        }
        arr_141 [i_25 + 1] [i_25] = ((/* implicit */_Bool) -1);
    }
    /* vectorizable */
    for (signed char i_39 = 1; i_39 < 10; i_39 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_40 = 0; i_40 < 12; i_40 += 2) 
        {
            for (unsigned short i_41 = 1; i_41 < 8; i_41 += 2) 
            {
                for (unsigned char i_42 = 3; i_42 < 8; i_42 += 2) 
                {
                    {
                        var_47 = ((/* implicit */long long int) ((unsigned char) arr_150 [i_39 + 2] [i_41 - 1]));
                        arr_154 [i_42] [i_41] [i_39] [i_40] [i_39] = ((/* implicit */unsigned long long int) ((unsigned int) arr_71 [i_39] [i_39 - 1] [i_41] [i_42] [i_42]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_43 = 2; i_43 < 11; i_43 += 2) 
        {
            for (unsigned int i_44 = 0; i_44 < 12; i_44 += 2) 
            {
                for (_Bool i_45 = 0; i_45 < 0; i_45 += 1) 
                {
                    {
                        arr_163 [i_39] [i_39 + 2] [i_39] = ((/* implicit */signed char) ((long long int) arr_3 [i_43] [i_44] [i_43]));
                        /* LoopSeq 2 */
                        for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */signed char) ((unsigned char) (unsigned char)80));
                            arr_166 [i_46] [i_39] [i_43] [i_44] [i_43 - 1] [i_43] [i_39] = ((/* implicit */long long int) ((unsigned long long int) arr_56 [i_45 + 1] [i_45] [i_45 + 1]));
                        }
                        for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) /* same iter space */
                        {
                            arr_170 [i_39] [i_39] [i_39] [i_39] [i_39] [i_39] = ((/* implicit */unsigned char) ((signed char) arr_148 [i_45 + 1] [i_43] [i_44]));
                            arr_171 [i_45] = ((/* implicit */short) arr_11 [i_45 + 1] [i_43 - 1] [i_39 + 2] [i_39 + 2]);
                            arr_172 [i_39] [i_39] [i_39] [i_39 - 1] [0ULL] [i_39] [(signed char)10] = ((/* implicit */short) ((unsigned long long int) (signed char)-50));
                            arr_173 [i_47] [i_45 + 1] [i_43] [i_39 + 1] |= ((unsigned short) arr_82 [(unsigned char)19] [i_43 - 2] [i_44] [i_45 + 1] [i_47] [i_47]);
                            arr_174 [i_39] [i_43] [i_44] &= (unsigned char)186;
                        }
                        arr_175 [i_39] [i_44] = ((/* implicit */unsigned char) ((unsigned long long int) ((short) (unsigned char)127)));
                    }
                } 
            } 
        } 
        var_49 = ((/* implicit */_Bool) -8945453471385501788LL);
        /* LoopNest 2 */
        for (short i_48 = 0; i_48 < 12; i_48 += 2) 
        {
            for (unsigned char i_49 = 2; i_49 < 9; i_49 += 2) 
            {
                {
                    arr_180 [(_Bool)1] [i_39] = ((/* implicit */_Bool) arr_57 [i_39] [i_48]);
                    var_50 = (_Bool)1;
                    arr_181 [i_49] [i_39] [i_48] [i_39] = ((/* implicit */long long int) (signed char)115);
                    var_51 = ((/* implicit */unsigned char) arr_177 [i_49 + 2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_50 = 0; i_50 < 1; i_50 += 1) 
        {
            for (unsigned char i_51 = 0; i_51 < 12; i_51 += 2) 
            {
                {
                    arr_188 [i_39 + 1] [i_39 + 1] = ((/* implicit */long long int) arr_148 [i_39] [i_39 - 1] [i_39]);
                    arr_189 [i_51] [i_51] [i_51] [i_51] = ((/* implicit */unsigned char) ((_Bool) arr_79 [i_39] [i_51] [i_50] [i_51]));
                    arr_190 [i_39 + 1] [i_39 + 1] [i_51] = ((/* implicit */long long int) ((unsigned short) ((short) arr_80 [i_39] [2LL] [i_39] [(signed char)6] [1LL])));
                    /* LoopNest 2 */
                    for (signed char i_52 = 1; i_52 < 9; i_52 += 2) 
                    {
                        for (signed char i_53 = 3; i_53 < 9; i_53 += 2) 
                        {
                            {
                                var_52 = ((/* implicit */long long int) ((signed char) arr_157 [i_52 + 2] [i_53 + 1] [i_39 - 1]));
                                var_53 += ((/* implicit */_Bool) ((int) arr_69 [i_53 - 1] [i_53 + 3] [i_52 + 1] [i_52 + 3] [i_50] [i_39 + 1]));
                                var_54 += ((/* implicit */unsigned char) arr_12 [i_39 + 2] [i_50] [i_51]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
