/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40100
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((var_0) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(70931694131085312ULL)));
    }
    var_16 = ((/* implicit */short) (~((~((~(244130426)))))));
}
