/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35778
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                var_15 = var_0;
            }
        } 
    } 
    var_16 = ((((_Bool) max((var_2), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)))) && (((/* implicit */_Bool) var_12))))));
}
