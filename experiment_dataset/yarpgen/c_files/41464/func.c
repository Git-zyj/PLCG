/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41464
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0 - 1] [i_0] [i_0] = ((((/* implicit */_Bool) 821774921554653936ULL)) ? (var_16) : (20ULL));
                var_17 = (~(arr_0 [i_0 - 2] [i_0]));
            }
        } 
    } 
    var_18 = max(((-(var_5))), (var_13));
    var_19 -= ((((/* implicit */_Bool) (-(821774921554653936ULL)))) ? (var_10) : (min((2579068184261128259ULL), (17624969152154897705ULL))));
}
