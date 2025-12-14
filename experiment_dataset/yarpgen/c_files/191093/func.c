/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191093
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 += ((/* implicit */unsigned short) var_6);
                var_13 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0] [i_1]));
                arr_8 [i_0] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (var_8)));
    var_15 -= ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */int) var_6);
}
