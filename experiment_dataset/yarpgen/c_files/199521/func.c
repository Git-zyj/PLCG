/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199521
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    var_11 = ((/* implicit */short) var_5);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2260553261U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
}
