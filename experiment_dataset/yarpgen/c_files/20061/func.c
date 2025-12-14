/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20061
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
    var_14 = ((/* implicit */long long int) ((min((((var_5) + (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_7)) : (var_6)))))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [(signed char)20] [0] &= ((31) / (1972738200));
                    arr_10 [i_0] [19] [i_0] [i_2] = ((/* implicit */short) ((var_12) | (((/* implicit */long long int) -45))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)-1)) & (1972738200)))));
                }
            } 
        } 
    } 
}
