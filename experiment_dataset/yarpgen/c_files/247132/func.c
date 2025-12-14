/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247132
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
    var_13 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (2971980268553962544ULL) : (var_7))), (var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 &= ((unsigned long long int) var_11);
        var_15 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (0ULL) : (arr_1 [i_0]));
    }
    var_16 = ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((var_2) / (((var_0) + (var_3))))) : ((~(((unsigned long long int) 3836038544041453172ULL)))));
}
