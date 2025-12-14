/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27112
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
    var_14 ^= ((/* implicit */signed char) max((min((max((var_10), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_5)))))), (((((var_10) >> (((((/* implicit */int) var_13)) - (50314))))) & (((/* implicit */unsigned long long int) ((var_1) + (var_4))))))));
    var_15 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((1U), (((/* implicit */unsigned int) (short)-30709))))), (((((/* implicit */_Bool) var_0)) ? (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_7 [i_2] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) (short)18093)))))))));
                    var_16 = ((/* implicit */short) (unsigned char)225);
                    var_17 ^= ((/* implicit */unsigned long long int) -982099685);
                }
            } 
        } 
    } 
}
