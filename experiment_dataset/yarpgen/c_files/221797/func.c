/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221797
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
    var_16 = ((/* implicit */signed char) max((var_16), (var_11)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 |= ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 1] [i_2] [i_1])) ? (((/* implicit */int) ((signed char) (signed char)0))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-29))))) ? (((/* implicit */int) min(((signed char)-48), ((signed char)111)))) : (((/* implicit */int) max((arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1]), (var_5))))));
                }
            } 
        } 
    } 
}
