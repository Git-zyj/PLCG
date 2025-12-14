/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221318
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_10 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_11 -= ((/* implicit */unsigned long long int) var_4);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) 0)) : (var_1)))) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) ((8339238197683207855ULL) == (((/* implicit */unsigned long long int) var_9)))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((short) -9223372036854775801LL));
                }
                arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -2147483647)) : (var_7)))) : (((long long int) var_8))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                arr_13 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (short)29969)) ? (((/* implicit */unsigned int) 2147483647)) : (var_9));
                var_13 &= (-(((long long int) arr_5 [i_0])));
                arr_14 [i_0] [i_1] [i_4] = 10107505876026343760ULL;
            }
            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (2614152604440611396ULL)));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_18 [i_5] [i_0] = ((/* implicit */short) (-(2614152604440611397ULL)));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_15 *= ((/* implicit */short) 288230375077969920LL);
                var_16 = ((/* implicit */short) ((signed char) arr_1 [i_6]));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) ((int) arr_1 [i_6]));
                    arr_26 [i_7] [i_6] [i_0] [i_7] = ((/* implicit */short) (~(arr_17 [i_7] [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_7] [i_8])) ? (var_1) : (((/* implicit */unsigned int) arr_7 [i_8 - 1] [i_0] [i_5] [i_0]))));
                        var_19 = ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_7] [i_6])) ? (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5])) : (-130833283))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1912794734393626678LL)) ? (arr_24 [i_0] [i_5] [i_8]) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_0] [i_7] [i_8 + 1]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_8 - 1] [2ULL] [i_8 + 1] [i_8] [i_8])) != (((/* implicit */int) var_8))));
                    }
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        arr_33 [i_6] [i_7] [i_0] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9 - 2] [i_5])) ? (((/* implicit */long long int) var_7)) : (var_3)));
                        arr_34 [i_0] [i_5] [i_5] [i_6] [i_9 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (var_2)));
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                    }
                }
            }
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_42 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) (~(arr_28 [i_11 - 1] [i_10] [i_11 - 1] [i_11 - 3] [i_11])));
                        arr_43 [i_10] [i_10] = ((/* implicit */unsigned int) (short)32767);
                    }
                } 
            } 
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0] [i_5]))))) ? (var_2) : (((/* implicit */int) (short)-11567))));
        }
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            arr_47 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_12] [i_12] [i_0])) ? (arr_28 [12U] [i_0] [8U] [i_0] [i_0]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_16 [i_0] [i_12])))));
            var_24 |= ((/* implicit */unsigned int) ((var_2) / (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
        }
        arr_48 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_8)))))));
        var_25 = ((/* implicit */int) ((signed char) (unsigned char)255));
        arr_49 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_0] [i_0] [i_0] [i_0])));
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)27626), (var_6))))) : (((((/* implicit */_Bool) var_6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12552))))))))))));
        arr_52 [i_13] [i_13] &= ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13] [i_13] [i_13]))) : (15993052484440708668ULL)))))) : (min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) var_2)), (arr_5 [i_13]))))));
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                for (long long int i_16 = 4; i_16 < 16; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_17 = 2; i_17 < 16; i_17 += 1) 
                        {
                            arr_64 [i_14] [i_16] [i_15] [i_14] [i_13] [i_14] = ((((/* implicit */_Bool) max((arr_53 [i_14] [i_17 - 2]), (arr_53 [i_14] [i_17 + 1])))) ? ((-(((((/* implicit */_Bool) arr_50 [i_17 - 2])) ? (4654988717984053610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13] [i_14] [i_15] [i_14] [i_17]))))))) : (((((/* implicit */_Bool) arr_45 [i_17 - 1] [i_16 - 3] [i_15])) ? (arr_0 [i_16 + 1] [i_17 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_17 - 1] [i_16 - 3] [i_14]))))));
                            var_27 = ((/* implicit */short) min((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))), (min((var_0), (((/* implicit */long long int) arr_31 [i_16] [i_14] [i_14] [i_13])))))), (min((min((((/* implicit */long long int) arr_3 [i_17 - 2] [i_17 - 2] [i_15])), (arr_23 [i_17] [i_17] [i_17] [i_17] [i_17]))), (((((/* implicit */_Bool) arr_51 [i_16 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))) : (arr_16 [i_17] [i_17])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 8364888100737714885LL)) & (((((/* implicit */_Bool) 966894413717405472LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22516))) : (15832591469268940219ULL)))));
                            arr_69 [(short)6] [i_18] [i_15] |= ((/* implicit */signed char) arr_67 [i_18] [i_16] [6U] [6U] [i_13]);
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((short) (short)4411))))))));
                        }
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(1267808292749600226ULL)))) && (((/* implicit */_Bool) arr_53 [i_14] [i_15]))));
                    }
                } 
            } 
            arr_70 [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)120))) == (((((/* implicit */_Bool) (short)32764)) ? (17178935780959951390ULL) : (((/* implicit */unsigned long long int) arr_7 [i_13] [i_13] [i_13] [i_13]))))));
        }
        for (signed char i_19 = 4; i_19 < 16; i_19 += 1) 
        {
            arr_73 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-31321), (arr_54 [(short)8] [(short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (var_6))))) : (var_7)))) ? (((((/* implicit */_Bool) arr_72 [i_13] [i_19 + 1])) ? (arr_2 [i_13] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_13] [i_19 - 4]))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (16613201725832965299ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_54 [6LL] [i_19])), (arr_61 [i_13] [i_19 - 2] [i_19]))))))));
            var_31 *= ((/* implicit */short) var_5);
            arr_74 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (short)21984))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13] [i_19 - 3]))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_13] [i_19])) ? (0) : (((/* implicit */int) (short)27806))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_57 [i_13] [i_19] [(signed char)4])))))));
            var_32 -= (short)27564;
        }
        for (unsigned char i_20 = 1; i_20 < 13; i_20 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                var_33 = ((/* implicit */short) ((int) (~(((/* implicit */int) (short)-12)))));
                /* LoopSeq 1 */
                for (long long int i_22 = 1; i_22 < 14; i_22 += 1) 
                {
                    var_34 = ((/* implicit */short) (~(arr_80 [i_20 + 3])));
                    arr_82 [i_13] [i_13] [i_21] [i_13] [i_21] [i_20] = ((/* implicit */long long int) ((short) min((((/* implicit */long long int) arr_31 [i_20] [i_20 - 1] [i_20 + 1] [i_20 - 1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))))));
                }
                arr_83 [i_13] [i_20] [(signed char)15] = ((/* implicit */long long int) ((max((arr_79 [i_20] [i_20] [i_20 + 1] [i_20]), (var_3))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5779235074775693747LL)))) ? (((long long int) ((((/* implicit */_Bool) (short)-30649)) ? (((/* implicit */unsigned int) arr_60 [i_23] [i_23] [i_23] [i_20 + 4] [i_20 + 4] [i_13])) : (arr_57 [i_13] [i_13] [i_13])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_0 [i_13] [i_20])))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_6)))))));
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_17 [i_20 + 1] [i_20] [i_20]) + (9223372036854775807LL))) >> (((arr_17 [i_20 - 1] [i_20 - 1] [i_23]) + (5723639807093066323LL)))))))))));
            }
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) var_1)) : (var_0)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) (short)30636)) >= (((/* implicit */int) (short)18765)))))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_11 [i_13] [i_20])))))))));
            arr_86 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_50 [i_20])) ? (((/* implicit */unsigned long long int) var_7)) : (0ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_20 + 3]))))) : (min((arr_76 [i_13] [i_20]), (((/* implicit */unsigned long long int) (short)-20683))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
    {
        for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
        {
            {
                arr_93 [i_25] [i_24] = ((/* implicit */int) var_1);
                var_38 *= ((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)-7833), ((short)30649))))));
                /* LoopSeq 3 */
                for (long long int i_26 = 1; i_26 < 17; i_26 += 1) 
                {
                    var_39 = ((/* implicit */short) (-(((unsigned long long int) min((((/* implicit */int) (short)12017)), (arr_32 [i_24] [i_24] [i_25] [15LL] [i_26]))))));
                    arr_98 [i_26] [i_25] = ((/* implicit */signed char) (short)-21984);
                }
                for (short i_27 = 1; i_27 < 17; i_27 += 1) 
                {
                    var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) - (var_9)))))) ? (((unsigned long long int) 262080U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(short)0] [i_27 - 1])) ? (((/* implicit */unsigned int) arr_32 [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_27] [i_24])) : (arr_30 [0ULL] [i_27 - 1])))))))));
                    var_41 = ((/* implicit */short) var_1);
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
                    {
                        for (signed char i_29 = 0; i_29 < 18; i_29 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_40 [i_24] [i_25] [i_27] [i_29] [(short)8]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)29883)) && (((/* implicit */_Bool) var_8)))))))) : ((-(min((var_1), (388926070U)))))));
                                arr_109 [i_24] [i_25] [i_27] [i_24] [i_29] &= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_22 [i_29]), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))))), ((+(((/* implicit */int) var_6))))));
                                var_43 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) arr_15 [(short)8] [(short)8] [i_27])))))));
                            }
                        } 
                    } 
                }
                for (long long int i_30 = 0; i_30 < 18; i_30 += 1) 
                {
                    arr_112 [(short)2] [(short)2] |= ((short) (!(((/* implicit */_Bool) arr_44 [8LL]))));
                    var_44 -= ((/* implicit */short) min((25165824U), (arr_91 [i_25] [i_25])));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_31 = 0; i_31 < 14; i_31 += 3) 
    {
        arr_115 [i_31] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(9LL)))), (((unsigned long long int) arr_92 [i_31] [i_31] [12U]))));
        var_45 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (short)10)))));
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */_Bool) arr_100 [i_31] [i_31] [i_31] [i_31])) ? (((/* implicit */unsigned int) arr_51 [i_31])) : (702028725U))))) : (((/* implicit */unsigned int) ((int) arr_58 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])))));
    }
    var_47 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)8847)), (((unsigned long long int) -6870227987062666466LL))));
}
