/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240986
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
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_15), (var_14))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))) & (((/* implicit */int) var_3))));
        arr_4 [(_Bool)1] = ((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_19)))) : (((/* implicit */int) arr_0 [(signed char)4])))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))));
    }
}
