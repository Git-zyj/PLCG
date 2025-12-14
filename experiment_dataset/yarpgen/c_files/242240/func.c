/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242240
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((var_6), (var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_0 [i_0]))) - (arr_0 [i_0])));
        var_14 &= ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        var_15 = ((unsigned char) arr_0 [i_0]);
        var_16 -= ((/* implicit */unsigned char) 4294967295U);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1]))))), (4294967287U)));
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_4 [i_1])))))));
        var_17 -= arr_3 [(short)2];
    }
}
