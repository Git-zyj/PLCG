/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46407
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [15LL] [i_0] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_2))))) || (((/* implicit */_Bool) var_9))))) - (((((/* implicit */_Bool) min((var_17), (var_17)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_14)) - (((/* implicit */int) var_14))))))));
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_13))))))));
                arr_5 [(short)6] [i_0] [i_0] = ((/* implicit */long long int) var_15);
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((((/* implicit */long long int) var_14)), (((((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (((long long int) var_1))))));
}
