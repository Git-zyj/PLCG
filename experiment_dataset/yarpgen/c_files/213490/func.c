/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213490
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
    var_16 = ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) var_4))), (((((/* implicit */_Bool) (unsigned char)232)) ? (((int) (unsigned char)233)) : (((int) var_15))))));
    var_18 = ((/* implicit */signed char) ((short) (((!(((/* implicit */_Bool) (unsigned char)7)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : ((~(var_12))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */int) arr_0 [i_2]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_1)));
                }
            } 
        } 
    } 
}
