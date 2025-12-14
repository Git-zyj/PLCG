/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230846
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) 4294967295U);
                    arr_6 [i_1] [0U] &= ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (((((/* implicit */int) var_15)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))))) * ((-(((var_15) ? (((/* implicit */long long int) 5U)) : (var_10)))))));
}
