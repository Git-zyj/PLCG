/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209213
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
    var_15 += ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */signed char) var_6);
}
