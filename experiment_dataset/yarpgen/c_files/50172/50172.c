/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 9416912638849852034;
                arr_5 [i_0] = arr_3 [i_0] [i_0] [i_0];
                arr_6 [19] [i_1] = (max(72048797944905728, 96));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [10] [10] [3] = ((135 > ((2080374784 / (arr_0 [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] = (((arr_16 [i_0] [i_1]) ? (!-72048797944905719) : -12));
                                arr_19 [i_3] = max(((72048797944905722 ? var_17 : -22)), (+-1));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_2] = (max(((((((arr_12 [i_0]) ? (arr_7 [i_2] [i_1] [i_0] [i_0]) : var_0))) ? ((-2121814515 ? (arr_8 [17] [i_1]) : 2214592522)) : (((max((arr_14 [i_0] [10] [i_0] [20] [8]), var_14)))))), (min((arr_2 [i_0] [i_1] [i_2]), (arr_8 [i_2] [i_1])))));
                }
            }
        }
    }
    var_20 = (max(-23, var_18));

    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_32 [i_5] [i_6] [6] [i_6] = (max((arr_13 [i_5] [i_6] [i_5 - 1] [i_8]), 72048797944905719));
                        arr_33 [i_7] [8] [i_7] [i_7] [i_7] = (((max((arr_11 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5]), var_15)) / (((max((arr_11 [i_5] [3] [i_5] [i_8] [i_5 - 1]), (var_7 || var_13)))))));
                    }
                }
            }
        }
        arr_34 [i_5] = 66977792;

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_37 [i_5] = (~(((-18194 || (-2147483647 - 1)))));
            arr_38 [i_5] [i_5] [i_5] = (min(-66977779, 1));
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_48 [i_10 - 1] [i_11] [i_11] [i_13] [7] [i_11] = (~-64);
                        arr_49 [i_10] [i_11] [5] [i_13 - 1] = -1791979252541959363;
                    }
                }
            }
        }
        arr_50 [i_10] [i_10] = ((!(arr_22 [i_10 + 1] [i_10 - 1])));
        arr_51 [i_10] [i_10] = (((arr_14 [i_10 - 3] [22] [i_10 - 1] [i_10 - 1] [i_10 - 3]) | (arr_30 [i_10 + 1] [i_10] [0] [i_10] [i_10 - 1])));
        arr_52 [i_10 - 1] = (((arr_10 [i_10 - 2]) / (arr_42 [5] [i_10 + 1] [i_10])));

        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            arr_56 [i_14] [i_10] = var_5;
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            arr_66 [i_17] [i_10] [i_14] [i_14] [i_10] = var_3;
                            arr_67 [i_17] [i_16] [i_14] [i_14] [i_14] [i_14] [i_10] = (((arr_3 [i_15 - 1] [i_15 + 1] [i_15 + 3]) > (arr_63 [i_15 + 1] [i_15 + 2] [i_15 + 3] [i_15 + 3] [i_10 - 3])));
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
        {
            arr_71 [i_10 + 2] = (arr_46 [i_18] [i_18] [i_18] [i_18] [i_10 + 1] [i_10 + 1]);
            arr_72 [i_10] [i_18] = (((arr_65 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 + 2] [i_10]) ? (arr_21 [i_10 - 1] [i_18]) : (arr_21 [i_10 - 2] [i_18])));
        }
    }
    var_21 = -var_13;
    #pragma endscop
}
