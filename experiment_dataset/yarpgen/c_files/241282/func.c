/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241282
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
    var_13 = ((/* implicit */short) max((var_9), (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = (short)-25590;
        var_15 = ((/* implicit */short) (signed char)6);
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((max(((short)-25590), ((short)-25602))), (max(((short)-25620), (((/* implicit */short) var_6))))));
        var_17 = ((/* implicit */signed char) max((max(((short)25589), (((/* implicit */short) (signed char)-33)))), (max((((/* implicit */short) arr_2 [i_1 + 3])), ((short)25423)))));
    }
}
