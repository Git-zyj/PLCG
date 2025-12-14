/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243279
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [5] [i_0] = ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */short) (-(((var_15) & (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
    }
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) && (((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_15)))))) ? (((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) - (((/* implicit */int) var_1)))) + (2147483647))) >> (((min((1683562443U), (4294967295U))) - (1683562438U)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_19)) > (var_10))))) : (var_18)))));
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_18)), (var_15)));
    var_22 -= (~(((/* implicit */int) var_16)));
}
