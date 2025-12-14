/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_10;
    var_16 = var_3;
    var_17 = (max(var_17, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 *= var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_11));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_0] [i_3] = var_12;
                                var_20 = var_3;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_20 [i_3] [i_3] [i_5] = var_7;
                                var_21 = (max(var_21, var_10));
                                var_22 ^= var_12;
                                var_23 = var_7;
                            }
                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 14;i_6 += 1)
                            {
                                arr_23 [14] [i_3] [i_3] [i_2] [i_3] [13] [i_0 + 1] = var_7;
                                var_24 -= var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
