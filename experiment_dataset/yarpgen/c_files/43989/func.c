/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43989
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (21794289U))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_12) && (((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    var_21 = ((/* implicit */_Bool) var_3);
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_18))))))));
    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (var_8) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 4389284684500641682LL)) ? (4273173006U) : (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) 21794289U)) : (((((/* implicit */_Bool) 4389284684500641689LL)) ? (((((/* implicit */_Bool) var_7)) ? (-4389284684500641682LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (2595401445U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    var_24 ^= var_16;
}
