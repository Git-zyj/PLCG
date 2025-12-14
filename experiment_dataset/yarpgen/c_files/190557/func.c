/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190557
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [4LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (var_9) : (var_5))) - (((/* implicit */unsigned int) ((/* implicit */int) ((1770410394U) <= (((/* implicit */unsigned int) -1859243347))))))))) ? (((((/* implicit */_Bool) ((var_15) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((var_4) / (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((var_4) - (2342083185U)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))) ? (var_7) : (((/* implicit */int) var_16)))))));
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (var_8))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned int) var_7))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_14)))))) <= (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_5)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_7)))) ? (((/* implicit */int) ((var_11) >= (var_4)))) : (((/* implicit */int) ((var_12) < (((/* implicit */long long int) var_7)))))))));
}
