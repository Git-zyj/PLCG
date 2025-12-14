/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54319
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((67108863ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) max((var_3), (((/* implicit */int) var_11))))) : (((long long int) (_Bool)0)))) * (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_4)))), (var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_4))));
        var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_0 [i_0 - 1])) / (var_3))) : (((/* implicit */int) ((unsigned short) (_Bool)0)))));
    }
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073642442753ULL)))) ? (((/* implicit */long long int) var_10)) : (min((((/* implicit */long long int) var_7)), (var_9))))) * (((/* implicit */long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_7)))))));
}
