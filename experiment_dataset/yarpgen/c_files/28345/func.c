/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28345
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
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_12)))))) ? (min((2147483646U), (((/* implicit */unsigned int) arr_1 [i_1 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 2]))))))));
                var_18 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */long long int) var_3)), (((var_7) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) var_0))));
}
