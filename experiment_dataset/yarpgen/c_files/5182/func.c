/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5182
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_1] [(short)0] [i_3 + 1] [7ULL] = max((max((var_4), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) var_3))))));
                            arr_11 [i_3] = ((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) var_9))));
                            var_16 = ((/* implicit */int) var_12);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_10)), (var_4))), (max((max((var_8), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_12))))))));
                var_17 = ((/* implicit */long long int) max((max((var_6), (((/* implicit */unsigned long long int) var_3)))), (max((var_11), (((/* implicit */unsigned long long int) var_13))))));
                var_18 -= ((/* implicit */_Bool) var_0);
            }
        } 
    } 
}
