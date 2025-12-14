/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47938
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (_Bool)1);
                var_13 *= ((/* implicit */_Bool) 2023671070U);
                var_14 = ((/* implicit */long long int) 2023671076U);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_1);
}
