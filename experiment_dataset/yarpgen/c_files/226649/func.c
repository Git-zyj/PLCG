/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226649
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) ((var_8) * (-1LL))))), (((((var_5) + (9223372036854775807LL))) >> (((((unsigned int) var_0)) - (26846U)))))));
    var_20 *= ((/* implicit */unsigned short) var_5);
    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10))) ^ (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_10), (((/* implicit */unsigned long long int) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1 + 2] = ((/* implicit */_Bool) (((-(var_11))) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) + (2287)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 5LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [(short)20])))))) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_2 + 1])))))));
                            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((-2LL), (((/* implicit */long long int) arr_10 [i_1] [3U] [3U] [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 1] [i_1])) : (((/* implicit */int) (unsigned short)64892)))), (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_3] [(unsigned short)8] [5LL])) ? (((/* implicit */int) arr_10 [i_1] [i_3] [i_2 + 1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)56))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
