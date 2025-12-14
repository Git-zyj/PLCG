/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46443
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
    var_12 |= 1110582507635691136ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_13 = arr_2 [i_0 - 1];
        var_14 = 1110582507635691148ULL;
    }
}
