/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47232
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((long long int) var_3)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((short) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) (signed char)(-127 - 1))))));
    }
    var_16 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (var_4))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
}
