/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204534
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 + 1])))))));
        arr_4 [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) (short)4505))));
    }
    var_13 ^= ((/* implicit */short) ((((/* implicit */int) var_6)) << ((((-((+(((/* implicit */int) (_Bool)1)))))) + (13)))));
}
