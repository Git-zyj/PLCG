/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224285
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_0)))));
    var_16 &= ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20494)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)45042))));
        var_18 = ((/* implicit */signed char) var_9);
        var_19 ^= ((/* implicit */_Bool) var_4);
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = var_2;
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((int) var_2)))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_7))));
    }
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
}
