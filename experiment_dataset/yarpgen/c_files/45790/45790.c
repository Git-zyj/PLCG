/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((~((((var_14 / var_8) <= var_9)))));
                                var_18 ^= (arr_6 [i_0] [i_0]);
                                arr_16 [i_0] [i_2] [i_4] = (min((arr_9 [i_4] [i_1] [1] [i_3] [i_4]), (min((arr_9 [i_4] [12] [i_2] [7] [i_0]), (arr_5 [i_4])))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_1] [i_2] [i_1] [i_1] [i_0] [i_0] = (arr_11 [i_1] [i_1] [i_1 - 1] [i_5]);
                                arr_23 [i_0] [i_1 + 2] [i_0] [i_0] [i_6] = ((((var_14 ? 9223372036854775807 : var_2)) * (((min((arr_10 [i_0] [i_1] [i_2] [i_5 - 1] [i_6]), (!var_8)))))));
                                arr_24 [i_0] [i_2] [i_6] = (arr_2 [i_1 - 1]);
                                arr_25 [13] [i_1] [i_1] [i_5 - 1] [i_5] [i_6] = ((!(var_8 >= var_4)));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = ((!(arr_2 [i_0])));
        arr_27 [i_0] [i_0] = -var_6;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                {
                    arr_39 [i_7] [i_8] [i_8] [10] = max((arr_34 [3]), var_0);
                    arr_40 [i_7] [i_9] = ((((((var_9 ? 60 : (arr_12 [i_9] [i_8] [i_8] [i_8] [i_7]))))) ? (arr_13 [i_7] [i_9 - 1] [i_9] [i_8] [7] [i_8 - 2]) : ((min(7, var_5)))));
                }
            }
        }
        arr_41 [i_7] |= (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]);
        var_19 = (min(var_19, (((!((var_5 && (arr_8 [i_7] [i_7] [i_7] [i_7]))))))));
        arr_42 [i_7] [i_7] = ((((min(var_6, (arr_5 [i_7]))) + 2147483647)) << (((!(arr_5 [i_7])))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_20 = var_8;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_45 [i_10] [i_13])));
                        arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (max(54, 5));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_22 = -15;
        arr_60 [i_14] [i_14] = (arr_53 [7] [i_14] [i_14]);
    }
    #pragma endscop
}
