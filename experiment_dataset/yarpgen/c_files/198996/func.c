/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198996
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
    var_14 = ((/* implicit */int) (+(min((min((var_2), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-212332472))))))));
    var_15 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) var_9);
                arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((min((var_10), (((/* implicit */int) var_4)))) + (2147483647))) << (((var_8) - (15178491450135716599ULL)))))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_9))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_6)))))))));
            }
        } 
    } 
}
