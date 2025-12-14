/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197555
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
    var_12 *= ((/* implicit */_Bool) (signed char)-70);
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 16000283435953293938ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0])))))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3] [i_0 - 3]);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-4916)) + (4918)))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4934)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-468))) : (2446460637756257687ULL)));
                            arr_18 [i_4] [3LL] [i_1] [i_0 - 1] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-24)) ? ((~(62914560U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4916)))));
                            var_13 = ((/* implicit */short) ((((((/* implicit */int) (short)4920)) <= (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) (signed char)24)))) : ((~(((/* implicit */int) arr_11 [i_0]))))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]);
                            arr_21 [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (-(max((-1700135200), (((/* implicit */int) (short)-13218))))));
                            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_8 [i_0 - 2])))) ? (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (short)-1893)) : (((/* implicit */int) (unsigned char)244)))) : (((((((/* implicit */int) (short)-1907)) + (2147483647))) << (((arr_8 [i_1 + 3]) - (7345380920589883135LL)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_25 [i_0] [(_Bool)1] [i_0] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22742))) : (var_9)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_23 [i_0 + 1] [i_1 + 2] [14] [20ULL] [i_6] [i_0])) >> (((var_4) - (796885269U)))))))) ? (1700135212) : (((/* implicit */int) (signed char)113))));
                            arr_26 [i_1] [i_2 + 1] [4U] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 15065700545107433626ULL)) ? (995584602) : (((/* implicit */int) var_7))))));
                            var_16 = ((/* implicit */unsigned long long int) ((133143986176LL) + (max((((/* implicit */long long int) -648670074)), (arr_8 [i_0 - 1])))));
                            var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_16 [i_3 + 1])) == (arr_12 [i_0 - 1] [i_1] [i_2 + 2] [i_6])))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0])))) : (arr_8 [(unsigned short)0])))));
                        }
                        arr_27 [(signed char)11] [i_2 + 2] [i_1] [i_0 + 1] = ((((/* implicit */_Bool) 1478978634)) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)248)), (-339517871)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((unsigned int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)12)))) != (((/* implicit */int) ((unsigned short) (short)29017)))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1625688325)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) 9932839590780465588ULL)))));
                            arr_30 [i_3 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-254))) - (var_0)));
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4611686018426339328LL)) ? (-4611686018426339328LL) : (((/* implicit */long long int) 97954697)))) - (((arr_13 [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [(unsigned short)18] [i_0 - 2] [i_0] [i_0 - 2] [i_0])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) var_0);
                            arr_33 [i_0] [i_0] [i_2 + 2] [i_0 + 1] [(short)2] = ((/* implicit */unsigned int) ((arr_1 [i_1 - 1] [i_1 - 1]) ? (((5851599478954620405ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5323))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 2] [i_2 + 4] [i_8 - 1])))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1 - 1] [i_1 - 1] [i_9] [i_2 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)))));
                        var_22 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1625688326)) ? (var_10) : (((/* implicit */unsigned long long int) -2003564808))))));
                        arr_38 [i_0] [i_0] [(short)17] [i_9 + 1] = ((/* implicit */unsigned short) ((((1625688326) != (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_2 + 1] [i_9] [i_9])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [4] [4] [(signed char)5] [i_9] [i_0 + 1] [i_2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)29017)))))));
                    }
                    arr_39 [14ULL] [i_1 - 1] [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 4611686018426339340LL)) ? (1443452440) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
                    {
                        var_23 += max((((/* implicit */unsigned int) -1625688326)), ((-(var_0))));
                        var_24 ^= ((/* implicit */signed char) 12623797902045572658ULL);
                        arr_43 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 13689579502167114811ULL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 962453855)))))));
                        var_25 += ((/* implicit */long long int) ((signed char) max((var_3), (var_0))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_47 [i_11] [i_2] [i_2] [3U] [i_1] [i_0 - 2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1]))) <= (var_10))) ? (((unsigned long long int) (signed char)-113)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) > (arr_40 [i_1 - 2] [i_1 + 1])))))));
                        arr_48 [i_11] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) 507914516U)), (max((((/* implicit */unsigned long long int) var_4)), (arr_12 [i_0] [i_1] [i_2] [i_2]))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? ((((_Bool)0) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (_Bool)0)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_2))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned int) -962453873)), (((((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [13U] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (short)28252)))))) : ((-(var_3))))))))));
                    }
                    arr_51 [i_0] [i_1] [(unsigned short)11] [i_2 + 4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_2 + 1] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_0 - 3])) ? (arr_31 [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_2] [i_0 + 1]) : (arr_31 [i_2 - 1] [(signed char)8] [(signed char)8] [(short)18] [i_1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (((((/* implicit */_Bool) arr_31 [i_2 + 3] [i_2 + 3] [i_0] [15] [i_0] [i_0 + 1])) ? (var_11) : (arr_31 [i_2 - 1] [i_2] [i_2 - 1] [i_1 + 3] [i_1] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        for (signed char i_14 = 1; i_14 < 20; i_14 += 3) 
                        {
                            {
                                arr_56 [i_0 - 3] [i_1] [i_2 + 1] [i_13] [i_14] = (~(((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) arr_15 [i_0 - 1] [i_0 - 3] [i_0 - 1]))))));
                                var_29 = ((/* implicit */unsigned short) -1443452444);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_57 [i_0] = ((/* implicit */unsigned char) var_9);
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-8882696733386658806LL) & (((/* implicit */long long int) ((((-14) + (2147483647))) >> (14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (2465018729U)));
    }
    /* vectorizable */
    for (long long int i_15 = 4; i_15 < 8; i_15 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_15 + 2] [i_15 + 4] [i_15 + 3] [i_15 - 2] [i_15 - 1] [i_15] [i_15])) ? (((/* implicit */int) arr_24 [i_15] [i_15 - 4] [i_15] [12U] [i_15 + 3] [i_15 - 3])) : (((/* implicit */int) arr_24 [i_15] [i_15 + 4] [i_15] [i_15 + 2] [i_15 - 2] [i_15 + 2]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            arr_62 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3591876679U)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (!(var_1)))))));
            arr_63 [i_15] [i_15] = ((((/* implicit */_Bool) arr_52 [i_15] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16] [i_16] [i_15] [i_15]))) : (var_11));
            var_32 = ((/* implicit */int) ((arr_1 [i_15 - 3] [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (6595719988873752574LL)));
        }
        for (int i_17 = 3; i_17 < 9; i_17 += 3) 
        {
            arr_66 [(signed char)5] [i_15 + 3] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) 8477007160504483235ULL)) ? (((/* implicit */unsigned long long int) 1073741312)) : (12668558809206428599ULL)));
            arr_67 [i_15 - 4] [i_17] [i_15 - 4] = ((/* implicit */short) arr_36 [i_15] [i_17 + 2] [i_17] [i_17] [i_17 + 2]);
            var_33 = ((/* implicit */signed char) arr_29 [i_17 - 3] [4ULL] [i_15 + 2]);
        }
        for (long long int i_18 = 1; i_18 < 11; i_18 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-14))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_5))));
            arr_70 [i_15] = ((/* implicit */unsigned char) 1073741312);
        }
    }
    for (long long int i_19 = 4; i_19 < 8; i_19 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_20 = 3; i_20 < 8; i_20 += 2) 
        {
            for (long long int i_21 = 3; i_21 < 9; i_21 += 2) 
            {
                for (int i_22 = 3; i_22 < 11; i_22 += 2) 
                {
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (short)3213))));
                        var_36 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))))));
                    }
                } 
            } 
        } 
        arr_81 [i_19 - 2] = ((/* implicit */unsigned int) (_Bool)0);
    }
    /* vectorizable */
    for (long long int i_23 = 4; i_23 < 8; i_23 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
            {
                arr_90 [i_23] = ((/* implicit */long long int) var_9);
                arr_91 [i_23 - 2] [i_23] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)496)) % (((/* implicit */int) (unsigned char)195))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-11))));
            }
            for (unsigned char i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */_Bool) ((arr_11 [i_23 - 4]) ? (1073741312) : (((/* implicit */int) (signed char)-79))));
                var_38 ^= ((/* implicit */unsigned short) var_3);
                var_39 = ((/* implicit */long long int) (-(arr_84 [i_23 - 4] [i_26])));
            }
            for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_28 = 3; i_28 < 11; i_28 += 2) /* same iter space */
                {
                    arr_100 [i_28 - 3] [i_27] [i_24] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1877864446U)) ? (14253200730910989679ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (2146435072) : ((~(((/* implicit */int) (_Bool)1))))));
                    var_40 = ((/* implicit */short) ((signed char) (signed char)-113));
                    var_41 = ((/* implicit */long long int) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10733)))))));
                }
                for (int i_29 = 3; i_29 < 11; i_29 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */signed char) ((413636399) + (((/* implicit */int) (signed char)64))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */long long int) 3980236334U);
                        arr_108 [i_30] [i_29] [i_27] [i_24] [i_23] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) var_8);
                        arr_111 [i_23] [i_24] [i_27] [i_29] [i_31] = ((/* implicit */unsigned long long int) (+(arr_44 [i_23] [i_23] [i_29 - 3] [i_29])));
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 3) /* same iter space */
                    {
                        var_45 ^= ((/* implicit */unsigned short) -1443452450);
                        arr_114 [6] [i_29 - 3] [i_27] [i_24] [i_23] = ((/* implicit */long long int) (_Bool)0);
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 3) /* same iter space */
                    {
                        var_46 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_5))))) + (((((/* implicit */_Bool) 1443452440)) ? (((/* implicit */int) arr_104 [i_23] [i_27] [i_33])) : (1443452412)))));
                        arr_117 [6ULL] [i_29 - 3] [i_27] [i_24] [6U] = ((int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) 1296172183)) : (var_10)));
                        var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3670132585U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10)))) ? (((long long int) (unsigned char)12)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_27] [(signed char)8] [i_27] [0U]))) : (127U)))));
                    }
                    arr_118 [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_103 [i_29 + 1] [i_29] [i_29 - 3] [i_23 - 2])) ? (((/* implicit */int) (short)10535)) : (((/* implicit */int) var_8))));
                    arr_119 [i_24] [i_24] [i_23] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                }
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1877864446U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_86 [i_23 - 1] [i_27])));
            }
            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (short)-3215))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)23743)))))));
            arr_120 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (short)23743))) ? (((((/* implicit */_Bool) 2414876580888265874ULL)) ? (arr_40 [i_23] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_110 [(signed char)6] [i_24] [i_23 - 4]))));
        }
        arr_121 [i_23] [i_23] = ((/* implicit */unsigned short) var_4);
        /* LoopSeq 2 */
        for (unsigned int i_34 = 0; i_34 < 12; i_34 += 2) /* same iter space */
        {
            arr_124 [i_34] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_19 [i_23] [i_34])))));
            arr_125 [i_34] [i_34] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25905)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11195))));
            var_50 = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned int i_35 = 0; i_35 < 12; i_35 += 2) /* same iter space */
        {
            var_51 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_23 - 2] [i_23] [i_23 + 2] [i_23 + 3] [i_23] [i_23 - 4])) > (((/* implicit */int) (short)-1))));
            arr_129 [i_35] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_109 [i_23 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)42)))) : (var_3)));
        }
    }
}
