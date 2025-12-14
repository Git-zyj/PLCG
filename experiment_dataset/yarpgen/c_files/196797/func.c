/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196797
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = arr_0 [i_0];
        var_14 = ((/* implicit */unsigned int) ((((arr_0 [i_0]) / (((/* implicit */int) (signed char)29)))) < (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(short)2] [i_0])) ^ (((/* implicit */int) arr_1 [(signed char)6] [(short)7]))))) ? (((/* implicit */int) ((16383) != (((/* implicit */int) (unsigned short)30373))))) : (((/* implicit */int) arr_1 [14U] [i_0])))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_16 += ((/* implicit */unsigned short) ((unsigned char) var_9));
}
