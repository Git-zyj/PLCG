/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225666
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)236))));
                var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_16))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)23092)) : (((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) var_0))))));
                var_22 ^= ((/* implicit */unsigned int) var_18);
                var_23 = ((/* implicit */signed char) var_0);
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)1)))));
    var_25 |= ((/* implicit */short) var_4);
    var_26 |= ((/* implicit */unsigned short) var_17);
    var_27 = min(((+(var_18))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))));
}
