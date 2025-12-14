/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239964
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
    var_17 ^= ((/* implicit */int) ((signed char) var_0));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) ((unsigned int) (unsigned short)29713));
                                var_19 -= ((/* implicit */unsigned int) (((+((~(((/* implicit */int) arr_7 [i_4] [i_4])))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) <= (max((((/* implicit */unsigned int) -1)), (arr_9 [i_4] [i_4] [i_4] [i_4] [1U]))))))));
                                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) & (max((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_14))));
                                var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 3]))) ? (((/* implicit */unsigned long long int) 0LL)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_2] [i_3 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5078))) : (arr_4 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((5990332715326675260LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2] [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
