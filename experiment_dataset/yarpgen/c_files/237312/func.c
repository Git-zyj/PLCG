/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237312
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = var_4;
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)17646)) ? (((/* implicit */int) (unsigned short)32305)) : (((/* implicit */int) (unsigned short)32285)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))));
        var_14 = var_3;
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (var_2)));
}
