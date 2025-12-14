/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239387
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)20))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((_Bool)0), ((_Bool)0)));
                arr_7 [i_0] [i_1] &= ((/* implicit */short) (+(var_8)));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (short)12082);
    var_16 = ((/* implicit */int) var_12);
}
