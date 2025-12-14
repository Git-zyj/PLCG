/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203859
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
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 2]) / (arr_5 [i_2 - 1] [i_2 - 2] [i_2 - 2])))) ? (max((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1]))) : (max((arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 1]), (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1])))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) > (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_8)))))) >> (((((((/* implicit */_Bool) ((arr_1 [i_1] [i_2 - 1]) ? (((/* implicit */unsigned int) var_17)) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((583216821057478210ULL) != (((/* implicit */unsigned long long int) var_14)))))) : (834694572U))) - (834694547U)))));
                }
            } 
        } 
    } 
}
