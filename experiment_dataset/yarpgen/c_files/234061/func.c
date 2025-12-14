/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234061
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_5))));
                var_15 &= ((/* implicit */int) arr_0 [i_1 + 2]);
                var_16 &= ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_1 [i_1])) - (227)))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_17 *= ((unsigned long long int) min((var_12), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))));
}
