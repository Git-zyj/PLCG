/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235557
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
    var_19 = ((/* implicit */signed char) (unsigned short)26974);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (arr_2 [i_0])));
        var_21 = ((/* implicit */_Bool) (unsigned short)38544);
    }
}
