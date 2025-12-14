/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38948
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
    var_14 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(3412256422U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 &= ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) var_10)))));
        var_16 = ((/* implicit */_Bool) ((short) arr_0 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)52455)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)104))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)68)) ^ (((/* implicit */int) (unsigned short)43311))))));
        var_18 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_19 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_8))));
    }
    var_20 = ((/* implicit */short) var_1);
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_9))))))))) || ((!(((/* implicit */_Bool) (signed char)-83))))));
}
