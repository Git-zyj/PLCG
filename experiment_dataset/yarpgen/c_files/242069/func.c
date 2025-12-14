/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242069
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
    var_13 = ((/* implicit */signed char) max((var_13), (((signed char) (signed char)2))));
    var_14 = var_5;
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) (signed char)0))))) | (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-110)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((signed char) (signed char)119);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
}
