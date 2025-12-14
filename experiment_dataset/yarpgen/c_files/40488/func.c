/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40488
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (max((4294967295U), (((/* implicit */unsigned int) ((int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23027))) / (14837366764776844080ULL)));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(short)5])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */int) var_2);
    var_17 = ((((/* implicit */_Bool) (((~(var_9))) % (var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))));
}
