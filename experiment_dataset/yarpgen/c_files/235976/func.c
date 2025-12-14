/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235976
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_2 [i_0])))))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-9544)) & (4095))), (((/* implicit */int) ((signed char) var_12)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) var_9)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_4);
}
