/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224040
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) arr_1 [i_0]);
        var_18 |= ((/* implicit */signed char) max((((unsigned short) max((((/* implicit */int) arr_0 [i_0] [i_0])), (-1)))), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_9)));
    }
    var_19 |= ((/* implicit */signed char) -1);
}
