/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = 4518348364324684923;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (var_6 - (65535 + -19831));
                                var_17 -= (((arr_14 [i_4 - 2] [i_4] [i_4 - 1] [i_3 - 1] [i_3 + 3]) ? -4518348364324684923 : (arr_14 [0] [6] [i_4 - 1] [i_3 - 1] [i_3 + 1])));
                                arr_17 [i_1] [i_2] = var_4;
                            }
                        }
                    }
                    var_18 = (((arr_2 [i_1]) ? (arr_9 [i_0] [i_1] [3]) : (51755 / -7618553461555132411)));
                    arr_18 [i_1] [i_1] = var_2;
                }
                var_19 = (min(var_19, (max((105 / var_5), 14525754570759267844))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
