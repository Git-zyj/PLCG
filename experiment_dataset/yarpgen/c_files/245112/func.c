/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245112
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
    var_18 = min((var_9), (((signed char) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (4294967293U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) var_11);
                var_20 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_0 - 2]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max(((signed char)66), (((/* implicit */signed char) (_Bool)1))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_5))))));
    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((2U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))))) ^ (((/* implicit */int) var_17))))) ? (min((var_5), (((/* implicit */long long int) (-(3U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
