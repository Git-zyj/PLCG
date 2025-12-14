/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236001
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((/* implicit */int) var_4)) - (77))))) : (((int) arr_0 [i_0]))))) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((var_8), (((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (var_12)));
}
