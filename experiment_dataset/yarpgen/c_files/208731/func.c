/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208731
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
    var_18 = var_8;
    var_19 -= ((/* implicit */short) ((var_7) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0 - 1] [i_1]);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */unsigned int) arr_4 [23U] [i_1 - 3] [i_0])) ^ ((((-(arr_0 [i_0]))) << (((((((/* implicit */long long int) arr_0 [i_1])) + (arr_3 [i_0] [i_0]))) - (123075090442181583LL))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
}
