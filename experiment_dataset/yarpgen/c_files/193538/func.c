/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193538
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)97)) && (((/* implicit */_Bool) 4294836224U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)213)) ^ (var_15))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) & (4294836224U)));
        var_21 = arr_0 [i_0];
    }
}
