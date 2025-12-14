/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_11 = (arr_3 [i_0]);
                            var_12 = (arr_6 [i_0] [i_1] [i_1] [i_1]);

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_13 = (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] [i_4] = arr_2 [i_0] [i_0];
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_5 [i_2] [i_2] [i_2];
                                var_14 *= (arr_11 [i_0] [i_0] [i_2] [i_3] [i_2]);
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_15 = (max(var_15, (arr_9 [i_2] [i_3] [i_2] [i_2])));
                                var_16 = (min(var_16, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])));
                                var_17 = (arr_2 [i_0] [i_0]);
                                var_18 = (arr_2 [i_0] [i_0]);
                            }
                            arr_18 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0]);
                            var_19 = (arr_12 [i_3] [i_1] [i_2] [i_3] [i_1] [i_2] [i_1]);
                        }
                    }
                }
                var_20 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                var_21 *= (arr_2 [i_0] [i_1]);
                arr_19 [i_0] [i_0] = (arr_3 [i_0]);
                arr_20 [i_0] [i_0] = arr_5 [i_0] [i_1] [i_1];
            }
        }
    }
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] [i_6] |= (arr_23 [i_6] [i_6] [i_6]);
                var_23 = (arr_24 [i_7] [i_7]);
            }
        }
    }
    #pragma endscop
}
