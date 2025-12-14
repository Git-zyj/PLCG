/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234725
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
    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4152894198U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (min((((/* implicit */long long int) var_2)), (var_15)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) (signed char)61)));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((long long int) arr_0 [i_0])), (2058122088021710796LL)));
    }
}
