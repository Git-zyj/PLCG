/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226532
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    arr_10 [i_0] [5] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)187);
                    arr_11 [i_0] [i_0] [i_0] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) arr_0 [i_2 + 4])) : (((/* implicit */int) arr_0 [i_2 - 2]))))) ? ((~(((/* implicit */int) arr_8 [i_1 + 1] [i_2 + 4] [i_2 + 4] [i_2 - 2])))) : (((/* implicit */int) min((arr_0 [i_2 - 1]), (arr_8 [i_1 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 2]))))));
                    arr_12 [i_0] = ((/* implicit */long long int) max((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65513))))), (((((/* implicit */int) (unsigned short)58878)) << (((/* implicit */int) (unsigned char)0)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_4 [i_0] [5] [1ULL])) : (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)78))))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_0))) : (((/* implicit */unsigned long long int) (+(var_6)))))));
                    arr_15 [i_0] [i_0] [0U] = min((max((arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1]))), (min((arr_14 [i_0] [i_1 - 3] [i_3] [i_3]), (arr_14 [i_1] [i_1 - 3] [i_1] [12ULL]))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((var_10) ? (((/* implicit */int) (unsigned short)25055)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_4] [i_4])))))))));
                    var_23 ^= ((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 4] [i_1 + 1] [i_1 + 1]);
                }
                for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25055)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (1871525431360674733ULL)));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */int) arr_21 [(signed char)6] [i_5 - 2] [i_1] [(signed char)6])) : (((/* implicit */int) arr_24 [(signed char)9] [(signed char)9] [i_5] [i_6]))));
                        arr_26 [i_5] [i_5 + 3] [i_5] [i_0] = ((/* implicit */long long int) (-(((16575218642348876859ULL) << (((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) ((arr_18 [0ULL] [i_0] [i_7]) ? (((/* implicit */int) arr_18 [i_7] [i_0] [2])) : (((/* implicit */int) arr_18 [(unsigned char)5] [i_0] [i_5 + 2]))));
                            var_26 *= ((/* implicit */signed char) 17788541315827294891ULL);
                            arr_29 [i_1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) arr_2 [i_0])))))));
                            arr_30 [i_0] [i_1] [(_Bool)1] [i_1 + 2] [i_0] [i_1] [(short)1] = ((/* implicit */short) (+(1940975896)));
                        }
                    }
                    arr_31 [i_0] [i_0] [4LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14570776232158620692ULL)) ? (4841163581138832122LL) : (3452745038103772635LL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_5 + 3] [i_5 + 3] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 + 2] [i_0])) ? (arr_9 [i_1 + 1] [i_1 - 4] [i_1 - 2]) : (arr_9 [i_1 + 3] [i_1 - 3] [i_1 - 1])));
                        arr_36 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4841163581138832122LL))))) : (((/* implicit */int) var_8))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_5] [i_8] [i_8] [i_8] = var_13;
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40481)) << (((((/* implicit */int) (unsigned short)47947)) - (47940)))));
                            arr_41 [i_0] [i_0] [i_5] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) var_7);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1237760396U)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5] [i_8])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (unsigned char)130)))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            arr_44 [i_0] [3U] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(var_6)));
                            var_29 = ((/* implicit */unsigned int) (unsigned short)38308);
                            arr_45 [i_0] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_6);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                            var_31 *= ((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_5] [i_1 + 3] [i_11] [0]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            arr_52 [0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_42 [i_0] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2])));
                            var_32 = ((/* implicit */signed char) (-(((14789373301725474096ULL) << (((((/* implicit */int) var_15)) - (25990)))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (short i_14 = 3; i_14 < 11; i_14 += 3) 
                        {
                            var_33 ^= var_0;
                            arr_58 [i_0] [i_0] [i_5] [4ULL] [i_0] [i_14] = ((/* implicit */unsigned long long int) (short)28880);
                            arr_59 [i_0] [i_1] [(_Bool)1] [i_0] [i_14] = (+(arr_50 [i_0] [i_0] [i_5 + 2] [i_0] [i_14 - 3]));
                            arr_60 [i_0] [i_1] [i_5] [i_0] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_0] [i_5] [i_5 + 2] [(short)10] [i_13 + 1] [12U] [i_14])) ? (((/* implicit */int) arr_57 [i_0] [i_5] [i_5 + 2] [i_13] [i_13 - 1] [i_14] [i_14])) : (((/* implicit */int) arr_54 [i_0] [i_5] [i_5 - 3] [i_5] [i_13 - 1]))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 10; i_15 += 4) 
                        {
                            arr_63 [i_0] [(unsigned char)8] [i_0] [i_0] [(signed char)9] [11ULL] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_0] [i_0] [i_5 + 3] [i_13] [i_13]))) : (arr_42 [i_0] [i_13] [i_0] [i_0] [i_0])))));
                            arr_64 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1871525431360674733ULL)))) && (arr_32 [i_0] [i_0] [i_5 + 1] [i_5])));
                        }
                        for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) arr_3 [i_13] [i_16])))) : (arr_46 [i_0] [i_1] [0U] [i_13 + 1] [i_1]))))));
                            var_35 = (i_0 % 2 == zero) ? (((((arr_46 [i_0] [i_13 - 1] [i_5] [i_13] [i_0]) + (2147483647))) << (((((arr_46 [i_0] [i_13 + 1] [i_5] [i_13] [i_0]) + (1730311257))) - (26))))) : (((((((arr_46 [i_0] [i_13 - 1] [i_5] [i_13] [i_0]) - (2147483647))) + (2147483647))) << (((((((arr_46 [i_0] [i_13 + 1] [i_5] [i_13] [i_0]) + (1730311257))) - (26))) - (2083921846)))));
                            var_36 = ((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [6LL] [0U] [i_0]));
                            var_37 = var_12;
                            arr_69 [i_0] [i_1] [i_5] [i_5] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_5 - 2] [12ULL] [i_0])) ? (arr_23 [i_5 + 1] [i_5 + 1] [i_0]) : (arr_23 [i_5 + 2] [i_1] [i_0])));
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 4) 
                        {
                            arr_72 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34887)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) / (arr_50 [i_0] [i_0] [i_5] [i_13] [12ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [5] [i_1])) && (var_10)))))));
                            arr_73 [4ULL] [i_0] [4ULL] [i_5] [i_13] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 288195191779622912LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [i_0] [(_Bool)1] [i_5] [i_0] [i_0])))))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_13 - 1] [i_1 + 2] [i_1])) && (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_37 [i_0])))))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 2; i_18 < 12; i_18 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) arr_24 [i_1 - 2] [i_5 - 3] [i_13 - 1] [i_13]);
                            arr_76 [i_0] [i_1] [i_5] [(_Bool)1] [i_0] [i_1] = ((/* implicit */signed char) var_9);
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) 18446744073709551607ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0]))))))))));
                        }
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_1 - 2] [(short)5] [i_5 + 3] [3U] [i_5 + 1] [i_13 - 1])) ? (1200387843051231333ULL) : (var_12)));
                    }
                }
                /* LoopSeq 1 */
                for (short i_19 = 3; i_19 < 9; i_19 += 4) 
                {
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_0] [i_0] [i_1] [i_1] [i_19]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [(unsigned char)4] [i_0] [(signed char)2] [(unsigned char)4] [i_0])) ? (((/* implicit */int) (short)-28877)) : (((/* implicit */int) arr_24 [(short)8] [i_1] [8U] [(short)8]))))) ? ((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_19 + 1] [i_19])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -394265107))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_22 [i_0] [(unsigned char)2] [i_19] [i_0]), (var_14)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    arr_79 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) max((arr_61 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_61 [i_0] [i_1 + 1] [i_0] [i_19] [(short)10])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) max((arr_61 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_61 [i_0] [i_1 + 1] [i_0] [i_19] [(short)10])))) - (2147483647))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))))))));
                    var_43 = ((/* implicit */unsigned char) arr_55 [i_0] [i_1] [i_1] [i_1] [i_19]);
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) -394265107))));
                }
                arr_80 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_16 [i_0] [i_1 + 2] [0ULL] [i_1 - 1]), (arr_16 [i_0] [i_1] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        arr_84 [i_20] = ((/* implicit */unsigned short) (signed char)-67);
        var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_20] [6ULL] [i_20])) && (((/* implicit */_Bool) arr_56 [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)22))) : (288195191779622912LL)));
        arr_85 [i_20] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)230))))));
    }
    for (unsigned long long int i_21 = 2; i_21 < 17; i_21 += 2) 
    {
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)20)) && (((/* implicit */_Bool) 638148863329988991LL))));
        var_47 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_86 [i_21 - 1])) ? (max((((/* implicit */long long int) arr_86 [i_21 - 1])), (-288195191779622913LL))) : (((/* implicit */long long int) min((arr_86 [i_21 + 1]), (arr_86 [i_21 - 1]))))));
    }
    var_48 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_17))))));
    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_13))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */int) var_19)) << (((((/* implicit */int) (unsigned short)25055)) - (25035))))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (18081923043453805299ULL)))) && ((!(((/* implicit */_Bool) 3831931842462466756LL)))))))));
    var_50 = ((/* implicit */int) ((5029340504356451320LL) << (((((/* implicit */int) var_2)) - (182)))));
}
