/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245580
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
    var_13 = ((/* implicit */unsigned char) (short)21212);
    var_14 = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-21196)) != (var_0))) && ((!(var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [(short)11] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_15 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)25)), (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)113)), ((short)21212)))) ? (((((/* implicit */_Bool) (unsigned short)28639)) ? (((/* implicit */unsigned long long int) -2776828413807670672LL)) : (15230204574618175915ULL))) : (((/* implicit */unsigned long long int) var_6))))));
                    }
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4294967267U), (((/* implicit */unsigned int) 975122483))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12), (((/* implicit */unsigned short) (unsigned char)253)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-15765)) + (((/* implicit */int) (short)-25891))))) ? (min((var_1), (((/* implicit */long long int) (short)-25891)))) : (max((((/* implicit */long long int) (_Bool)0)), (-2776828413807670682LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [(unsigned char)3] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), (max((((((/* implicit */_Bool) 4236887216U)) ? (var_8) : (11937395304401750749ULL))), (min((((/* implicit */unsigned long long int) (short)32761)), (var_8)))))));
                                arr_19 [i_0] [i_2] [i_2] = ((/* implicit */int) 4236887217U);
                                arr_20 [i_0] [i_1] [i_1] [2ULL] [(_Bool)1] = ((/* implicit */signed char) max((min((((/* implicit */long long int) (unsigned char)29)), ((-9223372036854775807LL - 1LL)))), (((var_1) << (((var_9) - (3557712295U)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */short) (((-((~(((/* implicit */int) (_Bool)0)))))) != (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)45))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [(signed char)2] = ((/* implicit */signed char) (+(min((((((/* implicit */int) (unsigned char)15)) & (((/* implicit */int) var_10)))), (var_6)))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)9608)))) ? (((/* implicit */long long int) min((((var_2) + (((/* implicit */unsigned int) var_0)))), (((4236887211U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))))) : (((max((-1569708248471842401LL), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                            var_18 = ((/* implicit */unsigned long long int) var_7);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) var_5);
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)37623)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (58080085U)))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)0)));
                            var_21 += ((/* implicit */long long int) var_9);
                            var_22 = (!(((((/* implicit */int) var_10)) <= (var_6))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) (((+(6509348769307800867ULL))) >> (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_40 [i_11] [i_11] [i_10] [(unsigned char)6] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)4897)))) : (var_7)));
                            arr_41 [i_0] [i_0] [i_0] [(signed char)5] [i_11] = var_8;
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_24 = (!(((/* implicit */_Bool) (signed char)15)));
                            var_25 = ((/* implicit */_Bool) var_7);
                        }
                        arr_46 [i_1] [i_2] [i_1] [i_0] = (!((_Bool)1));
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_51 [i_0] [i_14] [i_0] [i_13] [i_14] [i_13] [7] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (min((var_9), (((/* implicit */unsigned int) var_0)))) : ((+(2288265066U)))));
                                var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-16))))))), (((6553618910882479412LL) % (((/* implicit */long long int) max((var_6), (var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
