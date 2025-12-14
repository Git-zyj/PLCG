/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_1));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_1] = ((var_9 ? (arr_2 [i_0 - 1]) : var_18));
            arr_8 [i_0] [i_1] [3] = (((var_6 ? 3493717231892873922 : (arr_0 [i_0]))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 *= var_3;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_21 = var_6;
                var_22 = (((arr_10 [i_2 - 1] [i_0 - 4] [i_0 - 1]) == ((~(arr_4 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_22 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] = var_6;
                            var_23 = var_17;
                            arr_23 [i_4] [i_0] [i_3] [8] [i_0] [i_4] = ((var_2 ? (((arr_4 [i_2] [i_2]) * var_11)) : (arr_13 [i_2 - 1] [i_2 - 1])));
                            var_24 = ((var_7 ? 120 : (arr_1 [i_0 - 3])));
                        }
                    }
                }
                arr_24 [i_0] = var_18;
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_25 = (max(var_25, var_3));
                        arr_32 [5] = (arr_0 [i_0 - 2]);
                        var_26 = ((18446744073709551592 ? (((arr_0 [10]) ? var_4 : 41014)) : 1536333995));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_9] [i_9] [8] [i_7] [i_0] [i_0] = (arr_12 [i_0 - 2]);
                            var_27 = (max(var_27, var_17));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_28 *= (arr_19 [4] [i_8] [i_7]);
                            arr_41 [i_10] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
                            var_29 = (min(var_29, var_17));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_11] [i_8] [9] [i_7] [i_6] [i_0 - 1] = (((arr_29 [i_11] [i_0] [i_6] [i_6] [i_0]) ? var_9 : var_4));
                            var_30 = ((var_3 ? (arr_19 [i_11] [i_8] [i_7]) : (arr_42 [i_0] [i_0] [i_0 - 4])));
                            var_31 = -var_18;
                        }
                        var_32 = var_1;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 11;i_14 += 1)
                {
                    {
                        var_33 *= ((~(arr_2 [i_0 - 4])));
                        var_34 |= (((arr_53 [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_12 - 1]) != ((var_3 ? var_14 : 18446744073709551591))));
                        var_35 = ((~(arr_14 [1] [i_14 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
