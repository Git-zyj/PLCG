/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54118
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
    var_14 = ((/* implicit */_Bool) 14ULL);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) 14ULL);
        arr_3 [i_0 + 1] = arr_0 [i_0];
    }
}
