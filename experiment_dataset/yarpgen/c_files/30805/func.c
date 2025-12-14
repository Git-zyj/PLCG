/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30805
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
    var_11 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1294357723U)) ? (1294357723U) : (1294357723U)))) & (max((((/* implicit */unsigned long long int) 3000609573U)), (18446744073709551615ULL)))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((arr_5 [i_0] [i_1 - 1] [i_1 + 2]) ? (arr_3 [i_0] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1 + 2])))))));
            }
        } 
    } 
}
