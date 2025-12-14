/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237315
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 546191233)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (min((2449884856U), (((/* implicit */unsigned int) (short)11723))))));
        var_16 ^= ((/* implicit */unsigned short) (signed char)-67);
        var_17 = ((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)5))))));
    }
    var_18 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2))) - (((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) var_12))))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (2793514988U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11723)))));
}
