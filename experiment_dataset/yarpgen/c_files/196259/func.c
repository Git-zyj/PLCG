/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196259
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */_Bool) (+(917296794U)));
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_18 = ((/* implicit */short) (unsigned short)27323);
    }
    var_19 = ((/* implicit */unsigned short) max((var_9), (max((((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_10))))), ((~(var_9)))))));
}
