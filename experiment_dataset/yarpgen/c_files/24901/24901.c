/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_14 - var_14);
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_20 = ((var_1 ? 9 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_21 = (-242 % (var_4 | var_1));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_22 = ((var_13 ? (arr_3 [i_0] [i_0] [i_5]) : (arr_5 [i_0])));
                            var_23 = ((~((var_16 ? 0 : (arr_7 [10] [10] [i_2] [i_2])))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] &= ((32817 ? (arr_9 [11] [i_1] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [11] [i_2] [i_2] [i_4] &= ((var_6 ? (arr_8 [5] [i_2] [8]) : (arr_8 [i_4] [i_4] [i_4])));
                        var_24 = ((var_0 ? (((arr_5 [i_0]) | (arr_13 [i_0] [i_0] [i_2] [i_0]))) : (arr_4 [i_1])));
                        arr_20 [i_0] [2] [i_1] [7] [i_4] = ((((var_13 ? -1686025935 : (arr_3 [i_0] [i_0] [i_2]))) << (((arr_15 [i_0] [i_1] [i_0] [i_1]) - 2021502580))));
                    }
                    arr_21 [i_0] [i_1] = (29260 & var_9);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_25 ^= ((var_8 ? var_17 : ((7785 ? 831091945 : -1897216867))));
                                var_26 = var_0;
                                var_27 &= (((14 < var_11) + (arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 1])));
                                var_28 = arr_22 [20] [i_1];
                                var_29 = (-1793503634 ? 1686025934 : 2971901599);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_9] [i_6] [i_9] [5] = ((~((32719 << (var_14 - 11730)))));
                                var_30 = (min(var_30, (arr_33 [i_0] [i_0] [20] [20])));
                            }
                        }
                    }
                    arr_38 [9] [9] [i_1] [i_1] = (((((32719 ? 2147483647 : (arr_23 [5] [i_1] [i_6 - 2])))) ? ((2147483640 ? -1043694066 : 32726)) : (((-1686025938 == (arr_13 [14] [14] [9] [i_0]))))));
                    arr_39 [6] [i_1] [i_6 - 2] = ((7772 & (arr_13 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2])));
                }

                /* vectorizable */
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_31 = (((arr_42 [i_11] [i_13 + 2] [i_11] [i_11 - 1]) ^ (arr_42 [i_11] [i_13 - 1] [i_11 - 1] [i_11 - 1])));
                                arr_47 [i_0] [i_0] [i_0] [8] [i_11] [1] = var_13;
                                var_32 = ((-(arr_2 [i_13 - 2] [19] [i_11 + 2])));
                            }
                        }
                    }
                    arr_48 [i_11] = (((arr_11 [i_11 + 1] [i_11 + 2] [i_11 - 1]) <= var_0));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_33 = (arr_42 [i_11] [i_11 + 1] [i_11 + 2] [i_11 - 1]);
                                arr_54 [i_0] [i_0] [i_11] [7] [7] = ((((7785 ? 1259855862 : (arr_2 [i_0] [i_1] [0]))) | ((((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_11 - 1]) : var_10)))));
                                var_34 += (var_13 + -1942254229);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    var_35 = (!32719);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_36 = var_0;
                                var_37 = (((arr_32 [i_18 - 1]) & var_12));
                            }
                        }
                    }
                    var_38 = 32719;
                    var_39 = (min(var_39, (((var_10 ? -29855 : 7785)))));
                    arr_63 [i_0] [i_1] [i_16] = var_5;
                }
                arr_64 [0] = (max((max((~var_17), -1)), (((arr_16 [i_0] [i_0] [i_0] [i_1]) ? (var_12 / 1686025934) : ((((arr_26 [i_0] [i_0] [i_0] [i_1] [i_1]) < 31868)))))));
            }
        }
    }
    #pragma endscop
}
