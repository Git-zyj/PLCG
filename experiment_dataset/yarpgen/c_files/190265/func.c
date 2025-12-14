/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190265
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
    var_16 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10835))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (9845458594817612710ULL))))) | (((/* implicit */unsigned long long int) -2147483646)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((var_11) & (var_11))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((9845458594817612684ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_14) > (((/* implicit */long long int) ((arr_5 [i_0]) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (short)-96)) : (((/* implicit */int) var_0))))))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35372)) ? (((/* implicit */long long int) arr_5 [i_1])) : (var_11)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
}
