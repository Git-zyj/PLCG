/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235540
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */short) var_10)), (min((((/* implicit */short) (signed char)-100)), (arr_3 [21U] [i_0])))))), (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (0))))))))));
                var_20 = ((/* implicit */int) min((var_20), (((((((/* implicit */_Bool) 9186022U)) ? (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_12)) + (9289))))) : (((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned short)6457))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
}
