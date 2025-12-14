/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35121
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_0] |= ((/* implicit */signed char) max(((~(arr_4 [i_0] [i_2]))), (((/* implicit */unsigned long long int) 1763630436))));
                    var_17 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) var_0))), (((unsigned char) ((arr_2 [i_1] [i_2]) ? (9586269736874735457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((var_1) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_16)))) ? (((/* implicit */unsigned long long int) var_9)) : (933562814068844807ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
