/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227982
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1]))) - (arr_3 [i_1 + 2] [i_1] [i_1])))));
                var_21 = max((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_1 [i_1])))))), (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 3] [i_1 - 1] [2ULL])), (var_18))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 17; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (min((max((((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_3] [i_2 + 1])), (var_11))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3 - 3]))))));
                arr_9 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_6 [i_3 - 2] [i_2 + 1])) - (79))))) : (((/* implicit */int) var_5))));
                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_7 [i_2 + 1]) <= (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_3] [i_3 - 3]))))), (max((arr_7 [i_2 + 1]), (arr_7 [i_2 + 1])))));
            }
        } 
    } 
}
