/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241868
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 1]))), (((/* implicit */long long int) (short)-7546))));
                arr_5 [(short)6] [i_1] [i_1 + 1] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (short)-3273);
    var_13 = ((/* implicit */unsigned int) var_8);
}
