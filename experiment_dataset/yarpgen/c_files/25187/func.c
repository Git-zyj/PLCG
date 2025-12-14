/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25187
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
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((-(arr_2 [i_1 + 2])))));
                var_16 = ((/* implicit */signed char) arr_4 [i_1]);
            }
        } 
    } 
    var_17 = max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((-(7191230281572879657ULL))))));
}
