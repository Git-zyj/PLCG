/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [10] = ((~(arr_2 [10])));
        arr_4 [i_0] [i_0] = ((!(arr_0 [i_0])));
        arr_5 [i_0] = 15852578150818573795;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [0] [i_0] [10] [i_2] [i_3 - 1] = ((var_3 ? ((~(arr_9 [i_0] [i_0] [i_0]))) : (var_7 != var_8)));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [6] [i_0] = ((-(arr_8 [i_1 + 1] [i_0])));
                            arr_17 [i_0] [i_1 - 1] [i_1] [4] [i_1 - 3] [i_1 - 1] = (((arr_6 [5] [i_1 - 2]) < ((-(arr_9 [12] [i_2] [15])))));
                            arr_18 [10] [i_1] [i_2] [6] [i_3 + 1] [i_0] [i_4] = (arr_1 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] = (arr_15 [0] [i_1 + 2] [13] [i_2] [i_5] [i_2]);
                            arr_23 [i_0] [i_1 - 1] [i_2] [i_5] = (((arr_10 [i_3] [i_3 + 3] [i_3] [i_3] [9] [i_3]) <= var_4));
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_27 [i_0] [i_3] [i_2] [i_1] [i_0] = ((-1426183988 ? -1494567975 : (((arr_20 [14] [i_0] [9] [i_3] [i_6 - 1]) / 262144))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_6 + 1] = (arr_24 [8] [i_1] [i_2] [i_3] [i_3 + 2] [15] [i_3]);
                        }
                    }
                }
            }
        }
        arr_29 [6] [i_0] |= (arr_21 [i_0] [4]);
    }
    var_10 = ((!(((var_6 - ((var_0 ? var_6 : var_0)))))));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_37 [i_7 - 1] [17] [i_7 + 4] [i_7] = ((var_1 ^ (arr_34 [i_8])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_43 [i_8] [5] [5] = ((((arr_40 [i_8] [1] [i_8] [i_8 + 2] [i_8]) * (arr_40 [i_7] [i_7] [i_7] [i_8 - 1] [9]))));
                                arr_44 [i_7] [i_8 + 1] [i_7] [i_10] [19] = ((((min((arr_35 [i_7 + 4] [i_7 + 4] [i_7]), (arr_34 [i_7])))) * ((~(arr_36 [i_7] [20] [i_9])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_49 [i_7] [i_7] [i_12] = (-(((arr_47 [i_7 + 4] [i_7 - 1] [i_8 + 2] [i_8 + 3] [i_12 + 1]) / (arr_46 [i_7 + 4] [i_7 + 4] [i_8 - 1] [i_8 + 4] [i_12 - 1]))));
                                arr_50 [20] [i_12] [i_9] [i_12] [12] = var_9;
                            }
                        }
                    }
                    arr_51 [i_7] [i_7 + 2] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
