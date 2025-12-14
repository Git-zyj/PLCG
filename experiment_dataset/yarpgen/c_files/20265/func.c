/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20265
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */int) (-(var_5)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_18 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
            var_19 *= ((/* implicit */short) (~(((/* implicit */int) var_1))));
        }
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) != (((var_12) - (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))))));
                        arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */unsigned long long int) -5)) * (18446744073709551600ULL))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_7 [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((arr_7 [i_5]), (-21))))));
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_26 [i_5] [3] [i_5] [i_7] [12ULL] = ((/* implicit */_Bool) var_12);
                                var_24 = (((+(arr_0 [i_8]))) + (((/* implicit */int) var_1)));
                                arr_27 [i_7] [i_9] [i_8] [i_7] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6 + 1] [i_6 + 2] [i_7]))) : (arr_4 [i_6] [i_6 + 2] [i_6 - 2]))))));
                        var_26 = ((/* implicit */int) var_9);
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_20 [i_6 + 1] [i_6] [i_6 + 3] [i_6 - 2]))));
                        var_28 += ((/* implicit */_Bool) arr_8 [21LL] [i_6] [i_6 - 1]);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                    {
                        arr_32 [i_5] [i_6] [i_11] [i_7] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) * (arr_25 [i_5] [18])))) ? (((/* implicit */int) arr_20 [i_6] [i_6 + 2] [i_6] [i_6 + 1])) : (((/* implicit */int) (unsigned char)0))));
                        var_29 = (~(1610612736U));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(var_5))))));
            arr_37 [17U] [i_5] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
            arr_38 [i_5] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_5] [i_5] [(short)12] [i_12])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        }
        var_31 += ((/* implicit */short) arr_6 [i_5]);
        var_32 &= ((/* implicit */short) -735385151);
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 4) 
        {
            var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) 9)) && (((/* implicit */_Bool) (short)32764))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_14] [i_13])) && (((/* implicit */_Bool) var_5))))) : (((arr_29 [i_13] [i_13] [i_13] [i_13]) - (((/* implicit */int) var_3))))));
        }
        for (int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_41 [i_15] [i_13])) : (((/* implicit */int) arr_34 [i_13] [i_15 - 2] [i_13]))));
            arr_46 [(_Bool)1] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_15 - 2] [8U] [i_15 + 1] [i_13]))));
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 11; i_16 += 4) 
            {
                arr_49 [i_16] [9] [i_13] [i_13] = arr_10 [i_13] [i_15] [i_13];
                /* LoopNest 2 */
                for (short i_17 = 4; i_17 < 11; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 3; i_18 < 9; i_18 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((arr_41 [i_15] [i_15 - 2]) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (short)(-32767 - 1)))));
                            var_37 = ((/* implicit */unsigned long long int) (short)31832);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_38 = ((/* implicit */unsigned int) 4194129608902515482ULL);
                    arr_59 [i_13] [i_15] [i_15] [i_15] [i_16] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_16 + 1] [i_15 - 1]))));
                    var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_51 [i_15 + 1] [i_15] [i_16 - 1] [(unsigned char)3] [i_16 + 1])) : (((/* implicit */int) arr_51 [i_15 - 1] [i_16 - 1] [i_16 + 1] [i_16] [i_16 + 1]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_20 = 2; i_20 < 11; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_13] [i_15 - 1] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_15] [i_16 + 1] [i_16] [i_16 + 1]))) : (9617530359508607006ULL)));
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_1))));
                    }
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        arr_66 [i_13] [i_19] [i_15] [i_15] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_21] [i_21] [i_21])) ? (arr_29 [i_16 + 1] [i_15] [i_15] [i_15 + 1]) : (arr_29 [i_16 + 1] [i_15 + 1] [i_19] [i_15 + 1])));
                        arr_67 [i_15] [i_21] = ((/* implicit */unsigned int) (+(arr_22 [i_16 + 1])));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        var_42 = ((/* implicit */_Bool) (short)-1);
                        var_43 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_13] [i_13] [i_15 - 2]))));
                        arr_72 [i_13] [(unsigned short)0] [i_13] [i_16] [i_13] [(unsigned short)0] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_71 [i_16 + 1] [i_19])) ^ (((/* implicit */int) arr_55 [i_22] [(unsigned short)5] [(unsigned short)10] [i_13]))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) arr_10 [i_16 + 1] [22] [i_13]))));
                        arr_73 [i_22] [i_22] = ((/* implicit */unsigned int) ((arr_43 [i_19]) / (((((/* implicit */_Bool) arr_71 [i_16] [i_13])) ? (((/* implicit */int) (unsigned short)51031)) : (((/* implicit */int) var_2))))));
                    }
                    for (int i_23 = 3; i_23 < 11; i_23 += 1) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_57 [i_23 - 3] [i_15] [i_15 - 2] [i_16 - 1]))))));
                        var_46 = arr_51 [i_16] [i_16] [i_16 - 1] [i_16] [7U];
                        var_47 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_23 + 1] [i_15 - 1] [1ULL] [i_19] [i_23] [i_19] [i_19])) ? (arr_65 [i_15] [i_15 + 3] [i_15] [i_16 - 1] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4194129608902515482ULL)) ? (1428908011U) : (((/* implicit */unsigned int) arr_36 [i_13] [i_13])))))));
                    }
                }
                for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    arr_79 [i_16] [i_16] [i_15] [i_15] [i_13] = ((/* implicit */signed char) (~(0LL)));
                    arr_80 [i_24] [6ULL] [i_15] [i_13] = ((/* implicit */long long int) (~(arr_64 [i_16 - 1] [i_16 - 1] [i_15 - 1] [i_24] [i_16])));
                    arr_81 [i_13] [i_13] [i_13] [i_16] [3] = (-(((/* implicit */int) arr_2 [i_13] [(short)18] [i_13])));
                }
                for (int i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    arr_84 [6] [i_15] [i_16] [i_25] = ((/* implicit */_Bool) (short)6884);
                    /* LoopSeq 2 */
                    for (short i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
                    {
                        var_48 &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13] [i_16 - 1] [i_16 + 1]))) > (arr_54 [i_15 + 2] [i_15] [i_16 + 1] [i_16 + 1] [i_26] [i_26] [i_15]));
                        arr_88 [i_13] [i_13] [i_16] [i_25] [i_26] [i_15] [i_15 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8829213714200944583ULL)) ? (0LL) : (((/* implicit */long long int) 3250889093U))));
                    }
                    for (short i_27 = 0; i_27 < 12; i_27 += 3) /* same iter space */
                    {
                        var_49 = ((/* implicit */long long int) (-((~(2521364885591769960ULL)))));
                        var_50 = ((/* implicit */unsigned short) var_10);
                        arr_91 [i_13] [i_15] [i_15] [i_13] [(short)10] [i_25] [i_13] = ((/* implicit */_Bool) arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                    }
                    var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_15 - 2] [(unsigned char)7] [(unsigned char)7] [i_15 - 2] [(_Bool)1] [i_15] [i_15])) ? (((/* implicit */long long int) arr_69 [i_15 - 2] [i_15] [i_15] [i_15 - 2] [i_15] [i_15] [i_15])) : (var_12)));
                }
            }
        }
        arr_92 [(short)9] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    }
    for (signed char i_28 = 2; i_28 < 12; i_28 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
        {
            var_52 = ((/* implicit */unsigned long long int) ((arr_6 [i_28]) ^ (((/* implicit */unsigned int) min((arr_0 [i_28 + 1]), (((/* implicit */int) min((arr_12 [i_28] [i_28] [i_28] [i_28]), (arr_12 [i_28 - 1] [(short)12] [(short)12] [i_28])))))))));
            arr_97 [i_28] = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_9 [i_28] [i_29] [i_28] [i_28] [i_28] [i_28])), (arr_35 [i_28 - 1] [i_28 - 2] [i_28])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_30 = 3; i_30 < 9; i_30 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_31 = 0; i_31 < 13; i_31 += 3) 
                {
                    var_53 = ((/* implicit */int) arr_1 [i_28 - 1]);
                    var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [(short)18])) ^ (((/* implicit */int) arr_23 [0ULL])))))));
                    arr_102 [i_28 - 2] [i_29] [i_28 - 2] [i_28] = ((/* implicit */unsigned short) var_14);
                }
                for (signed char i_32 = 0; i_32 < 13; i_32 += 1) 
                {
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) (unsigned short)65313))));
                    arr_106 [i_29] [i_28] [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_28 - 2])) ? (((/* implicit */int) arr_20 [i_28] [i_28] [i_28 - 1] [i_30])) : (((/* implicit */int) arr_20 [i_32] [i_32] [i_28 - 1] [i_30]))));
                }
                var_56 = ((/* implicit */unsigned char) arr_100 [i_28 - 2] [i_30 - 2] [i_30 - 2] [i_29] [i_28] [(unsigned short)7]);
                arr_107 [i_28] [i_28] [(signed char)3] [i_28] = ((/* implicit */unsigned short) arr_9 [i_28] [i_30] [i_29] [i_29] [i_28] [i_28]);
                /* LoopSeq 1 */
                for (unsigned int i_33 = 0; i_33 < 13; i_33 += 2) 
                {
                    var_57 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_28 [i_28] [i_28] [(_Bool)1])))) / (((/* implicit */int) var_9))));
                    var_58 ^= ((/* implicit */short) ((((/* implicit */int) arr_30 [i_28 + 1] [i_28 - 2] [i_28 + 1])) + (((/* implicit */int) arr_2 [i_28 - 2] [i_28] [i_33]))));
                    var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (+(arr_94 [i_28 - 2]))))));
                }
            }
            /* LoopSeq 2 */
            for (int i_34 = 0; i_34 < 13; i_34 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_35 = 0; i_35 < 13; i_35 += 3) 
                {
                    var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 0)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) * (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    arr_116 [i_28] [i_28] [i_28] [i_35] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_18 [i_28 - 2] [i_29]) | (((/* implicit */long long int) var_5)))))));
                }
                for (int i_36 = 2; i_36 < 10; i_36 += 4) 
                {
                    var_61 &= ((/* implicit */unsigned int) (unsigned short)65312);
                    var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) arr_28 [i_28] [i_36 + 2] [i_28 + 1]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_37 = 0; i_37 < 13; i_37 += 2) 
                {
                    var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_28 + 1])) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) ((short) 19)))));
                }
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 13; i_38 += 4) 
                {
                    for (signed char i_39 = 1; i_39 < 12; i_39 += 2) 
                    {
                        {
                            var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) ((((/* implicit */_Bool) 364654954672126046ULL)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) -507421398)) ? (2186129553304742716LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21031))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_115 [i_29] [i_34] [10ULL] [i_39])))))))))));
                            var_66 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 15925379188117781656ULL)) ? (4437993233777981386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) -2186129553304742716LL)))) + (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_40 = 0; i_40 < 13; i_40 += 2) 
            {
                var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) arr_125 [i_28] [i_28] [i_28] [i_28 + 1] [i_28 + 1] [i_28]))));
                var_68 = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_129 [i_28] [i_28] [i_29] [i_29])))) / (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_124 [9ULL] [i_28] [i_29] [i_29] [i_40]))))))) & (min(((-(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_28] [i_29] [i_40] [i_28] [i_28] [i_28])) : (((/* implicit */int) var_7))))))));
                arr_131 [i_28] [i_28] = ((/* implicit */short) min(((+(((arr_93 [i_28 - 2]) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) var_3))));
                arr_132 [i_28] [i_29] [i_29] [i_28] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((min(((unsigned short)32167), (((/* implicit */unsigned short) arr_17 [i_28] [i_40])))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_2)), (arr_3 [i_28]))))))), (((((/* implicit */int) arr_123 [i_28 - 2] [i_29] [i_40])) ^ (((/* implicit */int) arr_123 [i_28 - 1] [i_29] [i_40]))))));
            }
        }
        for (unsigned int i_41 = 2; i_41 < 10; i_41 += 3) 
        {
            var_69 &= ((/* implicit */unsigned int) var_7);
            arr_135 [i_41] [i_28] = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) << ((((+(((/* implicit */int) (signed char)(-127 - 1))))) + (155))))), (((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_108 [i_28] [i_28] [i_41] [i_41] [i_28])))))))));
        }
        var_70 = ((/* implicit */unsigned short) 14008750839931570230ULL);
        var_71 -= ((/* implicit */int) ((min((((arr_119 [i_28] [i_28] [(signed char)8] [(signed char)8] [i_28] [i_28]) - (((/* implicit */long long int) ((/* implicit */int) arr_121 [i_28 - 1] [i_28] [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) min((var_15), (((/* implicit */int) (_Bool)0))))))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_1 [i_28 - 1]))))))));
    }
    var_72 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (min((0ULL), (((/* implicit */unsigned long long int) 268435455))))));
}
