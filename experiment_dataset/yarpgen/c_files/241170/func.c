/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241170
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
    var_13 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)25096))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)10))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_6))), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (var_6)))) : (var_11)))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [5U])))))))));
    }
    var_15 += ((/* implicit */_Bool) var_2);
}
