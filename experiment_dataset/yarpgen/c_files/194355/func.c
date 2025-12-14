/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194355
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) 2251799813685247ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-(11641616625916151979ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_2);
}
