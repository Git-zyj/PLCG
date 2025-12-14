/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205252
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
    var_20 = ((/* implicit */unsigned int) min((var_3), (max((((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_1))))), ((-(var_0)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                arr_6 [16LL] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_1])) : (2414189248U))), (((/* implicit */unsigned int) var_15)))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [16U] [16U] [i_1])), (arr_3 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) arr_0 [i_1] [i_1])) : (max((((/* implicit */unsigned int) arr_2 [0LL] [i_0] [i_0])), (var_11)))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1958621167) : (((/* implicit */int) var_5))))) ? (var_13) : (((((/* implicit */_Bool) var_11)) ? (3470669905U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_23 = ((/* implicit */unsigned short) 6552783673372080829ULL);
}
