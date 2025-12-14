/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = ((-(var_10 == var_1)));
            var_15 = (arr_0 [i_0]);
            var_16 = ((var_13 < (arr_1 [i_0])));
        }
        var_17 = ((0 ? (arr_4 [i_0] [i_0]) : 1));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [7] [i_0] [i_0] = ((-(arr_7 [i_0] [i_2])));
            arr_10 [i_0] [4] [6] = var_14;
            var_18 = (arr_5 [1] [i_2] [i_2]);
        }
        arr_11 [i_0] = (((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3] = 3;
        arr_15 [i_3] = (((((arr_13 [i_3]) ? (arr_13 [i_3]) : var_5)) > ((1 ? -1 : 1))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (arr_16 [1]);
        var_19 = ((~var_7) & (((arr_17 [i_4]) & (arr_17 [i_4]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_27 [i_4] [i_4] [i_6] [i_6] = ((((arr_21 [i_7 - 1]) ? 1 : var_11)));
                        arr_28 [i_4] [i_4] [13] [i_7] [i_4] [14] = ((~(((((arr_13 [i_7 + 1]) + 2147483647)) >> (((arr_13 [i_7 + 1]) + 192505582))))));
                        var_20 = ((((min((arr_25 [i_6] [i_7 - 1] [2] [i_6] [i_6] [i_5]), var_0))) - (((arr_25 [3] [i_7 + 1] [11] [11] [i_5] [0]) % 236))));
                    }
                }
            }
        }
        arr_29 [i_4] = (max((((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? var_13 : var_4)), (!0)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_21 = (((arr_16 [i_8]) / var_1));
                        var_22 = (arr_21 [12]);
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_23 = (((arr_39 [i_8] [i_9] [i_10] [i_12]) - 134217727));
                        arr_40 [i_12] [13] [i_12] [i_12] [i_12] = var_9;
                        arr_41 [i_12] = var_7;
                    }
                    arr_42 [11] [1] [i_9] [i_8] = (arr_35 [12] [12] [12] [12]);
                }
            }
        }
        arr_43 [14] = var_2;

        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_24 = ((~(arr_32 [i_8])));
            arr_46 [i_8] [i_8] = var_13;
            arr_47 [1] [1] [1] = (arr_44 [i_8] [i_13]);
        }
    }
    var_25 = var_8;
    #pragma endscop
}
