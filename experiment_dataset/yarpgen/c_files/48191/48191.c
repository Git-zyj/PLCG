/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 - (var_7 - var_12))));
    var_14 = ((!((!(!var_6)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((!(arr_8 [i_0] [i_0 + 1])));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = var_0;
                        var_17 = (arr_10 [i_0 - 1] [i_0 - 2] [i_0 - 1]);
                        var_18 += ((!(arr_3 [i_0 - 2])));
                        var_19 = (arr_4 [i_0 + 1]);
                        var_20 = -var_12;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_4] [1] [i_4] [i_0] [i_0] = (~1747334006219316309);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = (min(var_21, (arr_3 [i_0 - 2])));
                            var_22 = (min(var_22, (((!(arr_9 [i_0]))))));
                        }
                    }
                }
            }
        }
        var_23 = (((arr_2 [i_0 - 1]) ? (arr_12 [i_0 - 1] [4] [i_0] [i_0] [i_0] [i_0]) : var_10));
        var_24 &= (arr_6 [i_0 - 2] [i_0] [i_0 - 1]);
        var_25 = (arr_2 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    arr_25 [i_8] [i_6] [i_6] = (((((!(arr_21 [i_8] [i_7])))) | (arr_21 [i_6] [i_6])));

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_26 ^= 16699410067490235306;
                        arr_29 [i_9] [i_8] [i_9] [14] [i_6] = ((var_0 ? (arr_20 [i_9 - 1]) : (arr_20 [i_9 + 1])));
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, ((max(8748057935595597070, 19)))));

                        for (int i_11 = 3; i_11 < 24;i_11 += 1)
                        {
                            var_28 = (min(var_28, 3526841315397003892));
                            var_29 = var_3;
                            arr_35 [i_11] [i_11] [i_11] [i_11] [i_11] = (arr_27 [i_10 + 1] [i_11] [i_11 - 1] [i_11 - 1]);
                            arr_36 [i_11] [i_10] [i_11] [i_7] [1] = ((!(((arr_31 [i_6] [17] [22] [i_7]) > ((min(var_12, (arr_18 [i_6]))))))));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_30 = (var_6 <= -1747334006219316309);
                            var_31 = ((-((~(arr_20 [i_10 + 1])))));
                            var_32 = (min(var_32, (((((max(30, var_2))) == (((arr_18 [i_10 - 1]) ? (arr_18 [i_10 + 1]) : (arr_18 [i_10 - 1]))))))));
                            arr_39 [i_6] [i_7] [i_12] [i_8] [i_12] = -6365178403453145210;
                        }
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            var_33 = (min(var_33, var_7));
                            var_34 += (((arr_34 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_40 [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1]) : ((var_0 | (((-(arr_40 [i_6] [16] [i_6] [i_10 + 1]))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_48 [16] [i_7] [i_7] [i_7] &= ((94 ? (((!((max((arr_20 [i_7]), (arr_37 [i_6] [i_7]))))))) : ((max((arr_44 [i_15] [i_14] [i_8] [i_6]), var_2)))));
                                var_35 = ((-((~(((!(arr_28 [i_6] [i_14]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 &= ((9 ? 17603103372065059425 : -1807466077014018522));
    #pragma endscop
}
