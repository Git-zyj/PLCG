/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245137
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = var_2;
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_5 [i_0] [1U])))) : (((/* implicit */int) arr_0 [i_2]))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_0] [i_1])));
                }
                arr_10 [i_0] = ((/* implicit */short) var_7);
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2410736358U)) ? (1884230937U) : (2410736367U)))) ? (arr_6 [i_0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_3))));
}
