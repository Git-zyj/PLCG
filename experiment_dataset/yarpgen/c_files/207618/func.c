/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207618
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
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((((/* implicit */int) var_9)) + (76)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_0 [i_1] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_18))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) (short)-5261);
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_0);
    var_23 = ((/* implicit */short) var_7);
}
