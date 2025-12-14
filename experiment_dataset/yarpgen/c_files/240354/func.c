/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240354
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [0ULL]))))) - (var_4)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    }
    var_15 = ((/* implicit */unsigned short) (-((+(var_2)))));
}
