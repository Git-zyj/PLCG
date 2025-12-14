/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222018
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
    var_14 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_15 -= ((/* implicit */unsigned char) var_5);
        arr_5 [i_0] = ((/* implicit */signed char) var_0);
        arr_6 [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned char) var_10);
    }
}
