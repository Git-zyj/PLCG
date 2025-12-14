/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222724
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
    var_15 *= (((~((+(((/* implicit */int) var_9)))))) >= (((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) var_12)) - (146)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (var_0))))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (max((((/* implicit */unsigned int) var_11)), (var_3)))))));
            }
        } 
    } 
}
