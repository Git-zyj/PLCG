/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241448
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
    var_12 += ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 6; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0 + 2] [i_0] [i_0 - 2] [i_0] [i_2] [(short)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_3 + 4] [i_3 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
                                var_13 = ((/* implicit */unsigned short) var_9);
                                var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                                arr_12 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 4026531840U)), (464822081136854228LL)))))))) > (((((/* implicit */_Bool) max((arr_9 [(short)6] [i_1] [i_1] [i_1] [(short)6]), (((/* implicit */long long int) arr_5 [i_0 - 1] [6LL] [i_1] [i_2]))))) ? (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_10))))) : (max((((/* implicit */long long int) (signed char)86)), (var_0)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) 4026531819U))))), (((/* implicit */int) var_7))));
}
