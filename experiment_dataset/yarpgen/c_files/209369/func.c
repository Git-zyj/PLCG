/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209369
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
    var_12 += ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))) ? ((+(var_10))) : (max((((/* implicit */unsigned long long int) var_7)), (var_10)))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -484133194)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5645)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 &= arr_0 [i_0] [i_0];
        var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_16 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_17 += ((/* implicit */unsigned long long int) var_3);
    }
}
