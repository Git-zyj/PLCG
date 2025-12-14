/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211937
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = (+(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1]))));
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-9223372036854775790LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) var_11)))));
}
