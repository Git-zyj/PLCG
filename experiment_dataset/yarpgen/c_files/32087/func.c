/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32087
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
    var_20 -= ((/* implicit */unsigned int) var_18);
    var_21 = ((/* implicit */short) (+(var_15)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)116)) ? ((~(var_14))) : (((/* implicit */int) (_Bool)1))))) & (var_12))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 2] [i_0 - 1])))) ? (min((var_0), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) : (((unsigned int) (_Bool)1)))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((long long int) var_10)) & (((/* implicit */long long int) (-(arr_1 [i_0 + 1] [i_0])))))) == (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))))))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-117))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)5))))));
}
