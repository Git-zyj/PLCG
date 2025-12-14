/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220461
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
    var_19 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_0] [i_0]);
                                arr_16 [i_0] [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) arr_4 [i_1 + 1]));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned char) arr_5 [i_2 + 1] [i_2 - 1])))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) arr_4 [i_0 + 1])));
            }
        } 
    } 
}
