/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239691
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
    var_19 -= ((/* implicit */unsigned char) ((((((var_4) | (var_3))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))))));
    var_20 = ((/* implicit */_Bool) ((var_3) | (((var_4) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12395)) - (((/* implicit */int) (signed char)102)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) << ((((~(arr_4 [i_2 + 1]))) - (816413923)))))) + ((~(arr_5 [i_2] [i_2] [i_1 + 1] [i_0]))));
                    var_22 &= ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
}
