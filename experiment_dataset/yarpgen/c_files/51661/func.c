/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51661
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)30031)) : (((/* implicit */int) arr_1 [i_0])))));
                var_16 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_9)) ? (var_13) : (var_4))), (((((/* implicit */_Bool) (short)-7049)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
}
