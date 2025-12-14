/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207232
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_4 [i_0])))))), (min(((+(((/* implicit */int) arr_5 [i_2] [i_1] [(signed char)21] [i_0 + 3])))), (((/* implicit */int) var_16))))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */int) min((arr_2 [i_0 + 2]), (var_17)))), (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)43)))))))));
                }
            } 
        } 
    } 
    var_19 ^= var_0;
    var_20 = var_16;
}
