/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30382
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_1 [i_0])))) || (((arr_0 [i_1]) < (arr_0 [i_1])))));
                arr_6 [i_1] [i_0] &= ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_2)), (6009252675674468115ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (max((((/* implicit */int) var_4)), (((((/* implicit */int) var_1)) - (((/* implicit */int) (short)3302)))))) : (((/* implicit */int) var_1))));
}
