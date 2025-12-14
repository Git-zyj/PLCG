/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40918
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
    var_15 = ((/* implicit */signed char) 505847456722120937LL);
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */unsigned int) 6843778784043521991LL);
    var_18 = ((/* implicit */unsigned long long int) (short)30429);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = arr_3 [i_0] [i_0];
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) -6843778784043521991LL);
                                var_21 = arr_10 [i_1] [i_1];
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) -6843778784043521992LL);
                var_22 = ((/* implicit */signed char) arr_10 [i_0] [i_1]);
            }
        } 
    } 
}
