/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216564
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (max(((+(2161778413U))), (((/* implicit */unsigned int) arr_3 [i_0]))))));
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_1])), (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) var_2))));
}
