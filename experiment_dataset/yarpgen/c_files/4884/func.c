/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4884
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(649626096)))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) (signed char)-67)))) % ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_14)) : (((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (+((-(arr_4 [i_1] [i_1 - 1])))));
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]) + (2147483647))) << (((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]) + (611309366)))))) - (((((/* implicit */_Bool) (+(2147483647)))) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)54)))))));
            }
        } 
    } 
}
