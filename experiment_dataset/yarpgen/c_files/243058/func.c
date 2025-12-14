/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243058
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) arr_2 [0ULL])) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) var_11)))) : (max((var_2), (((/* implicit */unsigned long long int) var_11))))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (var_11)))) ? (var_15) : (((unsigned long long int) var_0)))))));
    }
    var_19 = var_1;
}
