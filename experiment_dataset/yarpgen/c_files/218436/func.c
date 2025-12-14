/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218436
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -259076410))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) + (((((/* implicit */int) var_7)) - (((/* implicit */int) var_3))))))) != ((~(arr_7 [i_2] [i_1 - 2] [i_0] [i_0])))));
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)164)) ^ (((/* implicit */int) ((signed char) var_8)))))), (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) 13U)) : (((unsigned long long int) arr_2 [i_1] [i_0]))))));
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((arr_2 [i_1 + 1] [i_1 - 2]) || (arr_2 [i_1 + 1] [i_1 - 2])))) : (((/* implicit */int) (unsigned char)29))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */int) var_8);
                    var_21 |= ((/* implicit */unsigned long long int) arr_4 [i_0] [2ULL] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) - (arr_14 [(_Bool)0] [(_Bool)0]))) ^ ((-(arr_14 [(_Bool)1] [(_Bool)1])))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_10)))) - (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((-(arr_7 [i_0] [i_1] [i_3] [i_4]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_3] [i_3] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (8462640896472166673LL) : (((/* implicit */long long int) arr_14 [i_1] [i_5])))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_17 [i_1] [(_Bool)0] [i_1] [i_1])))))), (((((/* implicit */_Bool) ((unsigned int) 694321536U))) ? (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [(_Bool)1] [i_0]))))) : (((18446744073709551615ULL) >> (((/* implicit */int) (signed char)34))))))))) : (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (8462640896472166673LL) : (((/* implicit */long long int) arr_14 [i_1] [i_5])))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_17 [i_1] [(_Bool)0] [i_1] [i_1])))))), (((((/* implicit */_Bool) ((unsigned int) 694321536U))) ? (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [(_Bool)1] [i_0]))))) : (((18446744073709551615ULL) >> (((/* implicit */int) (signed char)34)))))))));
                        arr_20 [i_1] [i_1 - 2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)15))))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (2808625176548347622LL)))))) ? (((arr_13 [i_1 + 3] [6] [i_3] [i_1 + 3]) >> (((/* implicit */int) var_4)))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_5] [i_3] [i_1] [i_0]))))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 &= ((/* implicit */unsigned char) arr_9 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [6U] &= ((/* implicit */unsigned char) 10U);
                                var_25 = ((/* implicit */_Bool) (+(max(((+(511903091))), ((+(((/* implicit */int) (unsigned char)85))))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)21053))))))));
                                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (((_Bool)1) || (arr_1 [5ULL]))))))) / (((4810641521903972607ULL) & (arr_13 [i_1 - 1] [i_1 + 2] [i_7] [i_7])))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) (-((-(((var_10) ? (4140544580637045551ULL) : (((/* implicit */unsigned long long int) 2896213930U))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 12U))));
            var_30 = (((-9223372036854775807LL - 1LL)) > (arr_4 [(_Bool)1] [(unsigned short)0] [i_10]));
            var_31 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 17647609646404073032ULL)) ? (((/* implicit */int) arr_21 [i_10] [i_9] [i_9])) : (var_15)))));
            var_32 &= ((/* implicit */unsigned long long int) arr_24 [(unsigned short)8] [(unsigned char)2]);
        }
        var_33 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) (unsigned char)139)) - (117)))))));
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) : ((-((+(((/* implicit */int) var_9))))))));
}
