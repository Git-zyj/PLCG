/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226609
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_11))) - (((/* implicit */int) var_14))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_0);
        arr_5 [i_0] = ((/* implicit */unsigned int) var_10);
        var_17 = ((/* implicit */int) max((31U), (31U)));
    }
    var_18 += max((max((min((var_3), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_14)));
}
