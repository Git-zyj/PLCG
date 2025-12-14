/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45096
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
    var_12 = var_9;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) 952755573U);
        var_14 = ((/* implicit */_Bool) ((long long int) arr_1 [(short)3] [(short)3]));
        var_15 = ((/* implicit */short) arr_0 [i_0]);
        var_16 = ((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */long long int) arr_1 [i_0] [(unsigned short)17]))));
    }
}
