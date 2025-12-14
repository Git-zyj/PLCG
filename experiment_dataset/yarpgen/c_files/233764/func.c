/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233764
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) ((min((var_1), (((/* implicit */unsigned long long int) var_0)))) >= (min((arr_0 [i_0] [i_0]), (var_8)))))) : (((/* implicit */int) ((signed char) min((15112417650297794386ULL), (var_12))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_6))));
        var_16 = min((((/* implicit */unsigned long long int) max((var_5), (var_5)))), (min((17391305066277857019ULL), (((/* implicit */unsigned long long int) (short)18967)))));
    }
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) 945684824U))))))), (((/* implicit */int) var_4))));
}
