/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189728
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_14))))), (max((((/* implicit */long long int) (unsigned char)208)), (var_10)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_17))))));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
    }
    var_21 ^= ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_1)))))) & (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
