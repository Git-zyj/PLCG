/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((min(((-(arr_1 [i_2]))), 0)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (-(1 * 6382694107797583655));
                        var_21 = (min(var_21, 87));
                    }
                    var_22 = (arr_6 [i_2] [i_1] [i_0] [i_0]);
                }
            }
        }
        var_23 = ((((max((((arr_1 [i_0]) & (arr_6 [i_0] [i_0] [i_0] [12]))), (!var_10)))) ? var_18 : ((-7699968971606569021 ? 23799 : 8))));
        var_24 |= (((arr_11 [i_0] [i_0]) | ((((7218325733764687773 | 214) ? ((var_14 ? -44 : (arr_0 [i_0]))) : ((((arr_6 [i_0] [11] [i_0] [i_0]) * var_12))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 = (1 & 4014315268);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_26 = ((((3681468491 ? ((1964941527642615725 ? 2712461062985270299 : 9222480472528085239)) : var_18)) <= ((max((arr_15 [i_6 + 3]), var_9)))));
                                var_27 = (!-93);
                                var_28 = var_14;
                                var_29 = ((((max(((((arr_24 [i_4] [i_7] [i_6] [i_7]) <= 1541791260))), ((6 / (arr_9 [i_8] [i_4] [i_4])))))) == (((arr_17 [i_4]) ? (arr_17 [i_4]) : (arr_17 [i_4])))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_30 = ((((max((min(1541791272, (arr_24 [i_4] [14] [i_6] [14]))), -4294967295))) ? (((arr_19 [8] [i_5 - 2]) ? var_3 : (1 < var_15))) : ((1 ? 1139658840 : 0))));

                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            var_31 = (max(var_31, (arr_2 [8])));
                            var_32 = ((-(((var_1 <= (1 < 57))))));
                            var_33 = ((~(arr_5 [i_10])));
                        }
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_34 = var_1;
                            var_35 = ((-(arr_12 [i_11 + 1])));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_36 += (((((((!(arr_6 [10] [i_6 + 1] [i_9] [4]))) ? 1 : (arr_23 [i_4] [3] [i_6 - 1] [i_4] [i_5 - 3] [i_5 - 3])))) && (arr_8 [i_4] [6] [4])));
                            var_37 = ((~((-106 ? ((((2162122849 >= (arr_32 [11] [i_4] [11] [i_9] [3]))))) : (((arr_7 [i_4] [i_12] [i_12]) / var_9))))));
                            var_38 += ((!(((12 ? -20 : 53023)))));
                            var_39 = (arr_26 [9] [i_5 - 4] [i_6] [11] [i_9] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_40 = ((+(min((arr_6 [9] [i_5] [12] [i_9]), 221737115))));
                            var_41 = (min(((min(var_14, var_7))), 3));
                            var_42 = (((arr_6 [i_5 + 1] [i_6 + 3] [i_5] [1]) ? (((arr_17 [i_4]) ? (max((arr_7 [i_4] [i_6] [9]), 65519)) : var_15)) : (((((8159470486972841980 | 17473) != (((14 ? 1 : (arr_22 [6] [i_5] [i_6] [i_9] [i_13]))))))))));
                        }
                    }
                }
            }
        }
        var_43 = (min((var_17 % 38331), (((arr_18 [i_4] [i_4] [i_4] [11]) ? (min((arr_36 [i_4] [i_4] [i_4] [15] [i_4]), 0)) : ((2334343783 << (46 - 46)))))));
        var_44 = (arr_6 [6] [i_4] [i_4] [i_4]);
        var_45 = arr_21 [i_4];
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_46 &= 164;
        var_47 = (((!var_15) ^ (((arr_38 [i_14] [i_14]) + 1))));
        var_48 = (((!48062) ? (((93 >= (arr_37 [i_14])))) : 23456));
    }
    var_49 = -var_14;
    #pragma endscop
}
