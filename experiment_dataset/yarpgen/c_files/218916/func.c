/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218916
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((((arr_0 [i_1 + 1] [i_1]) << (((arr_0 [i_1 - 1] [i_1]) - (10693133243074417207ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) var_12)))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_1 - 1] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) var_13)) : (arr_0 [i_1 - 1] [i_1 + 2])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
    var_17 = max((min((((unsigned long long int) var_8)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))))), (((/* implicit */unsigned long long int) var_6)));
}
