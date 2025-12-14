/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242074
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_15) + (var_2))))));
                var_19 = ((/* implicit */short) var_9);
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)15))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                var_22 = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_0))))) <= (((/* implicit */int) var_8)))))));
}
