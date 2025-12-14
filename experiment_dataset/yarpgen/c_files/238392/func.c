/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238392
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
    var_12 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */int) (~(((unsigned int) arr_1 [i_1 + 1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_14 [15U] [15U] [15U] = ((/* implicit */long long int) var_4);
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-(0ULL)));
                                var_14 *= ((/* implicit */signed char) var_1);
                            }
                            var_15 = ((/* implicit */long long int) arr_7 [i_2] [i_1] [i_3] [i_2 + 1]);
                            arr_16 [i_2 - 2] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_8);
                            var_16 = 4095U;
                        }
                    } 
                } 
            }
        } 
    } 
}
