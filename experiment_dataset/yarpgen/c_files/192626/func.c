/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192626
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) ((max((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : (var_1)))))) * (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((unsigned long long int) arr_3 [i_0])))) - (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (var_6)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) * (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
