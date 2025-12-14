/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204132
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
    var_20 = ((/* implicit */signed char) max((var_18), (((/* implicit */unsigned int) ((int) max((var_0), (var_0)))))));
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16316)))))) ? (((/* implicit */long long int) var_18)) : (((((/* implicit */_Bool) (short)-16316)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_13)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) - (var_19)));
        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [7LL] = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] [(unsigned char)19] = ((/* implicit */short) (-(arr_4 [i_1] [i_1])));
        var_24 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)8))));
        var_25 = ((/* implicit */unsigned short) var_3);
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)1008)) >= (((/* implicit */int) (short)-16302))));
    }
}
