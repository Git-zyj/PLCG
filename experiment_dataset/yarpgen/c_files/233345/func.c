/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233345
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
    var_11 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 33554431LL)), (1008806316530991104ULL))), (var_6)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) - (((((/* implicit */_Bool) 17437937757178560512ULL)) ? (2287828610704211968LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42891)))))));
                var_13 = ((/* implicit */long long int) (((-(max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_6))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))), (max((var_2), (((/* implicit */unsigned long long int) var_9))))))));
                arr_6 [i_0] [i_0] [(signed char)16] = ((/* implicit */unsigned short) max((((unsigned long long int) var_4)), (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
}
