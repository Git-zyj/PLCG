/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221096
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
    var_12 ^= ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [1U] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [i_0] [i_1]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_4] [i_3 + 1] [i_3 - 1] [i_0] [8] [i_1] [i_0]))) ? (((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] [i_4])) & (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 1])))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3 + 2]))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1]))))) : ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_7))));
}
