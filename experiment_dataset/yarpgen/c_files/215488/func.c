/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215488
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
    var_19 = ((/* implicit */long long int) (short)-26307);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_3] = var_7;
                            var_20 = ((/* implicit */unsigned int) arr_1 [i_2] [i_2 - 1]);
                            arr_14 [i_0] [i_3] [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_3])), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1] [i_3])))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */int) arr_2 [i_1 + 1])) + (((/* implicit */int) arr_2 [i_1 + 1]))))));
                var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) 114167752U)) : (arr_4 [i_0])))));
                arr_15 [(short)9] = ((/* implicit */short) (signed char)-111);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_3);
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_8))));
}
