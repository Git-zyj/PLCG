/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198333
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32664)) ^ (((/* implicit */int) var_6))))) * (((unsigned int) 32512))))) ? (max((4294967295U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2724397582U))))))) : (var_18)));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_8))) <= (((/* implicit */unsigned long long int) min((var_9), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_0 - 2] [i_1] [i_1])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27576)) + (((/* implicit */int) (unsigned char)68))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) (-(22U))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_10 [i_0 - 2] [i_1] [0] = arr_3 [i_1];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 - 2] [i_1] [i_4] = arr_4 [i_4] [i_1];
                                arr_17 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 4] [i_4] [(unsigned char)5] = ((/* implicit */int) ((((arr_8 [23LL] [i_4]) ? (((/* implicit */long long int) 0U)) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_24 [(short)10] [i_1] = (unsigned char)148;
                                arr_25 [i_2] [7U] [i_2] [i_2] [(unsigned char)18] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_6 - 1])) ^ (((/* implicit */int) ((var_0) < (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((3417019075510328128ULL) == (((unsigned long long int) (short)-21508))));
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_29 [i_0] [20ULL] [i_1] [10ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)99)) : (((((/* implicit */_Bool) (~(arr_12 [i_0] [i_1] [i_0] [i_1] [i_1])))) ? (((var_16) >> (((arr_13 [i_7] [i_1] [20ULL] [i_1] [i_1]) + (2218923309252155672LL))))) : (((/* implicit */int) var_1))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_32 [i_1] [(signed char)0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)27576)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_7 [i_8] [i_8] [(unsigned char)9] [i_8]))) & (((arr_19 [i_0 - 4] [i_7]) % (var_18)))));
                        var_21 = ((/* implicit */long long int) 3214941607U);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_37 [i_0 - 4] [i_10] [i_0 - 4] [i_10] = ((/* implicit */short) ((unsigned char) (unsigned char)75));
                                var_22 = ((/* implicit */unsigned int) var_0);
                                var_23 = ((/* implicit */int) ((short) ((arr_0 [i_0 + 1] [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                                var_24 = ((/* implicit */short) arr_35 [i_10] [i_9] [i_7] [i_1] [i_10]);
                                arr_38 [i_0 + 1] [i_1] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_0] [i_1] [i_7] [13U] [i_10]))))) ? (((long long int) var_1)) : (((/* implicit */long long int) min((var_11), (((/* implicit */int) var_17)))))))) ? (max((((/* implicit */unsigned int) arr_20 [i_0 - 2] [i_1] [i_7] [(unsigned short)11] [i_7] [i_10])), (((unsigned int) 524287U)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_35 [i_10] [i_0 - 4] [i_0 + 1] [i_0] [i_0]), (arr_35 [i_10] [i_0 - 3] [i_0 - 1] [(unsigned char)10] [11U])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21508))) : (1142659440859663241ULL)));
                                var_26 = (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7230))) : (546705047U))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_27 *= ((/* implicit */signed char) ((((arr_44 [i_0] [i_1] [i_11 + 2] [i_11 + 2] [13U]) << ((((-(arr_0 [i_0] [i_0]))) - (2793737468448180768ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) >= (arr_7 [i_11] [i_1] [i_11] [i_11])))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_48 [i_0 - 3] [i_0 + 1] [i_11 + 2])) >= (((/* implicit */int) arr_48 [i_0 + 1] [i_0 - 1] [i_11 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_48 [i_0] [i_0 - 3] [i_11 + 1])) != (((/* implicit */int) arr_48 [i_0 - 1] [i_0 - 3] [i_11 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0 - 1] [i_0 - 3] [i_11 + 2])) || (((/* implicit */_Bool) 1142659440859663213ULL)))))));
                    }
                    for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_16 = 3; i_16 < 23; i_16 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (((+(10U))) + (((/* implicit */unsigned int) var_16)))))));
                            arr_54 [i_0 - 1] [i_0] [i_0] [i_0 - 3] = ((/* implicit */short) var_7);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_15])) ? (((/* implicit */int) arr_3 [(unsigned short)15])) : (((var_19) - (((/* implicit */int) arr_50 [i_1] [i_11] [i_15] [(short)8]))))));
                        }
                        arr_55 [i_15] [21U] [17U] [2] [i_15] = ((/* implicit */short) min((3908782026U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) 1033803469U)) > (arr_43 [22ULL] [22ULL] [i_0] [22ULL] [i_1] [i_0 - 4])))))))));
                        arr_56 [2] [i_11] [i_11] [i_11 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 - 4] [i_0 + 1]))));
                    }
                    /* LoopSeq 4 */
                    for (int i_17 = 3; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(short)15] [i_1] [i_11] [i_17])) ? (((/* implicit */int) arr_8 [i_17] [i_11 - 1])) : (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) 1055531162664960ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44166))) : (3908782046U))))) > (((/* implicit */unsigned int) (+(var_16))))));
                        var_32 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */unsigned int) arr_18 [i_0] [i_11 - 1])) < (arr_22 [i_17 - 3] [i_11] [i_1] [i_0 - 1] [20U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_50 [i_0] [i_1] [i_11 - 3] [i_17 - 2])) < (((/* implicit */int) (unsigned short)6150)))))) : (var_8))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 4] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_1 [i_0 + 1])) : (var_9)));
                            var_34 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) > (12731005345584431755ULL))))));
                        }
                    }
                    for (int i_19 = 3; i_19 < 22; i_19 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))), (((/* implicit */int) ((short) arr_8 [i_19 - 2] [i_0 - 3])))));
                        arr_64 [4U] [i_0 - 1] [i_11] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_11 + 2] [i_11 + 2] [(signed char)9] [i_11 + 1]))))))))));
                    }
                    for (long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                    {
                        arr_68 [i_20] [i_1] [i_11] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_58 [i_0] [i_1] [i_11 - 3] [i_20 - 1] [i_20])), (arr_5 [i_0] [i_11] [i_20])))) ? (((((/* implicit */_Bool) 4206489173U)) ? (arr_44 [i_0 - 2] [i_0 - 2] [i_0 - 2] [(unsigned char)17] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0 - 2]))))) : (((arr_42 [i_20] [i_1] [10U] [i_20]) / (((/* implicit */unsigned long long int) -5064120366459523363LL))))))) ? (((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) (unsigned char)174))))) : (min((((/* implicit */unsigned long long int) ((int) -1619215727))), (((((/* implicit */_Bool) 2892861420U)) ? (arr_44 [i_0] [i_1] [i_1] [19] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153)))))))));
                        var_36 = ((/* implicit */unsigned short) (-(7313842924070685383LL)));
                    }
                    /* vectorizable */
                    for (signed char i_21 = 1; i_21 < 21; i_21 += 4) 
                    {
                        arr_72 [i_21] = ((/* implicit */unsigned long long int) ((int) var_3));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21508)) || (((/* implicit */_Bool) var_18))));
                        arr_73 [i_0 - 1] [i_1] [i_11 - 3] [(unsigned char)0] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_61 [i_0] [i_1] [i_11 - 3] [i_11 - 3] [i_21 + 1])) * (((/* implicit */int) arr_20 [i_21] [i_11] [i_11 + 1] [i_0] [i_21] [9ULL]))));
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (65543)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 65540)))) : (((((/* implicit */_Bool) 3613427320U)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_62 [i_21 + 1] [i_11] [i_1] [i_0]))));
                        var_39 = ((/* implicit */int) (~(18446744073709551607ULL)));
                    }
                    var_40 = ((/* implicit */short) (+((((!(((/* implicit */_Bool) (unsigned char)68)))) ? (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_58 [i_1] [5LL] [i_1] [i_11 + 1] [i_11 - 3])) : (((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) (short)4881))))));
                }
            }
        } 
    } 
}
