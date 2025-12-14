/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35249
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3560))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_14)))))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (+(max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))) == (min((6058624850815454708LL), (((/* implicit */long long int) -1450194146)))))))) >= ((~(arr_0 [i_0])))));
    }
}
