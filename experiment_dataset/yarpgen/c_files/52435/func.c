/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52435
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
    var_17 += ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_4);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                            {
                                arr_14 [i_1] = ((/* implicit */long long int) 412920422U);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_7 [0LL] [i_1 - 2]))) ? ((~(arr_7 [i_1 - 2] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_1])))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned int) var_8);
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 412920424U)) ^ (var_16)));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_17 [i_5] [i_5] [i_2] [i_5] [i_0])) != (((((/* implicit */unsigned long long int) arr_2 [i_5])) ^ (max((((/* implicit */unsigned long long int) 3882046884U)), (var_11))))))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_3] [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 1] [(unsigned short)0] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) 2287724302U)))) : (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((412920426U) ^ (((/* implicit */unsigned int) arr_5 [i_2] [i_1]))))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */long long int) var_9);
                                var_25 = ((/* implicit */unsigned char) ((var_5) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_1 - 3] [i_1 + 1] [1ULL] [5U])) << (((arr_9 [5U]) - (1257468467U))))))));
                            }
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_20 [i_0] [i_1] [i_1 - 2] [i_1 - 3] [i_3] [i_1 - 3]))) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [6LL])) >= (((/* implicit */int) var_0)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                            {
                                arr_23 [i_1] [3] [i_3] [i_3] [(unsigned short)3] [i_3] [i_3] = ((/* implicit */unsigned short) 4268186335614671241LL);
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((arr_9 [i_1 + 1]) == (arr_9 [i_1 + 1]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
