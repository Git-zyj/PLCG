/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((min(65535, (7 <= -1)))) + var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 = (((((max(-1, 1)))) >> (11 != 7)));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_1] [i_4] [10] = ((var_10 ? (arr_10 [i_0] [i_0] [i_0]) : var_7));
                                var_20 = (arr_9 [i_0] [i_3] [12] [i_3] [i_3 + 2]);
                                var_21 = (((arr_0 [i_0] [i_0]) ? 63 : (arr_12 [10] [i_4] [i_3] [i_4])));
                                arr_16 [i_0] [i_4] [0] = ((arr_12 [0] [i_4] [i_1] [i_3 - 2]) ? 1903237697 : 65518);
                            }
                        }
                    }
                }
                var_22 = ((((var_10 ? ((127 ? 9511 : -880113876626499293)) : 9497)) << (660159416 - 660159378)));
                arr_17 [i_0] [i_0] |= (arr_11 [i_0] [i_0] [12] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
