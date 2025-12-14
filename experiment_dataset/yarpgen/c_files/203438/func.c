/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203438
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = (+(((/* implicit */int) ((arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 1]) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (arr_5 [i_0 + 1])));
                    arr_9 [i_0] [i_0] [7LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (arr_0 [i_0 + 2])))) ? (((arr_1 [i_1]) ? (((/* implicit */int) arr_1 [i_2])) : (arr_0 [6]))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) * (max((((0LL) * (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) * (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((+(((((/* implicit */int) var_7)) & (((/* implicit */int) var_17)))))) : ((+(((/* implicit */int) var_10))))));
}
