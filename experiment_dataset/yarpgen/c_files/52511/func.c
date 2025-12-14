/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52511
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((((arr_0 [i_0] [i_1]) - (arr_0 [i_0] [i_2 - 1]))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (short)32767))))));
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-11169))) > (arr_0 [i_1] [i_1]))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_16)) : (9007199246352384LL))) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (min((((((/* implicit */_Bool) arr_6 [i_0] [1ULL] [1ULL] [i_2])) ? (3485439117885474582LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */long long int) min(((unsigned char)253), (var_15))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_19 += ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-9440)) ? (((/* implicit */int) (short)24323)) : (((/* implicit */int) (short)24310))))));
                        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4]))) : (2944930781U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) arr_20 [i_3] [i_3] [i_5] [i_5]);
                        arr_21 [i_3] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned int) var_0));
                        arr_22 [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) (((~(var_14))) << (((var_6) - (707487319U)))));
                    }
                    arr_23 [i_3] [i_4] [i_3] = ((((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned long long int) 2944930781U)) : (4503599627370495ULL))) - ((~(18446744073709551615ULL))));
                    var_22 -= ((/* implicit */unsigned int) var_12);
                    var_23 = ((/* implicit */unsigned long long int) 4007815357U);
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_16 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [10LL] [i_4] [i_4]), (((/* implicit */unsigned int) arr_12 [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((var_11), ((unsigned char)14))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)-25444))))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_5] [i_8]))) <= (var_6))) ? (max((0LL), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25438)) ? (((/* implicit */int) arr_25 [i_4])) : (((/* implicit */int) var_13))))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            arr_31 [i_4] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_3]) << (((((/* implicit */int) (short)25443)) - (25441)))))) | (((((/* implicit */unsigned long long int) -4998336348478380915LL)) * (var_14))))) == (min((((/* implicit */unsigned long long int) ((unsigned int) (short)25442))), (min((13198261729437404286ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
                            var_25 = (short)-25461;
                            var_26 *= ((/* implicit */unsigned int) 5298082851202350871LL);
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(203953385U))))));
                            var_28 ^= ((/* implicit */short) (+(max(((-(18446744073709551615ULL))), (((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_13 [i_3] [i_3] [i_3] [i_8])))))));
                        }
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((5844569017147533389LL), (((/* implicit */long long int) var_8))))) ? (min((((/* implicit */unsigned long long int) var_11)), (13159151410390547762ULL))) : (((((/* implicit */_Bool) var_16)) ? (17466223598497949388ULL) : (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((134184960LL), (((/* implicit */long long int) (short)24332))))) ? (((/* implicit */int) (short)24325)) : (((/* implicit */int) ((11120675538171054797ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25444))))))))))))));
                            arr_37 [i_4] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) 0LL);
                            arr_38 [i_3] [i_8] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((long long int) max((arr_17 [i_4] [i_4] [i_8] [i_8]), (var_2))));
                            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1])) ? (arr_10 [i_11] [i_3 - 1]) : (arr_10 [i_4] [i_3 + 2]))) >> (((((long long int) arr_9 [i_3 - 2])) - (334707735LL)))));
                        }
                        arr_39 [i_3] [i_3] [i_4] [i_3] |= arr_8 [i_3] [i_5];
                        arr_40 [i_8] [i_8] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_27 [i_3 - 1])) * (((/* implicit */int) arr_27 [i_3 - 3])))));
                        arr_41 [8U] [8U] [i_8] [i_8] [8U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) <= (((((/* implicit */_Bool) ((arr_10 [6LL] [i_8]) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8])))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 2696893893U)) ? (arr_29 [i_3] [i_3] [i_3] [4LL] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        arr_44 [i_3] [i_12] [(short)1] = ((/* implicit */_Bool) var_4);
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) max((min((arr_32 [i_5] [i_4] [i_4] [i_4] [i_3] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6017)))))) : (arr_43 [i_3] [i_3] [(short)3] [i_12])))))))));
                        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        var_33 -= min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_33 [i_3] [i_3] [i_3] [3U] [i_13] [i_13] [i_3])), ((unsigned short)48226)))), (((unsigned long long int) 4007815357U)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_2))), (((((/* implicit */int) arr_46 [i_3] [i_3] [i_3] [i_3])) ^ (((/* implicit */int) var_5))))))));
                        var_34 = ((/* implicit */unsigned long long int) arr_19 [i_5] [i_4] [i_4]);
                    }
                }
            } 
        } 
    } 
    var_35 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)24332), (var_2))))) & (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned long long int) var_13)), (max((0ULL), (18446744073709551615ULL)))))));
}
