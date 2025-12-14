/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47654
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [0LL] [i_0] [i_1] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) (short)-4046))))), (4282507115U));
                var_17 = ((/* implicit */long long int) min((var_17), (((long long int) max((((/* implicit */short) var_13)), (arr_3 [i_1 - 2]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 452390264U)) ? (max((var_11), (var_1))) : (max((-4054052346534998182LL), (((/* implicit */long long int) var_9))))))) ? (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775803LL) : (-9223372036854775790LL))), (((((/* implicit */_Bool) -2948950730472716950LL)) ? (9223372036854775802LL) : (9223372036854775798LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (min((var_12), (((/* implicit */long long int) (short)-29224))))))) ? (max((((((/* implicit */_Bool) 5933463317750589232LL)) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29234))))), (((long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3030566607U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((1042451808U), (((/* implicit */unsigned int) var_14)))))))));
    var_20 = ((/* implicit */long long int) var_16);
}
