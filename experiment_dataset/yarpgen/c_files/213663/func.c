/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213663
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
    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] |= (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]))));
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2550))));
                arr_5 [i_0] |= ((/* implicit */long long int) ((var_11) || (((/* implicit */_Bool) (~(((long long int) var_1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((arr_6 [i_2 + 1] [i_2 - 2] [i_2] [i_2]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_11))));
                }
                var_20 |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_2 [i_1] [i_0]))))));
            }
        } 
    } 
}
