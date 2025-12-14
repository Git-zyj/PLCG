/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51596
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
    var_12 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 &= arr_1 [i_0];
        var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) (short)22983)) > (856893653)))));
    }
    var_15 |= (((~(((unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) (~(var_11)))));
}
