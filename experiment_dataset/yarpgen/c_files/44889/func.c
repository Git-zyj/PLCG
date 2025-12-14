/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44889
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
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)0))))) ? (var_16) : ((+(3LL)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) var_13);
        arr_2 [i_0] &= ((/* implicit */unsigned int) max(((~(max((var_16), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) (+(var_15))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
        var_22 = ((/* implicit */long long int) (~(arr_0 [15ULL] [15ULL])));
        var_23 = (+(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_18))));
}
