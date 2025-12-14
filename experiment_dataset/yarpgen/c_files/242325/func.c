/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242325
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_7) != (var_0))))))) ? (((/* implicit */int) var_11)) : (((var_5) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (var_16)))));
    var_18 = ((/* implicit */unsigned long long int) min((1930297326), (((((/* implicit */_Bool) min((-1041915082), (((/* implicit */int) var_15))))) ? (var_6) : (((/* implicit */int) var_5))))));
    var_19 ^= ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        var_20 = (unsigned short)35267;
        arr_2 [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30269)) ? (((/* implicit */int) (unsigned short)35276)) : (((/* implicit */int) (unsigned short)49950))));
    }
}
