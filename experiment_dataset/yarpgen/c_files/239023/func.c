/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239023
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) 2147483647)))) : (((((/* implicit */_Bool) 7ULL)) ? (var_0) : (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) var_8)) : (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13879)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3840)))))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [16ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((arr_3 [i_0 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))) : (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [(signed char)2])) : (((/* implicit */int) arr_2 [20ULL])))))));
    }
}
