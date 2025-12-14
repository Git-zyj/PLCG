/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        arr_3 [i_0] = ((var_1 ? var_15 : ((min(1487902694, 1487902694)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (max(((max((arr_1 [i_1] [i_1]), (min(var_13, (arr_1 [i_1] [i_1])))))), (max((((65529 ? var_0 : var_8))), (arr_5 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_3] [i_3] [i_4] = ((((min(1, (arr_0 [i_4])))) << ((((((min(var_3, var_4))) ? (arr_7 [i_2] [i_1]) : var_9)) - 1603544869906775357))));
                        arr_15 [i_4] = ((min(((((arr_4 [i_1] [4]) ? var_6 : 1))), (min((arr_0 [i_3]), var_3)))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_18 [i_3] [i_3] [i_3] [i_3] [2] [i_3] [i_3] = var_10;
                            arr_19 [i_4] [i_2] [i_3] [i_2] [i_4] = (arr_4 [i_4] [i_4]);
                        }
                        arr_20 [i_1] [10] [i_4] [i_3] [i_4] = (2807064601 ? (max(18, 65525)) : (~var_10));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_23 [i_6] = var_10;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_7] [i_8] = (41 ? (~18446744073709551597) : (((~(arr_28 [1] [11] [i_8] [i_7])))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [1] [i_6] [i_7] [i_6] = ((var_12 ? var_8 : (((-28 ? 0 : 1)))));
                        arr_34 [i_8] [i_9] = var_7;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_37 [i_7] [i_7] [i_6] [1] [i_10] [i_6] = (min((~var_6), (((arr_35 [i_6] [i_7] [i_6] [i_10]) ? (arr_11 [i_10]) : (arr_7 [i_8] [i_8])))));

                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            arr_40 [0] [0] [0] [i_8] [i_10] [i_11] = ((((var_8 ? var_13 : var_5))));
                            arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] = (((((((arr_27 [i_10] [i_7] [i_10] [i_10]) ? 17 : var_8))) ? var_8 : (arr_25 [i_6]))));
                        }
                        arr_42 [i_6] [i_6] [i_7] [11] [i_10] [i_6] = (~65532);
                    }
                    arr_43 [i_6] [i_7] [i_8] = var_17;

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_47 [i_12] [i_12] [i_7] [i_7] [i_12] [i_6] = (((((var_13 ? var_7 : (arr_7 [i_6] [i_6])))) ? (arr_13 [i_12] [i_7] [i_6]) : 5710967700073887182));
                        arr_48 [i_6] [i_6] [i_12] = 65523;

                        for (int i_13 = 2; i_13 < 23;i_13 += 1)
                        {
                            arr_52 [i_12] [i_13] = var_10;
                            arr_53 [i_13 - 1] [i_13] [6] [i_8] [i_6] [i_13] [i_6] = (((arr_22 [i_13] [i_6]) ^ (arr_25 [20])));
                            arr_54 [i_12] = ((((((arr_28 [i_6] [4] [i_6] [i_12]) ? var_15 : var_18))) ? 20375 : (arr_24 [15] [i_13 - 2] [i_13 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_20 = 255;

    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        arr_57 [i_14] = ((min(((65535 ? 7180106876028135491 : var_8)), var_7)));
        arr_58 [i_14] |= ((((!(((var_15 ? var_5 : 1))))) || var_17));
    }
    var_21 = (((min(-20376, 65535))));
    #pragma endscop
}
