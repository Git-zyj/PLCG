/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192113
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned long long int) var_9);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(arr_1 [i_0] [(short)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    }
    var_20 = ((/* implicit */int) var_10);
    var_21 = var_16;
}
