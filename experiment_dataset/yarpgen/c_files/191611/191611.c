/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = var_11;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] &= (~(arr_4 [i_2] [i_3]));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_15 = var_8;
                            var_16 = var_12;
                            var_17 = 3047478547;
                            arr_18 [i_4] [i_3] [i_2] [i_1] [i_0] = var_10;
                            var_18 = ((!(~-32123)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2 - 1] = (((1247488758 - 41623) ? 23889 : (~1)));
                            var_19 = ((((-(arr_16 [i_0] [i_1] [i_2 + 3] [i_3] [i_5]))) != var_7));
                        }
                        arr_22 [i_0] = (arr_20 [i_2 + 1]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_20 = (((~var_4) ? var_6 : (arr_5 [i_0 + 1])));
                        var_21 = 1;
                        var_22 *= ((((~((-17483 ? 1247488718 : 11988534335938829092)))) ^ (((~(~257049567))))));
                        arr_25 [5] [i_1] [i_2] [i_2] [i_1] [i_6] = 32123;
                    }
                    arr_26 [12] [i_1] [i_0] [i_0] = (arr_2 [i_2 + 3]);
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_35 [i_9] [i_7] = var_10;
                    arr_36 [i_7] [i_7] [i_7] [i_7] = (max(((1 & (arr_8 [i_7] [i_7] [i_9]))), ((1 ? 1 : 23889))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    arr_41 [i_7] [6] [7] = ((1 & (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
                    var_23 = (max((((arr_11 [i_10 - 2] [i_10 - 2] [i_11] [1]) * var_11)), (arr_29 [i_10] [1])));
                }
            }
        }
    }
    #pragma endscop
}
