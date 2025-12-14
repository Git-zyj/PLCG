/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48992
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
    var_17 &= ((/* implicit */_Bool) (+(max((var_3), (274877906943LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */_Bool) (short)13871);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4035422902U)) ? (arr_0 [i_0] [i_0]) : (-847882238)));
    }
}
