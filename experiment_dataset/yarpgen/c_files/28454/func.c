/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28454
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
    var_20 |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : ((-(var_18))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0] [8] [i_1])) ? (var_19) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) var_9))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [3ULL] [i_0]))))))) - (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [(short)1] [i_0])) + (2147483647))) << (((arr_2 [i_0] [i_0] [i_1]) - (217778183))))))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) var_17)) - (197)))))) ? (((((/* implicit */int) (signed char)21)) * (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)127)))))))));
            }
        } 
    } 
}
