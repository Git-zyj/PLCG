/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246201
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
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_2) - (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) 13575363443804046148ULL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 4] [i_1 + 4]))) & (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
                arr_7 [i_1 - 2] [i_0 - 1] = ((/* implicit */_Bool) (~(arr_1 [i_0 - 1] [i_1])));
            }
        } 
    } 
    var_11 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1770789891U)) : (15556636036304567700ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0))))) : (((/* implicit */unsigned long long int) 2122168021U))));
}
