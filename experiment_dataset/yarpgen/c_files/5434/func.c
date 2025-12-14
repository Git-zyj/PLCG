/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5434
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
    var_10 ^= ((/* implicit */unsigned char) ((var_1) >> (((((((/* implicit */_Bool) max((17592186044415ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0)))))) : (var_6))) - (61239U)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_5 [i_0] [i_1] [i_2] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1] [i_2] [i_0])))) : (min((((/* implicit */long long int) var_3)), (9223372036586340352LL)))))));
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_1)))) ? (arr_0 [i_0]) : (((((/* implicit */int) arr_1 [i_1])) / (arr_0 [i_0]))))) - ((+(arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
}
