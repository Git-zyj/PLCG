/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_5));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = var_17;
        arr_2 [i_0] = (((!56) ? var_8 : var_10));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] = (((arr_0 [i_0 - 3] [i_0 + 3]) == (arr_0 [i_0 - 3] [i_0 + 3])));
            var_21 = (min(var_21, ((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 1]) : var_14)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_22 = (arr_13 [15] [15] [15] [i_3] [1]);
                            var_23 = ((var_17 && (arr_6 [i_0 + 3] [i_2] [i_3] [i_0 + 3])));
                            var_24 = (arr_11 [10] [i_1] [5] [15]);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_25 = 39586;
                var_26 = (((arr_8 [i_0] [i_0] [i_0]) ^ (arr_8 [5] [i_1] [i_5])));
                var_27 = 653826423;
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_28 = (arr_3 [i_0]);

                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [6] [11] [12] [i_7] [i_7] = (~(arr_0 [2] [i_7]));
                    var_29 = (arr_12 [i_6] [i_7] [i_6] [i_6] [i_1] [1] [i_0]);
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_30 *= 0;
                        var_31 = (arr_12 [i_0] [3] [i_1] [i_6] [i_8] [8] [1]);
                        var_32 = (((~(arr_23 [i_0] [i_1] [2] [6]))));
                        var_33 = (!4129145660);
                    }
                    for (int i_10 = 3; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_34 = var_11;
                        var_35 ^= 1390974206478209875;
                        var_36 = ((arr_19 [i_1]) > var_8);
                    }
                    for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_37 = (min(var_37, ((((arr_13 [i_0 - 1] [i_1] [i_6] [7] [i_11 - 2]) == 590639350)))));
                        var_38 = ((var_18 > (arr_28 [i_0 + 4] [13] [i_6] [i_6] [i_11] [i_0 + 1] [i_8])));
                    }
                    for (int i_12 = 3; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_39 -= (arr_1 [1]);
                        var_40 = ((~(arr_6 [i_0] [13] [i_6] [i_8])));
                        var_41 -= var_9;
                    }
                    var_42 = (min(var_42, var_12));
                    var_43 = (max(var_43, ((((arr_23 [i_8] [4] [7] [i_0 + 4]) - var_10)))));
                }
                arr_36 [i_0] [i_1] [i_0] = (((arr_27 [i_0 + 3] [12] [i_1] [i_1] [i_6]) * var_18));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_44 ^= arr_19 [i_0];
                            var_45 = (((arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_13 + 1] [i_14]) == (var_0 == var_4)));
                        }
                    }
                }
            }
            var_46 = ((var_10 == (arr_11 [i_0 - 1] [2] [2] [i_1])));
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_48 [5] [i_0 + 4] [i_0] &= (max((max((((!(arr_24 [1] [9] [13] [i_0])))), var_5)), ((((arr_28 [i_0] [i_0 + 4] [i_0] [15] [i_0] [i_15] [i_15]) == (arr_28 [i_0] [1] [i_0 - 2] [i_0] [i_0] [i_0 - 3] [2]))))));
            var_47 -= ((((((((((arr_24 [i_15] [0] [i_0 + 4] [i_0 + 1]) ? (arr_33 [14] [14] [i_0] [1] [14] [1]) : (arr_20 [i_0 - 2] [i_15])))) == (arr_27 [2] [i_15] [4] [i_15] [i_15]))))) - ((var_12 ? (arr_27 [1] [i_15] [1] [i_0 - 3] [i_0]) : (var_9 - var_14)))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            arr_51 [i_0] [i_16] [2] = -var_5;
            var_48 = arr_10 [i_16] [i_16] [i_0 - 1] [i_0];
            arr_52 [15] = var_13;
        }
        var_49 = (min(var_49, ((((arr_21 [i_0] [i_0] [i_0 + 4] [4]) == (arr_35 [14] [i_0 + 1] [i_0 - 2] [i_0 - 2]))))));
    }
    var_50 = 1445344750;
    #pragma endscop
}
