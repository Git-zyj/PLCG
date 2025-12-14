/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(short)14] [i_0] [16] [i_0] |= ((/* implicit */unsigned long long int) var_9);
                                var_16 = ((/* implicit */unsigned int) min((var_16), (var_13)));
                                arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_0 - 1] [i_0 - 1] = var_1;
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_0))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) var_13);
    var_20 &= var_15;
}
