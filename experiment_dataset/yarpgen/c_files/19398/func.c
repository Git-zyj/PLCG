/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19398
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
    var_17 = (+(var_12));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_1]) : (var_12)))) ? (17024959142831186522ULL) : (var_14))), (((unsigned long long int) (~(0ULL)))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((18446744073709551610ULL), (18446744073709551603ULL)))));
                }
            } 
        } 
    } 
}
