/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193793
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((long long int) (_Bool)1));
        var_20 = ((/* implicit */_Bool) ((var_14) ? (var_17) : (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_21 = ((long long int) 1737696521);
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) var_0));
    }
    var_22 = ((/* implicit */unsigned int) var_0);
}
