/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227641
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) ((_Bool) var_9));
        arr_4 [i_0] &= (!(((/* implicit */_Bool) var_8)));
    }
    var_18 = var_4;
}
