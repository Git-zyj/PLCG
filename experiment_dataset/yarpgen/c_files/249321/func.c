/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249321
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */int) var_3)))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3))))) & (min((var_8), (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) ^ (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1920860033U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3612044657U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))))))) : (682922661U))))));
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_3])) == (arr_8 [i_4 + 3] [i_4 + 3] [i_4] [i_4 + 3]))))));
                                arr_13 [i_2] [i_3] [2ULL] [i_2] [i_2] [i_2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (((((var_0) * (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((short) 682922661U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) <= (((/* implicit */int) arr_10 [i_4 + 1] [i_2] [i_2] [i_0])))))) : (35180077121536LL))) << (((((/* implicit */int) ((short) max((var_16), (((/* implicit */int) var_15)))))) + (17206))))))));
                                var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_2 [0])) ? (var_16) : ((-(arr_6 [i_1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) ^ (((((/* implicit */int) arr_3 [i_1 - 2] [i_1])) & (((/* implicit */int) arr_3 [i_1 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [i_5] [i_5] [i_5] [i_5] [0U] = ((/* implicit */long long int) (((!(arr_10 [i_0] [i_2] [i_2] [i_2]))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0))) & (((((/* implicit */_Bool) arr_16 [(unsigned char)3] [i_1] [i_2] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) arr_6 [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2]))))) <= (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) arr_20 [6ULL] [i_0] [6ULL] [i_0] [i_0]))))))))));
                                var_24 -= ((/* implicit */int) min((((((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (var_10) : (var_6))) + (((/* implicit */unsigned long long int) ((unsigned int) var_7))))), (((/* implicit */unsigned long long int) ((signed char) ((arr_16 [1ULL] [i_1] [i_1] [(short)5]) != (var_8)))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [2U] [i_5]))))))))) & (var_9)));
                                var_26 = (-(var_8));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((var_8) << (((((/* implicit */int) arr_4 [i_1])) + (13174))))))) != (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_0 - 1]))) : (arr_16 [i_0] [i_0 + 1] [i_1 + 1] [i_1 - 2])))));
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_25 [i_0] [(short)8] [i_0 + 1] = (-(var_2));
                    arr_26 [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((~(arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))))), (((((/* implicit */unsigned long long int) var_5)) * (((unsigned long long int) arr_10 [i_0] [i_0 + 1] [i_7] [i_7]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */int) ((((arr_27 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) / (((/* implicit */long long int) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 2; i_9 < 10; i_9 += 3) 
                        {
                            arr_32 [i_0 - 1] [10LL] [i_0 - 1] [i_0 - 1] [i_9] = ((/* implicit */unsigned char) ((23) != (((/* implicit */int) (signed char)84))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_7] [i_9] [i_9] [i_1])) * (((/* implicit */int) arr_10 [i_1] [i_9] [i_9] [i_1]))));
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_30 |= ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 + 1])) ? (min((min((var_0), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_6 [i_0 - 1])))) : (max((((/* implicit */unsigned long long int) (-(var_12)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1]))) & (var_0))))));
                    arr_35 [(short)9] [i_10] [i_10] = ((/* implicit */short) (~(arr_34 [i_1] [i_10])));
                    arr_36 [i_0] [i_1] = ((/* implicit */short) arr_14 [i_1] [i_10]);
                    arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_14 [i_10] [i_0 - 1])) != (((/* implicit */int) arr_14 [i_0 - 1] [i_1])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        var_31 ^= ((/* implicit */long long int) arr_41 [i_0] [i_0] [i_11] [i_11]);
                        arr_42 [i_0 + 1] [7ULL] [i_11] [i_12] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_12]);
                        var_32 -= ((/* implicit */signed char) arr_31 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_11] [i_11] [i_1 - 2]);
                    }
                    arr_43 [(signed char)7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0 + 1] [i_0 + 1] [4] [i_0 + 1])) - (var_11)));
                    var_33 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_38 [i_0] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_1 + 1] [i_11] [i_11])))))));
                }
                var_34 *= ((/* implicit */signed char) ((((((((arr_27 [i_0] [i_0] [i_1 - 2]) | (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) + (9223372036854775807LL))) >> (((((((/* implicit */unsigned long long int) arr_28 [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_1 - 1])) ^ (var_10))) - (2756319038059431824ULL))))) | (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_1 - 2] [i_0] [i_1]))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) >> (((var_1) - (2828962018U))))) != (var_16)));
}
