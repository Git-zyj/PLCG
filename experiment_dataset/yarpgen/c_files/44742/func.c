/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44742
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 2127158815U)) ? (2127158834U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [3ULL] [i_1] [i_2] [i_2] [i_1] [3ULL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) + (((/* implicit */unsigned long long int) max((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))), (var_10))))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 63U)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)(-32767 - 1)))));
                            var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_2))) - (3099U)))));
                        }
                    } 
                } 
                arr_12 [(short)9] [(short)9] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_0)), (var_10))), (((/* implicit */long long int) ((var_11) > (var_9))))));
            }
        } 
    } 
}
