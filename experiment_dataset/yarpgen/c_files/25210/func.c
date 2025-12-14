/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25210
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
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((int) var_1)), (((int) var_16)))))));
            }
        } 
    } 
}
