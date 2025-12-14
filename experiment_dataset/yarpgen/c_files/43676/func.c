/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43676
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
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = max((1716972953), (((/* implicit */int) (short)-13162)));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~(-1716972954)));
    }
}
