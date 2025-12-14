/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48285
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
    var_13 &= ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [4U] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))));
        var_14 = ((/* implicit */int) arr_2 [i_0 + 1]);
    }
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_5)));
    var_16 &= ((/* implicit */unsigned long long int) ((((var_4) >> ((((+(((/* implicit */int) var_3)))) - (155))))) / (((/* implicit */long long int) var_7))));
}
