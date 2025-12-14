/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226438
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
    var_12 += ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) arr_0 [i_1]))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)24)))))))));
                arr_6 [i_0] [(short)6] = ((/* implicit */unsigned long long int) ((unsigned short) (((+(((/* implicit */int) arr_0 [i_0])))) >> (((((/* implicit */int) ((short) arr_0 [i_0]))) - (14335))))));
                arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) arr_1 [(unsigned char)8])))) <= (((/* implicit */int) ((short) ((unsigned char) var_11))))));
                var_14 = ((short) (+((-(((/* implicit */int) (unsigned char)231))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) : (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */short) var_2);
}
