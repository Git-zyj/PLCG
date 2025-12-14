/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49350
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_16);
                var_18 = ((/* implicit */unsigned char) arr_2 [i_1 + 1] [i_1 + 1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (2147483630)));
}
