/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48792
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
    var_18 += ((/* implicit */short) var_0);
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min((var_4), (var_4)))), (var_1))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) max((var_15), (var_15)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] [1U] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (max((var_15), (((/* implicit */unsigned int) var_13))))));
                            arr_10 [i_1] = ((/* implicit */unsigned int) var_7);
                            var_21 ^= max((min((var_2), (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (var_0)))))), (((/* implicit */unsigned int) min((max((((/* implicit */int) var_13)), (var_0))), (var_0)))));
                            var_22 *= max((((/* implicit */unsigned int) var_14)), (max((var_8), (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_13))))))));
                            var_23 ^= ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
    var_25 ^= ((/* implicit */int) max((var_7), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (max((var_16), (((/* implicit */unsigned int) var_0)))))))));
}
