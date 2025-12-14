/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24553
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)243)) : (var_11))) : (((((/* implicit */_Bool) (short)-8472)) ? (((/* implicit */int) arr_4 [(signed char)22] [i_1] [i_1])) : (((/* implicit */int) arr_4 [(short)8] [(short)8] [(unsigned short)14]))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_1] [i_2]), (arr_1 [(short)13] [i_1])))) - (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_17 = ((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (min((((/* implicit */short) (signed char)75)), (var_5)))))) && (((/* implicit */_Bool) var_3))));
}
