/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_10 += var_4;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_11 |= -93;
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = var_8;
                            arr_13 [i_1] [i_3] [i_4] = 57418;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_12 = -21;
                            var_13 = (max(var_13, var_1));
                            var_14 = (min(var_14, var_2));
                            var_15 = var_2;
                            var_16 = (arr_15 [i_0]);
                        }
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            var_17 = (min(var_17, var_1));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    {
                        var_18 += (arr_1 [i_8] [i_8]);
                        var_19 = (arr_5 [i_8 - 1] [i_6 + 1]);
                        arr_26 [i_0] [i_7] = -56;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] = var_9;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        arr_38 [i_11] = -80;
                        var_20 = var_6;
                    }
                }
            }
        }
        var_21 ^= -53;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    var_22 *= var_3;
                    var_23 += var_2;
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
