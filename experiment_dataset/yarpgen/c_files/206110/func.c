/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206110
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            var_11 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)127))));
            var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (unsigned char)0)), (15062894203890816403ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_13 += ((/* implicit */unsigned char) arr_6 [(unsigned char)6] [i_2] [i_2]);
                var_14 = ((/* implicit */_Bool) var_6);
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)121))))), (arr_3 [i_1 - 2] [i_2]))))));
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) var_6);
                            var_16 = ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4092479857238023233LL));
                            arr_17 [i_0] [i_1] [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)215)), (11430234730440604498ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    var_17 = min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_1)))) ? (max((var_5), (((/* implicit */long long int) (unsigned char)18)))) : (((/* implicit */long long int) 709517358U)))), (((/* implicit */long long int) min(((unsigned char)129), (arr_4 [i_0] [i_0])))));
                    arr_21 [7LL] [i_1] [i_2] [i_5] = ((/* implicit */long long int) min((arr_1 [i_1 - 3]), (((/* implicit */unsigned char) (!(var_10))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned int) var_9);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0])))))) > (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)3)), (var_7)))) ? (1023LL) : (var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_29 [i_0] [i_0] [i_2] [i_1] [0LL] = ((/* implicit */unsigned char) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) var_10))))));
                        var_20 ^= ((/* implicit */long long int) (unsigned char)215);
                    }
                    for (unsigned char i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        arr_32 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_0);
                        arr_33 [(_Bool)1] [i_2] [(_Bool)1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_1 - 2] [(_Bool)1] [i_1 - 2] [(unsigned char)16] [i_1])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18)))))));
                        arr_34 [i_0] [(_Bool)1] [i_1] [i_1] [i_6] [i_8 + 4] = ((/* implicit */long long int) var_6);
                        var_21 += ((/* implicit */long long int) (_Bool)1);
                        var_22 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (917397777006849976LL));
                    }
                }
            }
        }
        arr_35 [i_0] [i_0] = ((/* implicit */long long int) min((min((3383849869818735212ULL), (min((((/* implicit */unsigned long long int) (unsigned char)121)), (var_7))))), (((/* implicit */unsigned long long int) var_2))));
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            arr_39 [i_0] [i_0] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)12)))), (var_6)));
            arr_40 [i_9] [i_9] [i_9] = ((/* implicit */long long int) max((max((max((var_7), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_9])))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_9] [16ULL] [i_9]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 2; i_12 < 13; i_12 += 4) 
                    {
                        var_23 ^= ((/* implicit */long long int) ((arr_31 [i_12 + 2] [i_9] [i_10 - 1] [(_Bool)1] [4LL]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_31 [i_12 + 1] [i_11] [i_10 - 1] [i_11] [i_12 + 1]))));
                        var_24 = (!(((/* implicit */_Bool) var_1)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(3669855877748669909ULL))))));
                        arr_51 [i_0] [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) var_9);
                        arr_52 [i_9] [(unsigned char)9] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_4);
                        var_26 = var_7;
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) var_0);
                        var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_53 [12U] [i_9] [(unsigned char)7] [i_10 - 1] [1U] [i_0]))));
                        arr_57 [i_9] [i_11] [i_9] = ((var_4) % (((/* implicit */long long int) var_6)));
                        arr_58 [i_0] [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned int) var_10);
                    }
                    arr_59 [i_9] = ((/* implicit */unsigned char) var_0);
                    arr_60 [i_0] [i_0] [0LL] [i_10] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_10] [i_10 - 1] [i_10 - 1] [i_9]))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) var_6);
                        arr_65 [i_9] [i_9] [(_Bool)1] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)237)) ? ((-(1421043145007878731LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                for (long long int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                {
                    var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : ((((_Bool)1) ? (arr_36 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        arr_71 [i_0] [i_9] [10U] [(unsigned char)8] [i_0] = ((/* implicit */long long int) (unsigned char)230);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((var_1) + (822288927804986206LL)))));
                        var_32 = (unsigned char)18;
                        arr_72 [i_0] [i_9] [i_0] [i_16] [i_17] [i_9] = ((((/* implicit */_Bool) arr_63 [i_10 - 1] [i_9] [i_10 - 1])) ? (var_1) : (arr_67 [i_10 - 1] [i_9] [i_10] [i_9]));
                    }
                    var_33 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_45 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_34 = ((/* implicit */long long int) var_6);
                }
                arr_73 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) var_2);
            }
        }
        for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_36 = ((/* implicit */_Bool) min((var_36), ((!(((/* implicit */_Bool) (~(min((var_1), (arr_10 [i_0] [1LL]))))))))));
                arr_80 [i_18 + 1] [i_19] = ((/* implicit */unsigned char) (_Bool)1);
            }
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    arr_86 [12U] [i_18] [i_18] [i_21] = ((/* implicit */long long int) arr_25 [i_18 + 1]);
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (-(3472259871185347186LL))))));
                    arr_87 [i_0] [i_0] [6LL] [(unsigned char)16] [i_20] [i_21 - 1] = var_2;
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), ((~(var_5)))));
                        var_39 = ((/* implicit */_Bool) (-(var_0)));
                        arr_92 [i_0] [i_0] = ((/* implicit */_Bool) (+(var_6)));
                        arr_93 [2U] [(_Bool)1] [(_Bool)1] [i_21 - 1] [i_22] = ((/* implicit */long long int) arr_91 [i_22 + 1] [i_21] [i_20] [i_18] [(unsigned char)13]);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
                    {
                        var_41 = (!(((/* implicit */_Bool) var_3)));
                        var_42 = ((/* implicit */long long int) ((var_10) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    }
                }
                var_43 = ((/* implicit */_Bool) 1033254193U);
            }
            var_44 = ((/* implicit */unsigned int) var_1);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_24 = 1; i_24 < 13; i_24 += 3) 
        {
            var_45 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_24 - 1] [i_24] [i_24 + 4] [i_0]))));
            arr_99 [7U] [i_24] [i_24 - 1] = ((/* implicit */unsigned char) ((var_9) ? (arr_23 [i_24] [i_24] [i_24] [i_24 + 3] [i_24]) : (((/* implicit */long long int) var_0))));
            arr_100 [i_24] = ((/* implicit */long long int) 3669855877748669909ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_26 = 0; i_26 < 17; i_26 += 3) 
            {
                for (long long int i_27 = 0; i_27 < 17; i_27 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_28 = 0; i_28 < 17; i_28 += 2) 
                        {
                            var_46 ^= ((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))));
                            var_47 |= ((/* implicit */unsigned long long int) arr_53 [0U] [15LL] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned char i_29 = 0; i_29 < 17; i_29 += 1) 
                        {
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_25] [(unsigned char)9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)126))));
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) var_3))));
                            var_50 = ((/* implicit */unsigned long long int) (unsigned char)61);
                            var_51 = (unsigned char)250;
                            var_52 = ((/* implicit */unsigned char) max((var_52), (var_3)));
                        }
                        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 3) 
                        {
                            arr_119 [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_27] [i_30])))));
                            arr_120 [(unsigned char)16] [i_25] [i_25] [(_Bool)1] [i_26] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_0] [i_0] [i_26] [i_0]))));
                            arr_121 [(unsigned char)6] [i_26] [i_30] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 3) 
                        {
                            arr_125 [i_0] [i_25] [i_26] [i_27] [i_31] = ((/* implicit */unsigned int) 9223372036854775807LL);
                            var_53 ^= ((/* implicit */unsigned char) var_10);
                        }
                        arr_126 [i_26] [i_26] [7ULL] [i_27] = arr_112 [i_0] [i_26] [i_26] [i_27] [i_26];
                    }
                } 
            } 
            var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) (!(var_9))))));
        }
        /* vectorizable */
        for (unsigned long long int i_32 = 0; i_32 < 17; i_32 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_33 = 0; i_33 < 17; i_33 += 4) 
            {
                var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) arr_0 [i_32]))));
                arr_132 [i_33] [i_33] [i_33] [i_33] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
            var_56 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (arr_115 [i_0] [i_0] [i_32]));
        }
        for (unsigned long long int i_34 = 0; i_34 < 17; i_34 += 4) /* same iter space */
        {
            arr_135 [i_0] [i_0] [12LL] = ((/* implicit */unsigned char) var_4);
            /* LoopSeq 3 */
            for (long long int i_35 = 2; i_35 < 13; i_35 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_36 = 3; i_36 < 16; i_36 += 4) 
                {
                    arr_142 [(_Bool)1] [i_34] [i_34] [(_Bool)1] [i_34] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    arr_143 [i_0] [i_34] [i_34] [i_36] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3406902849740886685LL))));
                    var_57 = ((/* implicit */unsigned char) ((min((var_10), (var_9))) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0])) : (((arr_94 [i_35] [i_36] [i_36] [i_36 + 1] [i_36 + 1] [i_36]) ? (((/* implicit */unsigned long long int) arr_20 [i_34] [i_35] [i_34] [i_36 + 1])) : (var_7)))));
                }
                for (unsigned long long int i_37 = 0; i_37 < 17; i_37 += 4) /* same iter space */
                {
                    arr_147 [i_0] [i_0] [13LL] [i_0] [13LL] = ((/* implicit */_Bool) max((min((arr_130 [(unsigned char)0] [i_37]), (arr_130 [i_34] [i_37]))), (min((arr_130 [i_0] [i_37]), (((/* implicit */long long int) var_0))))));
                    arr_148 [i_0] [i_34] [i_35] [i_35] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))) ? (max((3669855877748669909ULL), (((/* implicit */unsigned long long int) 3305049372U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    arr_149 [i_0] [i_34] [i_35] [i_37] = ((/* implicit */_Bool) arr_122 [i_0] [i_0] [i_0] [i_0] [i_37]);
                }
                for (unsigned long long int i_38 = 0; i_38 < 17; i_38 += 4) /* same iter space */
                {
                    var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) var_6))));
                    var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) arr_94 [i_0] [(_Bool)1] [(unsigned char)15] [2LL] [i_35] [11U])), (var_7))) : (3669855877748669885ULL)))) ? (var_4) : (max((((/* implicit */long long int) var_0)), (var_5))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_39 = 0; i_39 < 17; i_39 += 3) 
                {
                    for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                    {
                        {
                            arr_159 [8LL] [3LL] [i_35] [i_39] [i_39] [i_40] = ((/* implicit */long long int) 18092575886946851227ULL);
                            var_61 = ((/* implicit */long long int) var_9);
                            arr_160 [i_40] [i_40] [i_39] [i_35] [i_39] [i_34] [i_0] = ((/* implicit */unsigned int) var_4);
                            var_62 = ((/* implicit */unsigned int) min(((+(min((var_7), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [i_39]))));
                        }
                    } 
                } 
                var_63 |= var_6;
            }
            /* vectorizable */
            for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_42 = 1; i_42 < 16; i_42 += 1) 
                {
                    for (long long int i_43 = 0; i_43 < 17; i_43 += 1) 
                    {
                        {
                            var_64 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1033254201U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (arr_54 [i_42 + 1] [i_34] [i_42 + 1] [i_42 + 1]) : (((/* implicit */unsigned long long int) (-(-5996655967641932327LL))))));
                            var_65 ^= ((/* implicit */long long int) var_6);
                            var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                arr_167 [i_0] [i_34] [i_41] = ((/* implicit */unsigned int) arr_104 [7LL] [i_34] [i_34]);
                arr_168 [i_0] [i_34] [(unsigned char)13] = ((/* implicit */unsigned char) -1LL);
            }
            /* vectorizable */
            for (unsigned char i_44 = 2; i_44 < 14; i_44 += 2) 
            {
                var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) var_10))));
                arr_173 [i_0] [i_34] [i_44] = ((/* implicit */_Bool) 3407879614265229731ULL);
                arr_174 [i_44 + 1] [i_34] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
                var_68 = ((/* implicit */unsigned long long int) min((var_68), (var_7)));
            }
        }
        arr_175 [1U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_137 [i_0] [16U] [1LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (2245658614U)));
    }
    for (long long int i_45 = 0; i_45 < 17; i_45 += 4) /* same iter space */
    {
        var_69 = ((/* implicit */long long int) 3261713102U);
        var_70 ^= ((/* implicit */unsigned int) var_9);
    }
    var_71 = ((/* implicit */unsigned char) 854009515U);
}
