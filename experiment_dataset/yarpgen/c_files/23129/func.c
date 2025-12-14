/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23129
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
    var_10 = var_5;
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (arr_3 [i_0 - 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 288230376151711743LL))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_3) > (((/* implicit */int) var_8))))) << (((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (2659822773U)))));
            }
        } 
    } 
}
