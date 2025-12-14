/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220031
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
    var_15 = ((/* implicit */short) max((var_15), (((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) 4294967295U))) : (max((((/* implicit */long long int) var_9)), (var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-5)) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) (unsigned short)57192)) : (((/* implicit */int) var_14)))))) : (((((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (128402410))) + (2147483647))) << (((max((((/* implicit */long long int) (signed char)-1)), (3397480655826974544LL))) - (3397480655826974544LL)))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) != (min((((/* implicit */unsigned long long int) 1U)), (arr_1 [i_1] [i_0])))));
            }
        } 
    } 
}
