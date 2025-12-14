/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230481
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
    var_11 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
    var_12 &= ((/* implicit */_Bool) var_8);
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-((+(2683492028U))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1611475267U)) ? (2683492032U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_3 + 1] [(signed char)0] [i_1 + 1] [2U])))), ((~(((/* implicit */int) arr_11 [i_1 + 1] [i_2] [i_3 + 1] [i_3] [i_2] [0LL])))))))));
                                arr_14 [2U] [i_3] [i_3] [i_0 - 1] [i_1] [i_0 - 1] [2U] &= ((/* implicit */int) min(((~(arr_4 [i_0] [i_0 - 2] [i_4 + 1]))), (arr_4 [i_0] [i_0 - 1] [i_4 - 1])));
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
                                var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))) | (3833366698U));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
