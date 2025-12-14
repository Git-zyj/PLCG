/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243757
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
    var_17 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */long long int) var_11);
                arr_5 [i_0] [i_1] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
            }
        } 
    } 
}
