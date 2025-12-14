/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53656
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
    var_20 -= ((short) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = max((((short) arr_0 [i_0] [i_0])), (arr_1 [i_0]));
        var_21 = ((/* implicit */short) min((var_21), (arr_1 [i_0])));
        var_22 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_5)))));
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((((/* implicit */int) var_16)) + (18829))) - (8)))));
}
