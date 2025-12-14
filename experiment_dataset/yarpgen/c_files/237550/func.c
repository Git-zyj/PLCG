/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237550
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) : (var_3)))));
                var_12 = ((/* implicit */unsigned int) (((+(((((/* implicit */int) (signed char)93)) << (((((/* implicit */int) (unsigned char)81)) - (78))))))) | ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-9114)) + (2147483647))) << (((((((/* implicit */int) (short)-31517)) + (31538))) - (21))))) >> (((((/* implicit */int) var_5)) + (8715)))));
}
