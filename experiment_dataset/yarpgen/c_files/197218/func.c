/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197218
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
    var_19 = ((/* implicit */long long int) var_18);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) max((-1000078841834062658LL), (((/* implicit */long long int) arr_1 [i_0]))));
        arr_3 [(signed char)23] = ((/* implicit */short) min((((long long int) ((unsigned char) (unsigned char)213))), (((/* implicit */long long int) (unsigned char)61))));
    }
}
