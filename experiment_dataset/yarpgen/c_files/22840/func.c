/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22840
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */int) var_7)) / (((/* implicit */int) var_7))))))) ? (((((/* implicit */int) var_9)) >> (((((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)122)))) - (113))))) : (((min((var_15), (var_9))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_15))))));
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)-70), (((/* implicit */signed char) arr_5 [i_0])))))));
                var_18 *= max((min((((/* implicit */signed char) var_4)), (var_10))), (max((var_12), (var_7))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) ((((/* implicit */int) min((min((var_11), (((/* implicit */signed char) var_14)))), ((signed char)63)))) + (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))) == (((/* implicit */int) (signed char)49)))))));
    var_20 |= ((/* implicit */_Bool) var_8);
}
