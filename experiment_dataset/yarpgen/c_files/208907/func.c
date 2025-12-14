/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208907
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
    var_20 |= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (var_4)))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 += ((/* implicit */int) var_2);
                var_22 = ((/* implicit */unsigned char) arr_4 [i_1] [i_0]);
                arr_7 [i_0] [i_1 + 2] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned char) var_8)), (var_16)));
}
