/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224855
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((int) arr_1 [i_0]);
        var_16 = var_7;
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
}
