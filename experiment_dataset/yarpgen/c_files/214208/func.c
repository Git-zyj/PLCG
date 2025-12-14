/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214208
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
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2] [i_0] [i_0])))))));
                    var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                    var_18 = arr_1 [i_0 - 4];
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0 + 2] [i_0 - 2] [i_0])), (((((/* implicit */long long int) 1165469734U)) / (arr_1 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) arr_12 [2ULL] [i_0 - 4] [i_1] [i_2 - 1] [i_2] [i_2 + 3] [i_2 - 1]);
                                arr_13 [i_0] [i_0 + 2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~((+((~(((/* implicit */int) arr_3 [i_2 + 3] [15ULL] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_3)), (var_7))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))));
    var_22 *= ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */unsigned long long int) (-(var_2)));
}
