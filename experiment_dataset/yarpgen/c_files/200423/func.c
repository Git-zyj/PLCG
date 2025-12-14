/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200423
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 3] [i_2 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (min((((/* implicit */unsigned int) ((arr_9 [i_0] [(signed char)8] [i_0] [(signed char)8]) / (((/* implicit */int) var_13))))), (min((var_12), (((/* implicit */unsigned int) var_15))))))));
                                arr_12 [i_0] [i_2] = (short)31192;
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? ((~(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [(signed char)5] [(signed char)5]))))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) ^ (1839539553873742270LL))), (var_6)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */long long int) 1660890208))))) ? (((((/* implicit */_Bool) ((var_5) | (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7421))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)58))));
}
