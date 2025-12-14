/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52655
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
    var_17 |= (+(((/* implicit */int) var_10)));
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((short) var_3))) + (2147483647))) << (((((((/* implicit */int) var_16)) + (3931))) - (12)))));
        arr_4 [i_0] = ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (short)-29095)));
        var_19 ^= ((/* implicit */short) var_12);
        arr_5 [i_0] = ((/* implicit */short) ((var_4) % (((/* implicit */unsigned int) var_3))));
    }
    var_20 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_3)) : (var_6))), (((/* implicit */unsigned int) max((var_5), (var_3)))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
}
