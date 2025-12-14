/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54832
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
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_15)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 71655613)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (406338797194783155ULL))) : (((/* implicit */unsigned long long int) (~(1475802830))))))));
                var_19 = (((+(arr_1 [i_0]))) + (((/* implicit */unsigned int) max((-71655614), ((+(((/* implicit */int) var_12))))))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_0))))) * ((+(((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)222))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) var_12))))))))));
}
