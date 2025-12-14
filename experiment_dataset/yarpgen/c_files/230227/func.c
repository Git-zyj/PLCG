/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230227
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_16)), (var_10))), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) var_4)) : (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_4))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] |= ((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [13LL])) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned short)6] [i_4]))) : (arr_11 [i_0] [(short)7] [i_0] [i_3] [i_0])))))));
                                arr_15 [(_Bool)1] [i_4] [(signed char)9] [i_2] [i_1] [i_0] = max((arr_11 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]), ((~(arr_11 [i_0] [i_1] [i_4 - 1] [i_3] [i_4]))));
                                arr_16 [i_0] [i_1] [i_4] = ((/* implicit */long long int) arr_3 [i_3] [i_1] [i_2]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_13 [5U] [i_0] [i_0] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_2])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]))))) ? ((+(arr_11 [(_Bool)1] [i_2] [i_2] [i_1] [(signed char)1]))) : (min((((long long int) 1605989725U)), (((/* implicit */long long int) arr_4 [i_0] [(_Bool)1] [i_2])))))))));
                }
            } 
        } 
    } 
}
