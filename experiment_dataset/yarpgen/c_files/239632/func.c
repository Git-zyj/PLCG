/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239632
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
    var_20 = (-(((/* implicit */int) var_0)));
    var_21 = ((/* implicit */unsigned long long int) var_18);
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_19), (var_2)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (short)-16548)))));
                var_24 = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
}
