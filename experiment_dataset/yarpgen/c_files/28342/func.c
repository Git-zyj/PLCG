/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28342
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_2 [i_3 - 2] [i_3 + 1]);
                            arr_13 [i_0] [i_0] |= ((/* implicit */signed char) 0U);
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 6120597338506042230LL)) || (((/* implicit */_Bool) arr_10 [15LL] [i_1] [i_1] [i_3] [i_4]))))))))));
                            var_17 = ((/* implicit */unsigned char) (-(arr_11 [i_2] [(unsigned short)12] [15] [i_3] [i_3 + 2] [i_3] [i_2])));
                            arr_14 [15] [11LL] [i_2] [i_2] [i_1] [11LL] = ((/* implicit */signed char) ((long long int) arr_4 [i_0]));
                        }
                    } 
                } 
                var_18 -= (~(((/* implicit */int) arr_7 [i_0] [(unsigned short)16] [i_2])));
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))));
                arr_15 [i_2] [(signed char)2] [(signed char)9] [i_2] = ((/* implicit */long long int) (~(var_6)));
                var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) var_4)) > (arr_6 [i_2])));
            }
            var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_1] [i_0])))) * (((/* implicit */int) min((arr_1 [(signed char)10] [(signed char)10]), (((/* implicit */unsigned short) (short)15242)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                arr_18 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1] [20] [i_5])) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))))));
                var_22 = ((/* implicit */signed char) ((unsigned int) var_13));
                var_23 = ((/* implicit */signed char) ((arr_7 [6] [i_0] [i_5 - 1]) || (((/* implicit */_Bool) var_11))));
            }
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                var_24 = ((/* implicit */int) var_11);
                var_25 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)16380));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))))))));
                var_27 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_6 [i_7])));
                arr_23 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                arr_26 [(short)13] [i_8] [i_1] [i_8] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((signed char) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))), (min((((/* implicit */unsigned int) var_0)), (arr_12 [i_0] [i_8] [i_8] [(unsigned short)7] [(unsigned short)7] [i_8]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_8])) <= (((/* implicit */int) (unsigned short)49152))))))));
                var_28 = ((/* implicit */_Bool) var_13);
            }
        }
        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
            {
                var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? ((~(((/* implicit */int) arr_17 [i_10] [18LL] [i_0] [0])))) : ((-(((/* implicit */int) (short)28267))))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 2041983780)) <= (144114638320041984LL)));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_10 + 2] [i_10] [i_11] [i_10 + 2] [i_10] [i_9]));
                            var_32 = ((/* implicit */unsigned short) arr_20 [i_12]);
                            var_33 = ((/* implicit */unsigned short) var_14);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (signed char)22))));
                    arr_44 [i_0] [i_10] [i_0] [i_9] [i_10] [i_0] = ((/* implicit */signed char) (~(3423323816U)));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned short)372))));
                }
                for (long long int i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    arr_47 [i_10] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */unsigned short) (unsigned char)146);
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
                    {
                        var_36 *= ((/* implicit */unsigned long long int) (signed char)-23);
                        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_14 + 1] [i_10] [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 2]))));
                        var_38 += ((/* implicit */long long int) ((-1755568652) - (((/* implicit */int) (unsigned short)18915))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                    {
                        arr_54 [i_10] = ((unsigned short) (!(((/* implicit */_Bool) var_4))));
                        var_39 ^= ((/* implicit */unsigned int) (unsigned char)206);
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_17 + 1] [i_10] [i_10 - 1]))));
                        var_42 = arr_36 [i_0] [i_0];
                    }
                    var_43 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (369045864U))));
                }
                for (signed char i_18 = 2; i_18 < 18; i_18 += 2) 
                {
                    arr_59 [i_0] [i_10] = ((/* implicit */unsigned int) (unsigned char)0);
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_55 [i_0] [14LL] [i_9] [14LL] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)7] [i_9] [2LL] [2LL]))) * (4294967274U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_60 [i_0] [i_10] [20U] [21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18915)) ? (-22LL) : (9033163180527928818LL)));
                    var_45 += ((/* implicit */unsigned int) (short)19684);
                }
                arr_61 [17] [8] [17ULL] [i_10] = ((/* implicit */short) var_11);
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                var_46 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)66))));
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    arr_67 [(unsigned char)9] [i_9] [6LL] [(signed char)3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_20] [15U] [i_9])) ? (arr_21 [1U] [1U] [i_0]) : (arr_21 [2ULL] [i_9] [i_19])));
                    var_47 = ((((/* implicit */int) (unsigned short)49154)) | (0));
                    arr_68 [i_20] [(unsigned char)11] [i_9] [i_9] [(unsigned char)11] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_53 [i_0] [i_9] [i_19] [i_20] [i_19]))));
                    arr_69 [4LL] [21U] = ((/* implicit */short) ((((/* implicit */_Bool) (~(0)))) ? (arr_63 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_52 [i_0]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 1; i_21 < 20; i_21 += 1) 
                {
                    arr_72 [10LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (arr_19 [i_0] [i_0] [i_0])));
                    arr_73 [i_21] [i_0] [i_0] = ((/* implicit */int) arr_49 [i_21] [i_21 + 1] [(unsigned short)12] [i_21] [(signed char)11] [i_9] [i_9]);
                    arr_74 [(short)16] [(short)16] [i_19] [(short)16] = ((/* implicit */unsigned char) (unsigned short)7923);
                }
                var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (short)-19685))));
            }
            for (int i_22 = 0; i_22 < 22; i_22 += 2) 
            {
                arr_78 [i_0] [i_22] = ((/* implicit */unsigned char) (unsigned short)49152);
                var_49 = ((/* implicit */unsigned short) ((unsigned char) min(((short)19684), (((/* implicit */short) max((arr_8 [i_9] [(signed char)12] [(signed char)12]), ((unsigned char)241)))))));
            }
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                for (int i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_25 = 0; i_25 < 22; i_25 += 3) 
                        {
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -8639077005736066905LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */int) (unsigned short)7936)) : (((/* implicit */int) (unsigned short)7950))))) : (var_4))))));
                            var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8LL)))))));
                            var_52 *= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((_Bool) arr_16 [i_0] [i_9] [i_0]))), (-9033163180527928819LL))), ((-(min((-9033163180527928792LL), (9033163180527928774LL)))))));
                            arr_86 [i_24] [12U] [i_23] [(unsigned char)0] [i_24] [15LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (8953860139439328414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))))) << (((((/* implicit */int) (unsigned short)9625)) - (9606)))));
                        }
                        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) 
                        {
                            var_53 = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (unsigned short)9625)))));
                            var_54 = ((/* implicit */signed char) 15739287439403137549ULL);
                        }
                        var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) (unsigned short)0))));
                        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_0] [(_Bool)1] [i_0] [i_0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
                        {
                            var_57 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)57587))))));
                            var_58 = ((/* implicit */unsigned int) max((var_58), (arr_79 [i_24] [(unsigned char)5] [i_0])));
                            var_59 = ((/* implicit */signed char) ((long long int) var_6));
                            var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) arr_37 [i_0] [10] [i_9] [i_9] [i_9]))));
                            var_61 = (~(((int) var_5)));
                        }
                        for (int i_28 = 0; i_28 < 22; i_28 += 4) 
                        {
                            arr_93 [i_24] [(signed char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(256U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 61572651155456ULL)) ? (131072) : (-291248995)))) : (((((/* implicit */_Bool) arr_75 [i_0] [5U] [5U] [i_0])) ? (((9033163180527928791LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [0U] [(unsigned char)9])) ? (((/* implicit */int) (unsigned short)35625)) : (((/* implicit */int) var_14)))))))));
                            var_62 = ((/* implicit */unsigned char) (~(-9033163180527928809LL)));
                            var_63 -= ((/* implicit */short) ((unsigned short) var_4));
                            var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) ((unsigned long long int) 317503233813297254LL)))));
                        }
                        arr_94 [i_0] [i_0] [i_0] [i_24] [i_0] = ((/* implicit */long long int) var_8);
                    }
                } 
            } 
        }
        var_65 = ((/* implicit */int) (+(317503233813297274LL)));
        var_66 = ((/* implicit */int) (+(9033163180527928774LL)));
        /* LoopSeq 1 */
        for (unsigned int i_29 = 0; i_29 < 22; i_29 += 3) 
        {
            var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) arr_90 [i_0] [i_29] [i_0]))));
            var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) min((var_10), (((/* implicit */long long int) 4294967287U)))))));
            /* LoopSeq 4 */
            for (short i_30 = 2; i_30 < 21; i_30 += 4) 
            {
                var_69 = ((/* implicit */unsigned short) min((var_69), (((/* implicit */unsigned short) ((int) arr_57 [i_0] [i_29] [6LL])))));
                var_70 += max(((+(0U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31020))))));
            }
            /* vectorizable */
            for (unsigned int i_31 = 1; i_31 < 20; i_31 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_32 = 1; i_32 < 21; i_32 += 4) 
                {
                    for (unsigned char i_33 = 0; i_33 < 22; i_33 += 3) 
                    {
                        {
                            var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_29] [i_31 - 1] [i_32] [i_33])) ? (arr_40 [i_0] [21LL] [i_31 - 1] [i_32 - 1] [i_33]) : (arr_40 [i_0] [i_29] [3] [i_29] [i_0]))))));
                            arr_109 [(unsigned short)2] [i_29] [i_31] [i_32] [i_29] [i_29] = ((/* implicit */unsigned char) var_14);
                            var_72 *= ((/* implicit */unsigned short) arr_70 [(unsigned char)2] [2U] [2U] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_34 = 0; i_34 < 22; i_34 += 1) 
                {
                    var_73 = (~((+(((/* implicit */int) var_7)))));
                    arr_113 [i_0] [i_29] [11LL] [i_0] = ((/* implicit */unsigned short) var_4);
                }
                var_74 = ((/* implicit */unsigned char) min((var_74), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (10884362551076927658ULL))))));
            }
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                arr_116 [i_0] [i_29] [i_0] = min((317503233813297254LL), (((/* implicit */long long int) ((int) (~(((/* implicit */int) var_7)))))));
                var_75 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) -7694911548052446973LL)))));
                /* LoopSeq 2 */
                for (long long int i_36 = 0; i_36 < 22; i_36 += 3) 
                {
                    arr_119 [8] [i_29] [i_35] [i_35] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) arr_108 [i_36] [i_0] [i_29] [(unsigned short)19] [i_0]))), (arr_19 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10])));
                    var_76 = ((/* implicit */long long int) max((((arr_88 [19LL] [19LL] [19LL] [20]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_29] [i_29]))))), (((((/* implicit */_Bool) var_2)) ? (arr_88 [i_0] [(unsigned char)11] [(unsigned char)11] [i_36]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_29] [i_29])))))));
                    arr_120 [i_29] [i_29] [i_29] [i_29] [i_29] [(signed char)16] = ((/* implicit */unsigned long long int) max(((-(arr_25 [12] [(signed char)5] [(unsigned char)6] [12U]))), (((/* implicit */unsigned int) (unsigned short)16383))));
                }
                /* vectorizable */
                for (long long int i_37 = 2; i_37 < 19; i_37 += 1) 
                {
                    var_77 ^= ((/* implicit */unsigned short) (~(3553731005423963868ULL)));
                    var_78 &= (~(var_6));
                }
            }
            for (unsigned long long int i_38 = 0; i_38 < 22; i_38 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_39 = 3; i_39 < 18; i_39 += 1) 
                {
                    arr_129 [3U] [(unsigned short)0] [3U] [i_29] [i_39] [i_38] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0])) ? (-9033163180527928766LL) : (((/* implicit */long long int) var_6)))));
                    var_79 = ((/* implicit */signed char) arr_125 [i_0] [i_29] [i_29] [i_29]);
                }
                for (unsigned short i_40 = 0; i_40 < 22; i_40 += 3) 
                {
                    var_80 = ((/* implicit */unsigned char) min((var_80), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_6)), (arr_20 [i_40]))))));
                    arr_132 [i_29] [i_29] = ((/* implicit */unsigned long long int) max((((short) (signed char)126)), (((/* implicit */short) (signed char)88))));
                }
                var_81 = ((/* implicit */unsigned char) max((var_81), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 9033163180527928774LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_105 [i_38] [i_29] [0]))) : (1180937810U)))), (((((/* implicit */_Bool) -8721294594698206903LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (317503233813297245LL))))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_41 = 3; i_41 < 20; i_41 += 3) 
            {
                arr_135 [i_29] = ((/* implicit */_Bool) ((long long int) (unsigned char)116));
                /* LoopNest 2 */
                for (signed char i_42 = 2; i_42 < 20; i_42 += 1) 
                {
                    for (unsigned short i_43 = 0; i_43 < 22; i_43 += 4) 
                    {
                        {
                            var_82 = ((/* implicit */long long int) max(((-((+(var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)-38)) ? (6921229978180307087LL) : (((/* implicit */long long int) 2877227501U)))))))));
                            var_83 *= ((/* implicit */unsigned short) ((((3) == (((/* implicit */int) (signed char)-27)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49141)) ? (((/* implicit */int) (unsigned short)65280)) : (2116804577)))), (((317503233813297254LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31025)))))))) : (((((/* implicit */_Bool) -9040571981658426100LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44698)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (0LL)))) : (3013524927189280241ULL)))));
                            var_84 = ((/* implicit */unsigned int) (unsigned char)140);
                        }
                    } 
                } 
            }
        }
    }
    var_85 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_10))) / (((/* implicit */long long int) (+(var_6))))))) ? (((/* implicit */int) (signed char)28)) : (((1887926197) >> (((((/* implicit */int) (signed char)61)) - (47)))))));
    var_86 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)7936)) : ((+((+(((/* implicit */int) (unsigned short)55245))))))));
    var_87 = ((/* implicit */unsigned char) ((unsigned int) min((min((var_10), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_7)))));
    var_88 = ((((/* implicit */long long int) (~(((int) 1938945499U))))) - (((((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)53)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : ((~((-9223372036854775807LL - 1LL)))))));
}
