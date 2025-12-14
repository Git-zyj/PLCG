/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44629
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */int) (-(((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4199927088U)))));
        arr_3 [i_0] [i_0] = ((unsigned int) arr_1 [i_0 + 1]);
        arr_4 [i_0] [i_0] = ((((_Bool) var_13)) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_8)))))));
        arr_5 [i_0 - 1] = ((var_13) >> (((/* implicit */int) arr_0 [i_0 + 2])));
    }
    var_15 = ((/* implicit */unsigned short) ((int) ((var_8) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_2 - 1] [i_2 + 1]);
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
}
