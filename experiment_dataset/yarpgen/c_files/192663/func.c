/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192663
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
    var_18 = ((/* implicit */short) (~(2900789724U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((+(arr_4 [i_0 - 1] [i_0] [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(short)10])))));
                var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((short) arr_2 [(short)10]))), (min((((/* implicit */unsigned long long int) var_9)), (var_5))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) - (var_7)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_16)))))))));
}
