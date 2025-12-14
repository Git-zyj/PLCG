/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238630
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
    var_20 -= ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = arr_1 [2];
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) max((var_19), (((/* implicit */short) arr_2 [(signed char)11] [(signed char)11]))))) & (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
}
