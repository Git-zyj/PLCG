/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192081
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
    var_13 = ((/* implicit */short) max((((int) (short)-22992)), (((/* implicit */int) (short)-23016))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) -1020565770));
        var_14 = (signed char)103;
    }
}
