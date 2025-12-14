/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2667
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
    var_13 = ((/* implicit */signed char) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))))), (((unsigned char) 12U)))))) : (min((4294967279U), (((/* implicit */unsigned int) -7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */int) (short)27108)) / (((/* implicit */int) (unsigned char)22)))) * (((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-24203))))))));
                var_14 ^= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))), (min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) var_2))))))));
                arr_8 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967262U))))), (max((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) 7))))));
                arr_9 [(short)9] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) - (var_8)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_3)))) : (((/* implicit */int) (short)-15155)))), ((~(((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (4294967279U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) : (0U)))) ? (max((((((/* implicit */_Bool) (short)21573)) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) ((int) var_6))))) : (((unsigned long long int) ((((/* implicit */_Bool) 26U)) && ((_Bool)1))))));
}
