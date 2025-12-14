/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_14 = (max(var_14, ((-(arr_4 [i_0])))));
                    arr_7 [i_1] [i_1] = (arr_1 [i_1]);
                    var_15 = (402918604 >> (((arr_3 [i_0 - 1] [i_0 + 1] [i_1 + 1]) + 110)));
                    var_16 = (((arr_0 [i_0] [i_1 + 1]) ? (arr_1 [3]) : (~var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = ((var_3 + (~var_11)));
                                var_18 += (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) != (var_10 - var_13)));
                                var_19 = (~var_8);
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_14 [i_1] = (~var_0);
                    var_20 = (((var_3 && var_13) ? (~var_5) : (arr_13 [i_0] [i_0] [i_0 - 3] [i_5 - 1])));
                }
                var_21 = (arr_12 [i_0 - 2] [i_0 - 2] [i_0 + 1]);
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        var_22 = (arr_16 [i_6] [3]);
        var_23 = var_9;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        arr_20 [i_7] [i_7] = (arr_0 [i_7] [i_7]);
        var_24 = (min(var_24, (arr_19 [i_7])));
        var_25 = ((~(~var_9)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_26 = ((var_3 ? 33676 : var_3));
        var_27 ^= var_4;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                {
                    arr_30 [i_10] [i_10] = ((-(arr_12 [i_10 - 2] [i_10 - 2] [i_10 - 1])));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            {
                                var_28 = (arr_16 [16] [i_12]);
                                arr_37 [i_8] [i_10] [8] [i_10] [i_12] [i_12] = (2859604469 / var_6);
                                var_29 = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_30 = (var_10 >= (arr_29 [i_8 + 1] [i_8 - 1]));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_31 = var_11;
        var_32 = (max((((!(arr_17 [1])))), (max((arr_17 [i_13]), (arr_17 [i_13])))));
        arr_40 [i_13] = (max((((arr_39 [i_13]) + var_5)), (arr_38 [i_13])));
        var_33 ^= (arr_38 [i_13]);
    }
    #pragma endscop
}
