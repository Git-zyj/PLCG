/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((min((min(((max((arr_1 [i_0]), (arr_6 [6] [i_1] [4])))), (arr_7 [1] [i_1 - 1] [1]))), ((min((arr_1 [i_0]), (min((arr_5 [i_0]), (arr_1 [i_0])))))))))));
                    var_13 = (min((arr_0 [i_0] [i_0]), (arr_6 [4] [i_1 - 1] [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (arr_4 [8] [i_3] [i_3]);
                        var_15 += (arr_3 [i_2] [i_0]);
                        arr_10 [i_3] = (arr_7 [i_3] [i_1 + 1] [i_0]);
                    }
                    var_16 = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_17 |= (arr_9 [i_0] [i_1] [i_1] [i_4 - 1]);
                                var_18 += (arr_7 [i_1 + 1] [i_2] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (min((max(((min(var_8, 1))), (max(5970857270981895064, 22)))), ((max(var_10, var_10)))))));
    var_20 = var_7;

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 = (min((min((arr_16 [i_6]), (arr_16 [1]))), (arr_16 [i_6])));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_22 += (arr_15 [i_6]);
            var_23 = (max(var_23, (arr_18 [i_6] [i_7])));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_24 = (arr_22 [0] [i_7] [i_8] [i_7]);
                            var_25 = (min(var_25, (arr_21 [i_10])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    {
                        var_26 = (min(var_26, (arr_23 [10] [10] [10] [10])));
                        arr_30 [i_6] [i_6] [i_7] [i_12 - 1] [5] = (arr_15 [i_6]);
                        arr_31 [i_6] [i_6] [i_7] [i_12 - 1] = (arr_27 [i_12] [i_11] [i_7] [i_6]);
                        var_27 = (max(var_27, (arr_29 [6] [6])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_28 += (arr_32 [i_6] [i_6] [14]);
                        var_29 = (arr_32 [4] [i_7] [i_7]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
