/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222118
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1]))) : (var_13))), (((((/* implicit */_Bool) min((15076871750537454614ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) var_9)))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max((arr_0 [i_0 - 1] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0 + 1])), (((((/* implicit */int) arr_3 [i_0 + 1] [i_1])) * (((/* implicit */int) (short)20382)))))))));
            }
        } 
    } 
    var_16 = var_10;
    var_17 = ((/* implicit */unsigned long long int) var_2);
}
