/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224710
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) min((var_14), (var_9))))) << (((((((/* implicit */_Bool) max((9223372036854775796LL), (((/* implicit */long long int) -1))))) ? (var_5) : (min((arr_6 [i_0] [i_0]), (var_7))))) + (1169117836)))));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 + 1])) : (var_12)))) ? (arr_6 [i_0 - 1] [i_0 - 4]) : (((/* implicit */int) (!(((/* implicit */_Bool) 6041003337159881119LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) 4194303);
    var_18 = ((/* implicit */unsigned char) 0);
    var_19 = ((/* implicit */int) var_12);
}
