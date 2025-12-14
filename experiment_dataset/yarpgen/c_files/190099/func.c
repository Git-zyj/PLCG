/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190099
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
    var_15 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_2))));
                var_17 = (+(((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))));
            }
        } 
    } 
}
