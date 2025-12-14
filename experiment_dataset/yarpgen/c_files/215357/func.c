/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215357
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
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_19 = (+((-(((/* implicit */int) var_4)))));
        var_20 = ((/* implicit */long long int) max((var_20), (var_15)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) arr_0 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 1]);
    }
}
