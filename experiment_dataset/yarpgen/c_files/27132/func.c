/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27132
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
    var_17 = var_16;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_0]) | (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_1]);
                                var_20 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */long long int) ((var_14) << (((var_7) - (4515591006722473151ULL)))));
}
