/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244130
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-53)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 2])) - (((/* implicit */int) arr_1 [i_0 + 2]))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (_Bool)1))));
    }
    var_14 = ((/* implicit */short) min((((/* implicit */int) var_5)), ((~(((((/* implicit */_Bool) 1751400296)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))));
    var_15 = ((/* implicit */signed char) ((int) max((((var_6) - (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)16)))));
}
