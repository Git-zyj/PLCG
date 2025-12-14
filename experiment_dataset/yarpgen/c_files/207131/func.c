/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207131
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) (signed char)106)) - (103)))));
                arr_8 [i_1] [i_1] = var_9;
            }
        } 
    } 
    var_10 = var_9;
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (var_1))) >= (max((((/* implicit */unsigned long long int) ((1027481319U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) var_3))))))));
}
