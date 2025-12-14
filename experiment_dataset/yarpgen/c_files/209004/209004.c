/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = var_1;
                    var_11 = (max(var_11, var_8));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_12 = var_1;
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_13 = var_8;
                            var_14 = var_2;
                            var_15 |= var_9;
                            arr_17 [i_3] [i_3] [i_3] [i_6] |= var_4;
                            var_16 = var_4;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = var_1;
                                arr_27 [i_4] [i_3] [i_7] [i_9 - 2] [i_9 - 2] [i_3] = var_1;
                                var_18 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_6;
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            {
                var_21 = var_8;
                var_22 = var_1;
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_23 = var_5;
                            var_24 = var_6;
                            var_25 = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
