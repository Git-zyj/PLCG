/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224727
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) var_2);
        arr_3 [i_0] = ((/* implicit */int) ((3663739382893692746ULL) % (((unsigned long long int) ((((/* implicit */int) (unsigned short)1668)) != (((/* implicit */int) (short)1176)))))));
        var_18 = ((/* implicit */_Bool) var_12);
    }
    var_19 = ((/* implicit */long long int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5))));
}
