/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42956
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
    var_18 = ((((/* implicit */_Bool) var_6)) ? (var_7) : (((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551609ULL)))));
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? ((+(var_1))) : (max((var_15), (((/* implicit */unsigned long long int) var_0)))))) >= ((+(6982271845702571372ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) (~((-(max((1ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        arr_4 [i_0] [13] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) var_16)) : (var_10)))), ((~(18446744073709551593ULL)))))));
    }
}
