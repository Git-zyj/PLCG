/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193644
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963967ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)46447)))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32)) / (((/* implicit */int) (unsigned char)96))));
                                arr_14 [4] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_4])) ? (arr_8 [i_2 - 1] [(unsigned short)2] [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [1]))));
                                arr_15 [9] [i_1] [(unsigned short)16] [12] [i_4] = ((/* implicit */long long int) (+((~(((((/* implicit */int) var_10)) - (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)31801)) : (23))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) (short)-19))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) (short)-44)) : (((/* implicit */int) (signed char)96))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_14)) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33736))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-62))) & (var_4))))) : (((/* implicit */unsigned long long int) (~(min((var_13), (((/* implicit */unsigned int) var_10))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [(short)3] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_12 [i_6] [i_6] [(signed char)7] [(unsigned short)18])), (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31801))) : (((((/* implicit */_Bool) 2147483647)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13)))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((var_7) ? (-1028723866) : (arr_21 [i_0] [i_1] [i_2 + 1] [(unsigned short)18] [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_7 [(unsigned short)4])))))) : (((arr_0 [i_2 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7103))))))))));
                            arr_24 [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (arr_23 [i_2 - 1] [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (((unsigned int) arr_23 [i_2 - 1] [(_Bool)1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)7))))))));
                            arr_25 [i_1] [i_2] [(_Bool)1] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_5 [i_1] [i_1] [(_Bool)1] [i_6]))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (var_3)))))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (((-(((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (short)27))))))) / (((((/* implicit */int) var_8)) << (((var_12) - (919553661099947029LL))))))))));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-2147483644), (((/* implicit */int) (unsigned short)7113))))) ? (max((var_16), (((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_29 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1531596656)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)40)) ? (((/* implicit */int) (unsigned short)7119)) : (((/* implicit */int) var_1)))), (max((arr_21 [i_0] [i_1] [i_1] [(unsigned short)9] [(_Bool)1]), (((/* implicit */int) (short)29650))))))) : (((var_0) + (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1423436588662871606LL)))))));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)19)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            arr_35 [(signed char)11] [i_1] [i_2 + 1] = ((/* implicit */signed char) ((arr_4 [(short)17] [i_2 + 1] [(signed char)4] [i_8]) + (((/* implicit */unsigned long long int) var_13))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_4 [18U] [i_1] [i_8] [(unsigned short)3]))));
                        }
                        for (short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                        {
                            arr_40 [17LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)58414)) : (((/* implicit */int) (unsigned short)693))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (arr_38 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_23 [i_0] [i_1] [i_2] [i_2] [i_10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [(signed char)11] [i_8] [(signed char)11]))) : (arr_27 [(signed char)18] [i_8] [(_Bool)1] [i_2] [(short)21] [i_0] [(signed char)18]))))))));
                            var_27 ^= ((/* implicit */unsigned short) ((((var_1) ? (((/* implicit */int) (unsigned short)58419)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5)))))) > ((+(((int) (unsigned short)2434))))));
                            arr_41 [i_10] [i_10] [i_0] [i_8] [i_2] [19U] [i_0] = ((/* implicit */unsigned short) (-(var_3)));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_28 -= ((/* implicit */signed char) var_8);
                            var_29 ^= ((/* implicit */short) ((-854958163) * (((/* implicit */int) (unsigned short)0))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            {
                arr_49 [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                arr_50 [i_12] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_38 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((-2455371886320771759LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-41)))))));
                arr_51 [6LL] [6LL] = ((/* implicit */signed char) arr_47 [i_12] [i_12] [i_12]);
                arr_52 [i_13] [13U] = ((/* implicit */int) (unsigned char)61);
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7117))) : (var_0))) : (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_1))))))), (((/* implicit */long long int) var_15))));
}
