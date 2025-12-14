/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23116
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((-(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_2)))))))));
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_15 = ((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((arr_2 [i_0]) - (1248190025))));
    }
}
