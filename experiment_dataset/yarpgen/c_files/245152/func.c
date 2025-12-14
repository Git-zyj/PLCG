/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245152
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
    var_15 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((arr_4 [i_0] [(short)1]), (((/* implicit */unsigned short) var_4))));
                var_17 = max((max((var_12), (var_8))), (((((/* implicit */int) arr_4 [i_0] [i_1 + 2])) / (((/* implicit */int) arr_4 [(_Bool)1] [i_1 + 2])))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1])))))) * (((/* implicit */int) min((((((/* implicit */unsigned int) 0)) < (0U))), (((_Bool) arr_2 [i_1] [i_0])))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) >> ((((-(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2])))) + (150)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [(signed char)9] [i_1] [2U] [i_3] = max((((/* implicit */unsigned int) var_0)), (var_9));
                                var_19 *= ((/* implicit */unsigned short) arr_1 [i_0]);
                                arr_15 [i_3] [i_3] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((arr_2 [i_1 + 3] [i_1]) - (arr_2 [i_1 - 1] [i_1 + 3])));
                    arr_20 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 3]))) < (((unsigned int) arr_17 [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -621904350)), (var_9)))) : (min((((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6])), (arr_8 [i_0] [i_1 - 1] [i_1 + 3] [i_6])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_4 [i_7 + 1] [i_1 - 1]);
                                var_22 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)57873)) - (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_6] [i_8] [(unsigned char)5] [i_8]))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) && (((/* implicit */_Bool) (signed char)-64))));
                                var_24 = ((((/* implicit */_Bool) ((int) arr_23 [i_0] [i_1 - 1] [i_7] [i_8]))) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_10 [i_0] [15U] [i_6] [i_8])));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_7] [i_8])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 1])) ? (arr_22 [i_0] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (1253837682) : (((/* implicit */int) (unsigned short)7662))));
                    arr_32 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((2011044868U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1])))));
                }
                for (int i_9 = 1; i_9 < 14; i_9 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) var_10);
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_29 [i_9] [i_9 + 3] [(unsigned short)15] [i_9]), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (4294967295U))))))) ? (((((/* implicit */_Bool) (+(arr_24 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0] [i_0])))) ? (((unsigned int) (unsigned char)165)) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)165)), (0)))))) : (((unsigned int) arr_30 [i_9 + 2]))));
                    var_28 = ((/* implicit */_Bool) ((unsigned int) min((min((0U), (arr_3 [i_0]))), (arr_11 [i_0] [i_9] [i_9 + 1] [i_9 + 1]))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_3))))))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)));
    var_31 |= ((/* implicit */long long int) var_3);
}
