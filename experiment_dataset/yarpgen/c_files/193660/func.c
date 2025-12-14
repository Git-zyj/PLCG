/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193660
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [(short)11] = ((/* implicit */short) ((int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (signed char)16)))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8990)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1412))));
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (short)1412)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))));
    }
}
