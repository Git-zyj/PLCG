/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44764
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), ((~(var_3))))) : (((/* implicit */long long int) (+((+(var_4))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))))) ? (min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_1)))), (((((var_0) + (9223372036854775807LL))) >> (((var_2) + (1403190659)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_11))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) : ((-(arr_0 [i_0 + 2] [i_0 + 2])))));
        var_21 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_0)))));
    }
}
