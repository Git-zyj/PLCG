/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237998
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
        arr_3 [i_0] = ((/* implicit */signed char) 3059389763U);
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (var_2)));
}
