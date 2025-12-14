/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208851
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
    for (int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) 803647932);
        var_13 = var_3;
        arr_3 [i_0 - 3] [i_0] = (+(((/* implicit */int) ((arr_2 [i_0] [i_0]) <= (2147483643)))));
        var_14 = var_2;
    }
    var_15 -= ((/* implicit */int) (_Bool)1);
    var_16 = ((/* implicit */int) var_5);
    var_17 ^= ((/* implicit */int) ((_Bool) var_11));
}
