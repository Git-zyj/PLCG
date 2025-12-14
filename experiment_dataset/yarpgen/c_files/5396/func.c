/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5396
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
    var_18 = ((/* implicit */unsigned int) max((max((((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) min((var_0), (((((/* implicit */_Bool) (unsigned char)174)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))))))))));
    var_19 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned short)45322)) : (807908086))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30803))) : (var_8))) - (30793U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_2 [(signed char)5] [i_0 + 1])) + (((/* implicit */int) (short)-6073)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_16))) - (92U)))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_0 - 2])) : (var_2)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (short)-31925)), (-8232210426239784953LL))))));
            }
        } 
    } 
}
