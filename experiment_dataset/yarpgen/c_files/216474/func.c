/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216474
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 *= ((/* implicit */signed char) arr_0 [(signed char)7]);
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0]))) : (var_4)))) ? (((/* implicit */int) var_11)) : (var_12)))))));
        var_19 = min((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (var_4));
        var_20 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_0 [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_21 = ((/* implicit */short) var_16);
}
