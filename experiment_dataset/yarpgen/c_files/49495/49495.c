/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_10 = ((2315677771265980932 ? 31 : -2763732781410937564));
        var_11 = (min(var_7, ((var_8 - (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_12 = ((2763732781410937563 ? 166 : -89));
                        var_13 ^= min((arr_13 [0] [i_1] [i_1 + 1] [i_4] [i_4]), (arr_4 [i_2] [i_2] [i_2]));
                    }
                    var_14 = (~var_0);
                }
            }
        }
    }

    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        arr_16 [i_5 + 2] = 15619993211955771303;
        arr_17 [i_5] [7] = (((-(arr_14 [i_5 - 4] [i_5 - 3]))));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_15 = (((arr_27 [i_6] [i_7] [i_8] [i_8 - 1]) ? (arr_9 [i_8 - 2] [i_8]) : (arr_23 [i_8 - 1] [i_8 - 1] [i_8] [4])));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_16 = (arr_21 [i_6 + 2] [11]);
                            arr_30 [8] [i_7] [i_7] [i_7] [i_8] [4] = var_8;
                            arr_31 [i_6 + 1] [i_6 + 1] [10] [i_6 + 1] [i_6] [i_8] = (arr_4 [i_6] [i_6 + 3] [i_6 + 3]);
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_7] |= (arr_23 [i_8] [i_6 + 2] [i_8] [i_8 - 3]);
                            var_17 = ((var_9 ^ (arr_10 [i_6] [i_6])));
                        }
                    }
                }
            }
            var_18 = ((var_1 ? var_6 : (arr_18 [i_6 + 2] [i_6 + 3])));
        }
        var_19 = (((arr_24 [i_6 + 3] [i_6]) ? (arr_20 [i_6] [3] [7]) : 105));
    }
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {

                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_20 = (max(var_20, var_0));
                        var_21 = (max(var_21, (arr_15 [i_12])));
                    }
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        var_22 *= (arr_43 [i_12 + 1] [i_12 + 2] [i_16 + 2] [12]);
                        var_23 = (arr_45 [i_12 - 1] [i_13] [i_16 + 1] [i_16 + 1]);
                        arr_48 [i_12] [i_12] [12] [i_16] = ((((arr_41 [i_14]) ? (arr_41 [i_12 + 2]) : 5875254983003448782)));
                    }
                    var_24 = arr_38 [i_12] [i_12] [i_12 + 2];
                }
            }
        }
        arr_49 [i_12] [i_12 + 1] = ((!(((1745598553162391177 & (arr_38 [i_12] [i_12] [i_12]))))));
    }
    #pragma endscop
}
