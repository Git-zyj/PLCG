/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246908
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = arr_0 [i_0] [i_0];
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    arr_6 [6] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-2384))))) && (((((/* implicit */int) (unsigned char)82)) != (((/* implicit */int) (short)10032))))))), (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)90))))));
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) max(((unsigned char)105), ((unsigned char)62)))) > (((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)213)), (((min((var_15), (((/* implicit */unsigned long long int) (unsigned char)190)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (signed char)-116)), (1047728515813484989ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) <= (var_15)))), (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0] [6] [i_0])) : (-840501737136138392LL))))))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((840501737136138398LL), (((/* implicit */long long int) (unsigned char)194)))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_0] [i_1] [i_1] [6U] [i_1] &= ((/* implicit */short) max((((unsigned long long int) (~(1560890656309385410ULL)))), (((/* implicit */unsigned long long int) ((long long int) -2967220056666841260LL)))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) -6153931984039617157LL)))))));
                        var_20 = ((/* implicit */int) max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_0])), (((((/* implicit */_Bool) arr_14 [i_0] [1LL] [i_2 + 1] [1LL])) ? (arr_14 [i_2] [(unsigned char)3] [i_2 + 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [4LL] [i_2 - 2] [i_2 + 2])))))));
                        arr_17 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-13)), (379459295)));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_2] = ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(unsigned char)12])) + (2147483647))) >> (((-2482308603097390644LL) + (2482308603097390666LL)))))) : (((((/* implicit */_Bool) -81564775141092702LL)) ? (-81564775141092690LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((arr_10 [i_1] [i_2] [i_2 - 1] [i_2]) ^ (((/* implicit */unsigned long long int) 81564775141092722LL))))));
                            arr_25 [i_0] [i_0] [i_2] [i_2] [i_2] [5U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)74)) ? (-1440493941458158295LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))));
                            var_22 = ((/* implicit */short) (~(arr_10 [i_1] [i_0] [(signed char)9] [i_1])));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((long long int) 1980103003U));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((max((2763963710U), (2389261653U))), (min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (signed char)-47)) ? (1905705646U) : (2389261653U))))))))));
                        arr_31 [i_0] [(signed char)8] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0] [12] [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_2 + 2])))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((81564775141092708LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 3]))))) == (((/* implicit */int) max(((short)-12758), (((/* implicit */short) max((var_6), (arr_15 [i_0] [i_1] [i_7] [i_0])))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228))))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) + (4054)))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8 - 2])) : (((/* implicit */int) (short)10032))));
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((int) (short)27159))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15315))) / (1569422218U)))) ? (arr_3 [i_0] [(unsigned char)2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))))))))));
                        arr_39 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_9] [i_10] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27166)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) arr_21 [(unsigned short)5] [i_9] [i_9] [i_10] [i_0]))))), (arr_3 [i_9] [i_9] [i_9]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_22 [i_0] [2LL] [i_0] [i_9] [i_10]))))))));
                        arr_40 [i_0] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_10 [0LL] [i_10 - 1] [0LL] [i_10 - 1]), (((/* implicit */unsigned long long int) var_1)))))));
                    }
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6676209202963330933LL), (((/* implicit */long long int) (unsigned char)165))))) ? ((-(5202368455792812560LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9])))))) : (6873724272492904186ULL)));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 6894890444775802972LL))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                arr_49 [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_12 + 1] [i_13] [i_1] [i_13] [i_13])) : (((/* implicit */int) arr_21 [i_12 + 1] [i_12 + 1] [i_11] [i_11] [6ULL]))))) > (max((max((arr_46 [i_0] [i_1] [(unsigned short)4] [(signed char)2]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)72)), (var_9))))))));
                                arr_50 [(unsigned char)5] [i_13] [3LL] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((81564775141092690LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-15318)))))) ? (((-6894890444775802951LL) / (-5714497943609077787LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-415)))))));
                                arr_51 [i_0] [i_12] [i_13] [i_1] [i_13] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-72)), (11090330958513368238ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [3U] [3U])) ? (((/* implicit */unsigned long long int) 6894890444775802969LL)) : (arr_42 [i_0] [i_0] [i_13])))) ? (-6676209202963330934LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -459262852)) ? (((/* implicit */int) arr_15 [i_13] [(signed char)10] [2LL] [2LL])) : (((/* implicit */int) (signed char)-97))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_45 [i_13] [i_1] [i_13] [i_13]), (arr_45 [i_1] [i_11] [i_12 + 1] [i_13])))))));
                                var_31 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35062)) * (((/* implicit */int) (unsigned char)116)))))));
                                arr_52 [i_0] [i_13] [i_13] [i_0] [(unsigned char)10] = ((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) arr_45 [i_1] [i_1] [i_1] [0LL])) ? (((/* implicit */int) (short)32417)) : (((/* implicit */int) var_6))))) >> (((((/* implicit */int) arr_21 [(unsigned char)7] [(unsigned char)7] [i_11] [(unsigned char)0] [i_13])) - (10889)))));
                            }
                        } 
                    } 
                    arr_53 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) var_10)) : (7751953867291501261ULL)))) ? (arr_42 [i_0] [i_0] [i_11]) : (((/* implicit */unsigned long long int) arr_32 [i_0] [i_1] [i_11]))));
                    arr_54 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)-70);
                }
                /* LoopSeq 1 */
                for (long long int i_14 = 3; i_14 < 12; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)71)) << (((((/* implicit */int) (signed char)63)) - (43))))))));
                        var_33 &= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]);
                        arr_61 [i_0] [i_1] [i_14] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8597569994083092964LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (-5160492604985455596LL)));
                    }
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_34 ^= var_13;
                        var_35 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [3] [3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_21 [i_16] [i_16] [i_14] [i_1] [i_0])))))));
                        arr_64 [i_16] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2676009083U)), (arr_22 [i_1] [i_14 + 1] [7ULL] [i_1] [i_16])))) ? (((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [(unsigned char)9] [i_14] [i_16]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))));
                    }
                    var_36 = ((/* implicit */unsigned int) (~((~(var_2)))));
                }
                var_37 -= ((/* implicit */unsigned long long int) (+(-5160492604985455596LL)));
                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_0])), (-1938646132192080335LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned char) var_3);
    var_40 = ((/* implicit */unsigned char) var_14);
}
