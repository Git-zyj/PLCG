/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228217
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
    var_10 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((5619900204382556694ULL), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) arr_6 [i_0])), (-2115729258))))))))));
                    arr_7 [i_0] [(short)6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | (((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    arr_8 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_1 [i_0]), (arr_1 [i_0]))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_8)) ? (((unsigned int) 10493332578230531159ULL)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (var_5))));
}
