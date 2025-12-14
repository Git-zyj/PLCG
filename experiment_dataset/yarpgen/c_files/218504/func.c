/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218504
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
    var_13 |= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_1])));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = (+(((((/* implicit */int) arr_0 [i_2] [i_2])) - (((/* implicit */int) arr_0 [i_1 + 2] [i_3 + 1])))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_9) * (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) arr_10 [i_1] [i_1]))))) : (var_10)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
