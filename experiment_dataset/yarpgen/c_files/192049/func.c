/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192049
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */short) (~(arr_1 [i_0 + 1] [i_2 + 2])));
                    var_15 = arr_5 [i_2] [i_2];
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_16 = ((/* implicit */long long int) arr_2 [i_0] [i_0 - 2]);
                    arr_14 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */signed char) 4212046542U);
                }
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_14))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_13);
}
