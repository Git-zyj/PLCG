/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215026
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
    var_18 &= ((/* implicit */unsigned int) ((short) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) ((long long int) var_14))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */long long int) var_10);
    }
    var_20 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_6)) ? (var_14) : (var_14)))))));
    var_21 = ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((long long int) var_3)) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
}
