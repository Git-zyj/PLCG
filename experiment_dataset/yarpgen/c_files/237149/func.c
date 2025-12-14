/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237149
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 ^= max((((/* implicit */unsigned int) max((((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (2026146974U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1]))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_3 [4LL] [i_1] [i_1 - 1]))))) ? (((max((var_0), (((/* implicit */unsigned long long int) var_9)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967295U)) / (-1212947991439967053LL))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (~(((/* implicit */int) (_Bool)1))))));
}
