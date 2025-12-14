/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209591
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 4095ULL);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(690192398)));
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((unsigned long long int) 3088895526971122053ULL)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))) ? (max((max((((/* implicit */long long int) (signed char)-121)), (-4037743472464326836LL))), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_17))));
}
