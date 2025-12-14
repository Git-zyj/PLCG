/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245932
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
    var_16 = ((/* implicit */_Bool) ((int) var_11));
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(var_1))))) / (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (27LL))) : (((/* implicit */long long int) var_14))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) min((((max((var_15), (arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((10470970098205366364ULL) | (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) var_3))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (7975773975504185246ULL)));
    }
}
