/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53361
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
    var_17 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_2) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((var_16) != (((/* implicit */int) var_9))))))))));
    var_18 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)0)))) ? (((((/* implicit */int) (signed char)3)) >> (((/* implicit */int) (signed char)0)))) : (max((var_10), (var_10)))))));
    var_19 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) ^ (((/* implicit */int) (_Bool)0))))) ? (19LL) : (((/* implicit */long long int) 1257317465)))), (((/* implicit */long long int) (unsigned short)45335))));
                var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20185))) - (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
}
