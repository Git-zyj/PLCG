/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228743
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
    var_17 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) var_13))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) var_13))))), (max((var_10), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (short)-16435)) : (((/* implicit */int) (signed char)101))))) ? (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(unsigned short)12]) : (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (~(arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_0 [(short)9]))) : (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) var_3);
    }
}
