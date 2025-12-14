/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214723
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
    var_20 = ((/* implicit */int) var_18);
    var_21 ^= ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_16);
                    var_23 = ((/* implicit */unsigned int) arr_1 [3U]);
                    arr_8 [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((arr_6 [i_0] [i_1 - 1] [i_2 + 1]) - (arr_6 [4ULL] [i_1 - 2] [i_2 - 2]))) : (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) (signed char)57)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_9);
    var_25 = ((/* implicit */unsigned short) var_0);
}
