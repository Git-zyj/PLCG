/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245001
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
    var_16 = min((((/* implicit */long long int) (+((~(var_7)))))), (min((((/* implicit */long long int) max((var_14), (var_14)))), (var_4))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) max((min((((/* implicit */int) var_5)), (var_14))), (((/* implicit */int) ((unsigned char) 1066876712U)))))), (max((((/* implicit */unsigned int) var_14)), ((~(4085343186U)))))));
                                var_18 ^= ((/* implicit */unsigned int) (-(max((((/* implicit */int) var_5)), (var_14)))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(3228090567U))))));
                                arr_17 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) max((min((min((var_2), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+(4085343186U)))))), (min((((/* implicit */unsigned long long int) var_1)), (var_9)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (~(min((max((var_12), (var_7))), (((/* implicit */unsigned int) ((signed char) var_4)))))));
                }
            } 
        } 
    } 
}
