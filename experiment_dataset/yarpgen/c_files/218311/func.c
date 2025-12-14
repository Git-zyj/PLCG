/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218311
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((var_2) / (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((var_13) / (((/* implicit */int) var_6)))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */int) var_17))))) ? ((-(min((var_7), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) min((var_9), (var_14))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)21)) & (((/* implicit */int) (!(((/* implicit */_Bool) 2711717590U))))))) << (((min((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (var_9)))), (var_0))) - (1739800704U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
}
