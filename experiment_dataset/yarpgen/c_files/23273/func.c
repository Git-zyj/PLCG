/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23273
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
    var_12 &= ((/* implicit */_Bool) ((var_0) ? (max((((/* implicit */int) var_1)), (((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))) : (max((((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))), (((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))));
    var_13 ^= max((var_6), (min((min(((_Bool)1), ((_Bool)1))), ((_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = arr_1 [i_0 - 1];
        var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [(_Bool)1]))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))));
    }
}
