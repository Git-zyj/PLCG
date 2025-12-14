/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216086
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
    var_20 = ((/* implicit */_Bool) ((max((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))))) << (min((((/* implicit */int) var_16)), (((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) (short)-15928))))))));
    var_21 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)15937)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_18)) + (((/* implicit */int) var_4)))) * (((/* implicit */int) var_9))))) : (var_15)));
}
