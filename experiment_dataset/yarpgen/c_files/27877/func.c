/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27877
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (arr_5 [i_1] [i_1] [i_1])))));
                var_20 = max((max(((~(arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */long long int) var_3)) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (arr_5 [i_0] [i_1] [14U]))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_16 [i_2 - 1] [i_2] [i_4] = min((((/* implicit */long long int) ((arr_15 [i_3 - 1] [i_2 + 1]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62997)))))), (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_3 + 1]))) : (arr_15 [i_3 + 1] [i_2 + 1]))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (min((((/* implicit */int) arr_10 [i_2 + 1] [(unsigned short)9])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)20229)) : (((/* implicit */int) (short)-20229)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20213)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_3 + 1] [i_4]))) : (arr_13 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) arr_14 [(short)1] [i_3 - 1] [i_3 + 1] [i_4])) : (((/* implicit */int) arr_8 [i_2]))))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
}
