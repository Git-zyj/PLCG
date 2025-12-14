/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229127
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
    var_19 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_4);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62623))) - (234153772U)));
                        }
                    } 
                } 
                arr_14 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((var_9) >> (((((var_7) >> (((((/* implicit */int) (unsigned char)132)) - (119))))) - (243469U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (arr_12 [i_0] [i_1] [12LL] [i_0] [i_1 + 1] [i_1])))))));
                arr_15 [i_1] = var_9;
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)113))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2860271436U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))))))))))));
                    var_22 = ((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << ((((((((-9223372036854775807LL - 1LL)) - (-9223372036854775780LL))) + (55LL))) - (27LL)))));
                    arr_18 [i_4] [i_1] = arr_11 [i_4] [i_1] [i_0] [i_0];
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 3]))) : (var_1))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_1] [i_0] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))));
                                arr_28 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_7] [i_6] [i_5] [(short)8] [2ULL] [i_0])) >= (((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_5] [i_6] [i_6] [i_7]))));
                            }
                        } 
                    } 
                    var_25 = var_8;
                    arr_29 [i_0] [i_5] [i_1] [i_1] = arr_4 [i_0] [(short)22] [15LL];
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_34 [3LL] [i_1] [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 2]);
                                arr_35 [i_8] [i_1] [i_8] [i_8] [6LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_12)) != (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_8] [i_1 + 2] [i_5] [i_8]) : (((/* implicit */unsigned long long int) 779554383))))));
                                arr_36 [i_9] [i_1] [i_8] [i_5] [i_1] [i_1] [i_0] = 9223372036854775807LL;
                                var_26 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 2; i_10 < 23; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = min((((((((/* implicit */_Bool) arr_19 [i_0] [i_11] [i_10 - 1] [i_11])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [21LL] [i_1] [i_1] [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_11]))))), ((-9223372036854775807LL - 1LL)));
                        var_28 = ((/* implicit */_Bool) ((short) arr_16 [i_0] [i_0] [i_0]));
                        arr_42 [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_10] [i_10] [i_11]);
                    }
                    var_29 = ((/* implicit */unsigned long long int) min((max((-5918033472435171441LL), (arr_6 [i_0] [i_0] [i_10 + 1]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_10 + 2])) ? (((/* implicit */long long int) 1U)) : (arr_6 [i_0] [i_1] [i_10 + 2])))));
                }
            }
        } 
    } 
}
