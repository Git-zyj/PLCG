/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208143
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
    var_17 ^= ((/* implicit */long long int) var_6);
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)119)), (var_5)))) * (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_15)) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_13)))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -888674520))))), (var_14)))) ? (var_4) : (((/* implicit */unsigned long long int) var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */long long int) var_15);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_6))))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-11023))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_16))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (var_3))))));
                var_21 -= ((/* implicit */unsigned long long int) var_5);
                var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((8388607LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))))))), (max((var_1), (var_5)))));
            }
        } 
    } 
}
