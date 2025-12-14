/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215259
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = (_Bool)1;
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (_Bool)1)))) ? (max((arr_1 [i_0]), (arr_1 [(short)9]))) : (((/* implicit */int) ((short) var_11)))))))));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), ((signed char)16)))) ? ((+(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_9))))))) ? (((((((/* implicit */int) (signed char)32)) * (((/* implicit */int) var_13)))) * ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127)))))) : (((((/* implicit */int) max((var_1), (((/* implicit */signed char) var_6))))) * (((/* implicit */int) var_13))))));
    var_22 = (~(((((/* implicit */_Bool) (signed char)15)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_4)))))));
}
