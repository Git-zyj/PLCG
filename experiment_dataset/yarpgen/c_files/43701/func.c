/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43701
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_11) : (var_11))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = (_Bool)1;
        arr_3 [i_0] = ((/* implicit */int) (short)29435);
        var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) min(((short)-29425), (((/* implicit */short) (_Bool)0)))))));
    }
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (max((var_8), (var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-29447))))));
}
