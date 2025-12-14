/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_10);
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = (((arr_1 [i_0]) ? 8388576 : (arr_5 [i_0] [4])));
            var_14 = (arr_2 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_14 [8] [i_1] [i_2] [i_0] [i_1] [i_0] = var_2;

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_15 &= (~0);
                            arr_17 [i_0] [i_4] [i_2] [i_0] [i_4] = var_0;
                            arr_18 [i_0] [i_4] [1] [i_4] [1] = (arr_2 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_23 [0] [6] [i_5] [6] [6] = -102;
                            arr_24 [i_2] [i_1] [i_5] [i_3 - 2] [9] [i_3] = (~var_4);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_27 [i_3] [i_1] [i_6] [i_3] [6] = var_7;
                            var_16 = 33538048;
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_17 = (~var_7);
                            arr_30 [i_7] [i_1] [i_1] [i_7] [3] = var_8;
                            var_18 = (max(var_18, var_11));
                        }
                        arr_31 [i_0] [i_2] [i_2] [i_2] [i_2] [1] = -var_0;
                        var_19 = (!0);
                        var_20 += ((var_6 ? (arr_29 [i_1] [2] [10] [6] [i_3 - 1] [i_0]) : 3249233263));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_21 ^= ((var_1 ? (arr_0 [i_0] [i_8]) : (((arr_20 [4] [4] [4] [i_8] [4]) ? 1935421977 : -2048))));
            arr_35 [9] [i_8] = ((var_5 ? (1045734033 >= var_2) : (arr_26 [i_0] [i_8] [i_0] [i_8] [i_8])));
            arr_36 [i_0] [i_0] [i_8] = 16777212;
            arr_37 [i_0] [i_8] [i_0] = (1045734032 - 0);
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_22 ^= ((-var_11 ? (((arr_26 [i_0] [i_0] [i_0] [10] [i_0]) % var_5)) : var_6));
            arr_42 [i_0] [i_9] [i_9] = (~(arr_8 [i_0] [i_0] [1]));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_46 [0] [5] [i_10] = (arr_12 [i_10] [i_0] [i_0] [3] [3]);
            var_23 = (-9223372036854775807 - 1);
        }
        arr_47 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_51 [i_11] = var_2;
        var_24 = (((((6858 / (arr_22 [i_11] [i_11] [i_11] [i_11])))) ? (((~(arr_13 [i_11])))) : 6537065653620238512));
        var_25 = (arr_10 [3] [i_11] [i_11]);
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            {
                arr_56 [i_12] = var_3;

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_26 = (((~var_6) % (arr_60 [i_12] [i_12])));
                    arr_61 [6] [i_13] [6] &= ((~((~(max(787880284, 266338304))))));
                }
            }
        }
    }
    #pragma endscop
}
