/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218136
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((var_0), (((/* implicit */unsigned int) var_6))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_17)))))) : (((3269921244U) & (((/* implicit */unsigned int) -1206094586)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 = arr_3 [i_0] [i_0] [i_0];
                var_22 = ((/* implicit */unsigned long long int) ((unsigned int) 845888981U));
                var_23 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
