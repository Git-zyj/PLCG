/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236230
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 - 4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) & (((/* implicit */int) var_4))))) | (var_5)))) ? (((/* implicit */int) var_15)) : (((var_8) ? (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) var_3))))));
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((var_15) || (((/* implicit */_Bool) var_1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_17))));
}
