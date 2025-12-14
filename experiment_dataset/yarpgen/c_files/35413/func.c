/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35413
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((unsigned int) 3612342179U))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((long long int) 9223372036854775807LL)));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_14);
}
