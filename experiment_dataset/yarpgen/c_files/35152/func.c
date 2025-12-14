/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35152
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
    var_20 = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_14))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) ((short) arr_0 [i_0] [i_0]))))) : ((~(((((/* implicit */_Bool) 5990428011876343040ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_18))))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) + (5990428011876343040ULL))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
        var_22 = ((/* implicit */unsigned long long int) var_13);
    }
}
