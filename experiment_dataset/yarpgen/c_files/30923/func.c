/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30923
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(max((((((/* implicit */_Bool) (unsigned short)2032)) ? (-1LL) : (-13LL))), ((+(13LL))))))))));
    var_13 = ((/* implicit */unsigned long long int) (+(0LL)));
    var_14 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_9))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [0U] [i_1] [i_1 - 1])), (((var_11) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [(unsigned short)0] [i_1 - 2] [i_2])) : (((/* implicit */int) var_7)))))))));
                        var_17 = ((/* implicit */signed char) (unsigned short)65535);
                    }
                    var_18 = ((/* implicit */signed char) arr_5 [3] [(signed char)11]);
                    var_19 = ((/* implicit */unsigned short) (((((((~(((/* implicit */int) var_8)))) + (2147483647))) >> (((18446744073709551602ULL) & (13ULL))))) >> ((((~(((/* implicit */int) (signed char)-103)))) - (98)))));
                }
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_14 [(signed char)7] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1 - 1] [0] [i_4]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -44LL)) <= (18446744073709551602ULL)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1 - 2] [i_6 - 1])) ? (((/* implicit */int) var_6)) : (var_2)));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1480743361)))) ? ((+(arr_8 [i_0 + 1] [6LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))))))));
                            arr_21 [i_6] [(signed char)11] [i_4] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_11 [i_4] [i_1] [i_4] [7]))))) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_6 + 1])) : ((+(((/* implicit */int) arr_2 [i_6 + 1]))))));
                        }
                        var_23 = ((/* implicit */int) (+(18446744073709551602ULL)));
                    }
                    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_24 [i_0 - 2] [i_1] [(_Bool)1] [i_4] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_4] [(unsigned short)8] [i_1] [i_0]))) : (var_1)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2011429683U)) : (-1LL))) : (((/* implicit */long long int) ((unsigned int) var_6))))) : (((/* implicit */long long int) ((int) min((1501855392), (2011218742)))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(-7126229214860762653LL))))))) : (-1501855392)));
                        var_26 -= ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned short) var_8)), (arr_17 [(signed char)1] [i_1] [i_1] [i_0 - 4] [i_1 + 2]))));
                        var_27 = ((/* implicit */unsigned int) var_4);
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 12; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((short) 30LL)))));
                            var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_24 [i_9 + 1] [i_1] [i_0 - 1] [4ULL] [i_1 - 1]), (arr_24 [i_9 + 1] [i_1] [i_0 - 4] [i_8] [i_1 - 2])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_24 [i_9 - 3] [i_9 - 3] [i_0 - 2] [i_8] [i_1 + 1]))))));
                        }
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_4) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) arr_20 [i_1] [i_1])) % (var_9))))) : (min((((/* implicit */unsigned long long int) min((arr_17 [12] [i_1 + 1] [i_1 + 1] [(signed char)2] [i_8]), (((/* implicit */unsigned short) var_0))))), (((arr_2 [i_1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
                        arr_31 [i_0] [i_1] [6] [i_4] [i_8] = ((/* implicit */signed char) (+(min((((arr_5 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-7126229214860762653LL))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_3)))))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31890)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 8569446627773883382LL)))))) : (((/* implicit */int) arr_1 [i_0]))));
                    var_32 |= ((/* implicit */short) max((max((arr_7 [i_0 - 1] [i_0 - 4] [i_0 - 4] [i_1 + 2]), (((/* implicit */int) var_0)))), (max((arr_7 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_1 + 1]), (arr_7 [i_0 - 3] [i_0] [i_0 - 4] [i_1 - 1])))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) 4896260949880338851ULL))))))))));
                        var_34 ^= ((/* implicit */int) ((arr_27 [i_10] [11LL] [i_10] [i_10] [i_10]) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1])) < (((/* implicit */int) var_10))))))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_35 [i_0] [i_10])), (((arr_12 [i_0] [i_0] [i_0 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) (+(arr_7 [i_11] [i_10] [i_1] [i_0]))))));
                    }
                    for (int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (short)-1008))));
                        var_37 += min((((/* implicit */signed char) max((arr_13 [i_0 - 1] [i_0 - 4] [i_0 - 3] [i_0 - 2]), (arr_13 [i_0 - 1] [i_0 - 4] [i_0 - 3] [i_0 - 2])))), (var_3));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        var_38 &= ((/* implicit */int) min((max((var_0), (((/* implicit */unsigned char) arr_24 [(signed char)9] [(signed char)9] [i_0 + 1] [i_0 - 3] [3])))), (((/* implicit */unsigned char) arr_29 [i_0 + 1] [(short)6] [(short)6] [i_13]))));
                        var_39 = var_4;
                    }
                }
                for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    var_40 = ((/* implicit */short) 1501855392);
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) 944417167)) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_14] [i_14])) ? (max((((/* implicit */int) var_11)), (-1501855393))) : (((/* implicit */int) (_Bool)0)))) : ((+(((var_7) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_14] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_0 - 2])))))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) arr_27 [i_0] [i_1] [i_14] [i_15] [i_16]))));
                                var_43 = (((_Bool)1) ? (((/* implicit */int) arr_23 [(unsigned short)9] [i_1] [(unsigned short)9] [i_15])) : ((-(((/* implicit */int) ((signed char) var_3))))));
                                var_44 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50444)) ? (max((1501855392), (1501855400))) : (((((/* implicit */_Bool) -42LL)) ? (-1501855393) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_14] [(signed char)7]))))))) <= (arr_12 [i_0] [i_1 - 1] [i_14]));
                                arr_54 [(unsigned short)9] [(unsigned char)7] [i_14] [5LL] [i_15] [i_16] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)35594)), ((-(((/* implicit */int) ((unsigned short) var_8)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) & (var_1))), (((/* implicit */unsigned long long int) (~(max((2051635317U), (((/* implicit */unsigned int) (unsigned short)35594))))))))))));
}
