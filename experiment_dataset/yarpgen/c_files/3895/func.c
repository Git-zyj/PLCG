/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3895
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_1 [i_0])))) ? (((/* implicit */int) max((var_19), (((/* implicit */short) arr_2 [11]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (var_14)))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_0 [i_0]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))))));
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (arr_1 [i_0])))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    }
}
