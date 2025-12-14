/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~66060288)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_11 = (var_6 ? (arr_2 [i_2 + 2]) : var_0);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_12 = (max(var_12, (((arr_11 [i_4] [i_2 + 1] [i_3 + 2] [i_2 + 1]) ? var_7 : var_7))));
                            var_13 = (max(var_13, 1472147458));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4] = (~1);
                            var_14 = var_9;
                            var_15 ^= (66060297 == -1472147459);
                        }
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_16 ^= (1 ? (2 < 0) : ((0 ? var_3 : var_3)));
                            var_17 = (((((var_6 ? var_7 : (arr_1 [i_1] [i_5 + 1])))) && var_9));
                            arr_20 [i_0] [i_5] [i_0] [10] [i_0] [i_0] |= ((~(arr_9 [i_6] [i_6])));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_18 = (arr_16 [i_7] [i_5 + 3] [i_2 + 1] [i_1] [i_0]);
                            var_19 = var_3;
                            var_20 += var_1;
                        }

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_26 [i_2] [i_2] [i_2] [i_5] [i_8] = ((var_5 >= var_0) ? ((4228907007 ? 66060309 : 138)) : ((((166 == (arr_18 [1] [i_1] [1] [i_5] [i_5] [i_5] [i_1]))))));
                            var_21 = ((var_8 ? 18446744073709551613 : (arr_23 [i_0] [i_1] [i_2] [i_5] [i_5 + 2] [i_8])));
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_22 = (((arr_6 [i_0] [i_2 + 1]) ? 1472147481 : (~var_0)));
                            var_23 = (~var_7);
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_24 = var_0;
                            var_25 = (((~18446744073709551610) ? var_2 : (arr_12 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10])));
                            var_26 -= var_4;
                        }
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_37 [i_2] [i_2] = (~var_8);
                        var_27 -= ((1 ? (arr_33 [i_0] [i_2 + 1] [i_0] [i_11] [i_2]) : 4228906998));
                    }

                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_43 [i_2] [i_1] [1] [i_2] [i_1] [i_12] [i_13] = var_6;
                            var_28 = ((~(arr_41 [i_13] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2])));
                        }
                        var_29 = var_3;
                        var_30 = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_31 -= 17;
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_2] [i_1] [i_2] = (var_4 ^ var_4);

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_32 = (var_6 ^ 1);
                            var_33 = ((var_3 < (arr_7 [8] [i_2 - 1] [i_2])));
                            arr_50 [i_14] [i_0] [i_2 - 1] [i_14] [i_2] = 50;
                            var_34 ^= 4228906999;
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_35 += var_7;
                            var_36 = ((1073217536 ? -2005153702 : (arr_9 [i_2] [i_2])));
                        }
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            arr_55 [i_2] [i_2] [i_17] [i_1] [i_17] = 0;
                            arr_56 [i_1] [i_2] [i_1] = (((((2899713373424974510 ? (arr_6 [i_2] [0]) : 1))) ? var_1 : (var_5 < var_1)));
                        }
                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            var_37 ^= (((!23222) ? -1207854906 : 1));
                            var_38 = var_1;
                            var_39 = (max(var_39, (var_6 <= 138)));
                        }
                        var_40 = 17;
                        var_41 = var_3;
                    }
                    var_42 ^= (0 || 1207854885);
                }

                /* vectorizable */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    arr_62 [i_0] [i_1] [i_19] [i_19] = -126;
                    arr_63 [i_0] [i_1] [i_1] [i_19] = ((~((var_1 | (arr_45 [i_0] [i_0] [0])))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                arr_70 [i_21] [i_21] [i_21] [i_21] [i_21] [i_0] [i_0] = var_7;
                                arr_71 [i_21] = var_1;
                                arr_72 [i_0] [i_1] [i_1] [i_21] [i_20] [i_21] = ((~(~var_1)));
                            }
                        }
                    }
                    var_43 = 49981;
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_44 = (max(var_44, ((((~(arr_19 [5] [i_1] [5] [i_1] [i_1])))))));
                    arr_75 [i_22] = (0 - 126);
                    var_45 = ((4228907028 > (~var_0)));
                    var_46 = (min(var_46, (~var_5)));
                }
                var_47 = (max(var_47, ((((((arr_16 [i_0] [i_0] [2] [i_0] [i_0]) && (arr_10 [i_0] [11] [i_1] [i_1] [i_1])))) % 1))));
            }
        }
    }
    #pragma endscop
}
