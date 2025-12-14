/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25902
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
                var_19 -= ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 -= ((/* implicit */int) var_3);
}
