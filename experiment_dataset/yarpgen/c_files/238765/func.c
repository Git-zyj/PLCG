/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238765
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
    var_11 += ((/* implicit */long long int) min((((/* implicit */int) ((min((-3537046884584565936LL), (((/* implicit */long long int) var_7)))) != (((/* implicit */long long int) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_5)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2]))) & (13589316836115423550ULL))));
                    var_13 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (short)-22720)) ? (((/* implicit */int) (short)-22747)) : (((/* implicit */int) (short)-22716)))), (((/* implicit */int) min((((/* implicit */short) (signed char)-40)), ((short)22747))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17027)) ? (min((((/* implicit */unsigned long long int) arr_7 [(short)4] [i_2 - 1] [i_2 - 4] [i_2])), (((arr_1 [i_1]) / (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22720)))));
                }
            } 
        } 
    } 
}
