/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28776
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-25651)) : (((/* implicit */int) var_13)))), ((~(((/* implicit */int) var_1))))))) ? (-357690437) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) var_12)) : (25165824U))) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) : (max((((/* implicit */unsigned int) -26)), (arr_2 [i_0 - 1] [i_1 - 1]))))), (((/* implicit */unsigned int) var_12))));
            }
        } 
    } 
}
