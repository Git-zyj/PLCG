/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((26253 ? 18047 : -31948)))));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((((min(((min((arr_3 [i_0]), var_9))), 103))) * ((max(var_5, 0)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1 - 1] [i_2] [i_3] = 91;
                                var_13 = ((!(arr_11 [i_2 + 4] [i_1 - 1] [i_2 + 4] [i_3] [i_3])));
                                var_14 *= min(((26662 ? var_2 : (arr_9 [i_4 - 1] [i_2 + 1] [i_1 - 1] [i_0 - 4]))), (!-5));
                            }
                        }
                    }
                }
                var_15 = var_4;
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
