/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33865
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
    var_17 = ((/* implicit */short) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = var_14;
        arr_3 [i_0] = ((/* implicit */unsigned char) var_13);
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned short)58914);
        arr_5 [i_0] = ((/* implicit */short) var_14);
    }
}
