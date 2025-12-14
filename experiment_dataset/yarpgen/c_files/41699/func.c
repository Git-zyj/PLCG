/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41699
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])));
        var_16 = ((/* implicit */short) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0]))))) : (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)4]))) : (arr_1 [i_0] [i_0])))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
}
