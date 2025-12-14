/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206559
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) || (arr_0 [i_0 + 1] [i_0 + 1]))));
        var_14 &= ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) max((var_4), (((/* implicit */signed char) var_10))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) : (((((arr_1 [2]) + (2147483647))) << (((/* implicit */int) arr_0 [9LL] [i_0]))))));
        var_16 += ((/* implicit */_Bool) 4294967295U);
    }
    var_17 = ((/* implicit */unsigned int) var_3);
    var_18 = (((+(((((/* implicit */_Bool) (signed char)126)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) % (((var_11) >> (((min((((/* implicit */long long int) var_1)), (-3888275127702822850LL))) + (3888275127702822857LL))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(var_11))))));
}
