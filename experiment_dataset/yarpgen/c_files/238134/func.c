/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238134
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)-112)) || (((/* implicit */_Bool) var_4))))), (((short) var_1))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0 - 1])) : (-6881799997937270424LL)))));
        var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1 - 2]);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)-66))));
    }
}
