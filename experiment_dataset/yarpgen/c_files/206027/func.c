/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206027
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [(signed char)0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (((unsigned int) ((signed char) 1997519935U)))));
                var_12 = arr_4 [i_1];
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) (signed char)63)))) : (((/* implicit */int) ((signed char) (signed char)53)))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (short)-30461))));
}
