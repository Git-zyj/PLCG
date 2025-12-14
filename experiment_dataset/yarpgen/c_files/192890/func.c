/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192890
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
    var_18 = (~((+(((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_19 |= ((/* implicit */signed char) var_17);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (var_2)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_17)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */int) (signed char)-91)) / (1335521695))) : (((/* implicit */int) var_3))));
        var_21 = ((/* implicit */signed char) ((short) var_5));
    }
}
