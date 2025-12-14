/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191290
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (576460752303161344ULL) : (((((((/* implicit */_Bool) var_8)) ? (2009875946695788531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) ((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((((arr_3 [i_0]) - (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) 1620671940064585512LL)))))) - (((/* implicit */unsigned long long int) (+(arr_1 [i_1 + 2]))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)18239)), (arr_1 [i_0]))))) ? (((/* implicit */int) ((((long long int) arr_2 [i_1 + 2])) < (((/* implicit */long long int) arr_1 [i_1 + 2]))))) : (((/* implicit */int) arr_2 [i_1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_5))));
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
}
