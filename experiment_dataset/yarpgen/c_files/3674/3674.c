/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (min(var_9, var_4));
    var_12 -= var_1;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(((var_0 ? var_2 : var_0), (min(var_3, var_8)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (!-322764765);
                        var_15 = (min((min(1263803956, -112)), ((min(65535, 1)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = 0;
                    var_17 = (arr_16 [20] [i_0 + 2] [20] [i_5]);
                    var_18 = -1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    {
                        var_19 ^= (~49);
                        var_20 = var_6;
                    }
                }
            }
        }
        var_21 = -0;
        var_22 = 34334;
        var_23 = ((!(arr_15 [i_6 + 2] [i_6 + 1])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_24 ^= var_1;
                                var_25 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                var_26 = ((!(arr_35 [i_16] [i_10] [i_12] [i_10] [i_10] [i_10])));
                                var_27 = 110;
                            }
                        }
                    }
                    var_28 = (arr_11 [i_10] [i_11] [i_10]);
                }
            }
        }
        var_29 = (((arr_31 [i_10] [i_10] [i_10] [i_10]) % var_5));
        var_30 = (!(arr_28 [i_10]));
    }
    for (int i_17 = 1; i_17 < 12;i_17 += 1)
    {
        var_31 = 2830541155;
        var_32 ^= (min(17927263552031460858, ((min(((10638460474918159871 ? var_9 : var_9)), ((var_7 ? var_4 : (arr_11 [i_17] [i_17] [i_17]))))))));
    }
    #pragma endscop
}
