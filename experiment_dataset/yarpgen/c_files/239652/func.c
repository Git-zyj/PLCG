/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239652
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25236)) ? (((/* implicit */int) (unsigned short)3199)) : (((/* implicit */int) (unsigned char)237))))), (((unsigned int) var_2)))));
                var_13 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) arr_3 [i_1 - 2]))), (max((((/* implicit */long long int) ((signed char) (signed char)34))), (var_0)))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)78))));
}
