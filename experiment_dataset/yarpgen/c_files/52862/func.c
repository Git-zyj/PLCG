/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52862
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
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) var_13);
        arr_2 [i_0 - 3] = ((/* implicit */int) 3429695064035348975ULL);
        var_16 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
    }
}
