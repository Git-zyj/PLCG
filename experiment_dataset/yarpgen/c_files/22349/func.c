/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22349
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_8)), (var_9))), (((/* implicit */long long int) var_1))))) ? (var_13) : (min((((((/* implicit */_Bool) (unsigned short)29186)) ? (((/* implicit */int) (unsigned short)29177)) : (((/* implicit */int) (unsigned short)13408)))), (((/* implicit */int) var_14))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 -= ((/* implicit */signed char) var_11);
        arr_3 [(_Bool)1] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29209)) / (((/* implicit */int) (unsigned short)36353))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))) ? (var_13) : (var_5)))));
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13392)) ? (((/* implicit */int) (unsigned short)29159)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (unsigned short)13403))))) * (var_13)));
    }
    var_18 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_10))));
}
