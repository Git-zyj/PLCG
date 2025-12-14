/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42419
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
    var_20 = (~(var_7));
    var_21 = ((/* implicit */unsigned int) max((var_21), (var_18)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_2 [3U]))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0])))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22106)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (2251799813423104ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
}
