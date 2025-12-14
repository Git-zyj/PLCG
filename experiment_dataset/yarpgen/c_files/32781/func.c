/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32781
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
    var_15 *= (~(max(((~(((/* implicit */int) var_5)))), (var_14))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((~(arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (var_1)))))));
    }
    var_17 = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))), (var_1))), (((719503847U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
