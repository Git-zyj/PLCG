/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51416
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_2);
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */signed char) var_4);
}
