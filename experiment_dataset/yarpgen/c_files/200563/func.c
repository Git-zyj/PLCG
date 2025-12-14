/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200563
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (875092864U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [(short)11]))))) : (var_4)))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)41522))))) ^ (((arr_0 [i_0]) * (arr_0 [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_3);
}
