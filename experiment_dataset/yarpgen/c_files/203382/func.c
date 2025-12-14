/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203382
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
    var_16 = min((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -1160252369)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2] [i_2]);
                    arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_12) : (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned short)4] [i_1] [i_1] [i_2])) && (((((/* implicit */int) arr_3 [i_2])) <= (-2140341164)))))))));
                }
            } 
        } 
    } 
}
