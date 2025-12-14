/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 17736359773795745043;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 ^= (var_5 / var_7);
                                var_13 -= ((var_2 >> (710384299913806574 - 710384299913806570)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1 + 1] [4] = var_0;
                    var_14 = (max(var_14, (((710384299913806581 >> (17736359773795745041 - 17736359773795744994))))));
                }
            }
        }
    }
    #pragma endscop
}
