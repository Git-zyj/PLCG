/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204316
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
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) ((long long int) arr_1 [i_0 - 1]));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0])))))));
    }
    var_14 = var_4;
    var_15 = ((/* implicit */unsigned short) ((6291456) / (((/* implicit */int) var_4))));
}
