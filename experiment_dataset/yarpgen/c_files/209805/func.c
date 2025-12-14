/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209805
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) - (var_4)))) && (((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10))))))))));
        var_15 = ((/* implicit */unsigned short) ((var_10) > (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4))))) >> (((var_4) - (1446765107)))))));
        var_16 = var_7;
    }
    var_17 = ((/* implicit */unsigned long long int) var_0);
}
