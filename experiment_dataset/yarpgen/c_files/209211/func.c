/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209211
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 -= max((((/* implicit */int) var_15)), ((~(((/* implicit */int) arr_0 [i_1])))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_7)) : (var_14)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)32512)), (18446744073709551600ULL))) : (min((0ULL), (18446744073709551615ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -5639873238012236289LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60646))))) : (var_10)));
    var_21 |= ((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_15))));
}
