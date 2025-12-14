/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239850
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
    var_14 = ((/* implicit */unsigned short) (-(var_9)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */short) (((~(2147483647))) / (((/* implicit */int) (unsigned short)38812))));
        var_16 = arr_3 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((var_4), (var_4)));
    }
}
