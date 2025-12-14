/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50228
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
    var_20 = ((((/* implicit */_Bool) ((((9223372036854775807LL) / (9223372036854775807LL))) + (((((/* implicit */_Bool) var_12)) ? (5749644548365038615LL) : (var_18)))))) ? (((((/* implicit */_Bool) min((-5749644548365038615LL), (406250302222424388LL)))) ? (min((var_8), (var_19))) : (var_4))) : (var_11));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) (!(min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16)))), ((!(((/* implicit */_Bool) 9223372036854775807LL))))))));
        arr_2 [i_0] [i_0] = min((var_7), (4712758879061610651LL));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) ((1447159573150916956LL) >= (-6426141907489087641LL))))))) ? (((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (var_18) : (arr_0 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775789LL)) && (((/* implicit */_Bool) -9223372036854775790LL)))))))) : ((+(max((arr_0 [i_0]), (9223372036854775786LL))))));
    }
    var_22 = var_3;
    var_23 = max((9223372036854775807LL), (7939011947749444340LL));
}
