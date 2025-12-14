/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4550
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) != (4294967277U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))) : (((19U) | (arr_2 [i_2]))))) * (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)174)) << (((18446744073709551615ULL) - (18446744073709551604ULL))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned char) ((((1481939008U) | (18U))) > (((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_2 + 3] [i_1] [i_0])) : (((/* implicit */int) arr_16 [i_1] [i_2 + 3] [i_3])))))))));
                                var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_13)), ((short)-22686)))), (70368710623232ULL))), (((/* implicit */unsigned long long int) ((long long int) min((var_5), (((/* implicit */unsigned short) (short)-4000))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-100)), (var_11)))) ? (min((((/* implicit */unsigned int) arr_15 [10] [i_1] [10] [i_3] [i_4])), (arr_8 [i_0] [i_0]))) : (arr_7 [i_1] [i_1] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) var_5))))), (max((((/* implicit */unsigned int) (unsigned char)58)), (2867185819U)))))) : (((unsigned long long int) arr_6 [i_2 - 3] [i_1 - 2]))));
                                arr_17 [i_4] = ((/* implicit */unsigned short) max((min((arr_5 [i_1 + 3]), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (var_2))))), (((((/* implicit */_Bool) arr_1 [i_2 + 3] [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_2 + 2] [i_2 + 2] [i_1 + 2] [i_1] [i_4])) : (((/* implicit */int) arr_1 [i_2 - 2] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 70368710623237ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (signed char)-1);
}
