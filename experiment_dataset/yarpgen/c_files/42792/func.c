/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42792
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [(short)0] [i_1])), ((+(3949426947U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (arr_4 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 - 1])))));
                    arr_9 [i_1] [i_1] [i_2 - 1] = (+(2147479552U));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((2147479552U) > (((/* implicit */unsigned int) var_2)))) ? (min((var_9), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((unsigned int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (min((2147479579U), (var_6))) : (((/* implicit */unsigned int) var_8))))));
}
