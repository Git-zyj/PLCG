/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227569
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
    var_12 = ((/* implicit */long long int) (+((((+(var_7))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (var_6)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) ((267386880U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                var_14 |= ((/* implicit */_Bool) min((((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_0 [i_0 - 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : ((~(var_0)))))) ? (max((((/* implicit */int) min((var_11), (var_11)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_5)))))) : ((~(((/* implicit */int) var_3))))));
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
}
