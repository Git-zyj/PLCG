/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245119
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        var_16 ^= ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        var_18 = ((/* implicit */int) arr_3 [i_1]);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
        var_20 = ((/* implicit */unsigned int) arr_3 [(unsigned short)3]);
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_7))));
    var_22 ^= ((/* implicit */unsigned short) var_11);
}
