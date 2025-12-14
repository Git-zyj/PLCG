/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236660
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
    var_12 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (max((var_8), (((/* implicit */long long int) var_3)))))), (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) max((arr_0 [i_0 + 2]), (((/* implicit */int) arr_1 [i_0 - 3]))));
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) max((var_8), (4344505688252451402LL)));
                arr_6 [i_0 - 3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_0 [i_0 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))) ? (max((-5502573938062742373LL), (((/* implicit */long long int) -2062553337)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))) : (((unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) var_8)))))));
    var_14 = ((/* implicit */unsigned long long int) var_1);
}
