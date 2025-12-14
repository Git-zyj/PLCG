/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32644
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (var_5)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-119))))) : (((((/* implicit */_Bool) (signed char)15)) ? (-1691049407739782153LL) : (((/* implicit */long long int) var_2)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
}
