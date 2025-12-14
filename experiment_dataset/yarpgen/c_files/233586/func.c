/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233586
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_16))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_1 [i_0]))) / ((+(1006632960)))));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41059)) ? (((/* implicit */int) (signed char)64)) : (arr_0 [(unsigned short)16] [1U])));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(short)12])) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))))))));
    }
    var_24 ^= ((/* implicit */_Bool) var_11);
}
