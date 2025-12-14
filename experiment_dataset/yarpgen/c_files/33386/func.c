/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33386
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
    var_13 = ((/* implicit */int) (_Bool)0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) -1344883345953299030LL);
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((-3130881571329903027LL) ^ (3130881571329903031LL)));
        arr_3 [i_0] = ((/* implicit */long long int) (+(2147483647)));
    }
    var_15 = ((/* implicit */_Bool) var_5);
}
