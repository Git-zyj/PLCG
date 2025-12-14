/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25619
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
    var_15 = var_13;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) arr_2 [20LL] [i_1]);
                arr_5 [i_0] [i_1] = arr_1 [5U] [i_1];
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) arr_1 [4U] [i_1])))))))) ? (((((((/* implicit */_Bool) 1357177725)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)8]))) : (arr_4 [i_0] [i_1]))) & (max((var_11), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_0])) ^ (((/* implicit */int) arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
}
