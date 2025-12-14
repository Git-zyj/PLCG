/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233750
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
    var_19 = min((min((max((var_9), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2071155422)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (-(max((((/* implicit */int) var_16)), (var_1)))))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) arr_3 [i_1] [i_0])), (arr_2 [i_0] [i_0]))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
                var_22 = min((((/* implicit */signed char) (_Bool)1)), ((signed char)-26));
            }
        } 
    } 
}
