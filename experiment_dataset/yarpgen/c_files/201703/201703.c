/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                arr_15 [i_1] [2] [1] [1] [1] = var_16;
                                arr_16 [i_0] [i_1] [i_0] [i_1] [6] [i_4] = (arr_10 [1] [i_1] [0] [i_1]);
                                var_20 = var_8;
                            }
                            for (int i_5 = 3; i_5 < 22;i_5 += 1)
                            {
                                var_21 *= var_6;
                                arr_20 [i_1] [i_1] [i_1] = (arr_1 [i_3]);
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [4] = (arr_17 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]);
                                var_22 *= (arr_14 [22] [15]);
                            }
                            var_23 = var_7;
                            var_24 = (arr_14 [i_1] [i_2]);
                        }
                    }
                }
                var_25 = (arr_8 [i_0] [i_0] [15]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_1] [16] [i_7] &= (arr_23 [i_0] [i_0] [i_6] [i_0]);
                            var_26 += (arr_26 [i_0] [i_0] [i_1] [i_6] [i_7]);
                            var_27 *= var_15;
                            var_28 += (arr_4 [i_7] [13] [i_1]);
                            var_29 ^= arr_6 [i_0] [i_6] [i_7];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_30 = (arr_23 [1] [i_1] [i_8] [1]);
                            var_31 = (max(var_31, (arr_3 [i_9])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
