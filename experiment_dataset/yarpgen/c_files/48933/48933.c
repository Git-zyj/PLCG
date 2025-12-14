/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 <= (max((max(var_3, var_10)), var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((8891582815309086696 ? 8891582815309086696 : 8891582815309086696));
                        var_12 = (min(var_12, (((var_8 || var_6) ? var_4 : ((4063650988 ? 63 : 193))))));
                        var_13 = ((~0) ? (var_7 | 216) : 253);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 = var_3;
                        arr_16 [i_0] [6] [i_4] [3] = (~-8891582815309086696);
                    }
                    arr_17 [i_0] [7] [i_2] = (((((var_0 != (arr_7 [3] [3] [i_0])))) * var_7));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 |= ((var_4 ? var_6 : (arr_6 [i_1 + 2] [i_1 - 1] [i_1])));
                                var_16 = (((arr_9 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 2] [i_6 - 4] [i_6]) ? (arr_9 [i_6 + 2] [i_6] [i_6] [i_6] [i_6 - 1] [9]) : var_5));
                                var_17 &= var_8;
                                arr_25 [i_0] [i_0] [i_0] = (var_2 * var_10);
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_18 = ((var_4 ? var_2 : (arr_32 [i_0] [i_0] [i_7] [i_0] [7] [i_9])));

                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            var_19 = (((arr_2 [i_0] [i_0] [i_8]) ? (arr_6 [i_0] [i_7] [i_8]) : var_5));
                            arr_37 [i_0] [i_0] [i_8] [i_0] [i_10] [11] [i_0] = (var_7 || var_10);
                        }
                        arr_38 [i_0] [i_7] = (((((var_10 ? (arr_23 [1]) : var_10))) ? ((var_7 << (var_7 - 933))) : (((arr_18 [i_0] [i_0] [1] [i_9]) ? var_3 : var_7))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] = (((var_10 ? 91 : 8891582815309086696)));
                    }
                }
            }
            var_20 = ((~var_7) ? (((arr_8 [i_7 - 1] [i_7] [i_0]) ? var_5 : var_9)) : ((var_0 ? var_2 : var_3)));
        }
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            var_21 = (max(var_21, (((var_3 && ((!(arr_22 [i_11] [i_11] [1]))))))));
            var_22 = (var_8 * var_2);
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_46 [i_0] [i_12] = (((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [12]) ? var_4 : (!var_9)));

            for (int i_13 = 4; i_13 < 10;i_13 += 1)
            {
                arr_51 [i_0] [i_12] [i_13 - 3] [i_0] = ((((var_2 >> (((arr_41 [i_0] [i_0] [i_13]) - 16319)))) / (arr_4 [i_0])));
                var_23 = (min(var_23, (((1854322271 ? 2440645024 : 63)))));
            }
            arr_52 [i_0] [i_0] [10] &= var_5;
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_24 = var_2;

            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                var_25 = ((~(arr_10 [i_0] [i_15 + 3] [i_15] [i_15])));

                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_26 += ((1854322272 ? 0 : 83));
                    var_27 = var_7;
                    var_28 = ((var_9 ? var_5 : ((var_0 ? (arr_3 [i_0] [i_14] [i_15]) : var_1))));
                }
                for (int i_17 = 2; i_17 < 12;i_17 += 1)
                {
                    arr_63 [11] [i_14] [9] [i_0] = ((((var_5 ? var_8 : var_7)) < var_9));
                    var_29 = (((arr_60 [i_0] [13] [i_15] [i_15 + 3] [i_0]) ? var_0 : var_7));
                    var_30 = (((arr_2 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_6));
                    var_31 = (((((var_2 ? var_5 : var_7))) >= ((237 ? -1113592286 : 1854322269))));
                }
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    var_32 = (((arr_65 [i_15] [i_15 + 2] [i_15 + 2] [i_15 + 2]) ? (arr_9 [11] [i_15 + 4] [i_15 + 2] [1] [i_15 + 1] [11]) : (arr_13 [i_0] [i_14] [i_14] [i_18])));
                    var_33 = (((arr_26 [i_15 + 4] [12] [i_15 + 2]) ? (var_0 < var_3) : var_8));
                    arr_66 [i_0] = (((arr_0 [i_15 + 3] [i_0]) ? (arr_13 [i_0] [i_0] [i_15 - 1] [i_15]) : var_4));
                    var_34 &= (~var_4);
                    arr_67 [i_0] = ((var_9 - (arr_14 [i_0])));
                }
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    arr_73 [i_20] [i_20] [i_20] [i_0] = (((((0 ? 1854322271 : (arr_28 [i_0] [i_14] [4] [i_20])))) ? (arr_58 [i_20] [i_14] [i_20] [i_14] [i_19] [i_19]) : (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (arr_53 [i_20] [i_14] [i_14]) : var_10))));
                    arr_74 [i_0] [i_14] [1] [i_14] = (((((var_7 ? var_7 : (arr_48 [i_14])))) ? ((((arr_65 [i_0] [i_14] [i_0] [i_20]) ? var_2 : var_6))) : ((var_6 ? var_2 : var_8))));
                }
                arr_75 [i_0] [i_14] [i_19] [i_14] = ((((((arr_21 [i_0]) ? var_9 : var_6))) ? -var_9 : ((var_4 ? var_1 : var_10))));
                arr_76 [i_0] [i_14] = var_1;
            }
            for (int i_21 = 3; i_21 < 12;i_21 += 1)
            {
                var_35 = (min(var_35, (arr_65 [i_21] [i_14] [i_14] [i_14])));
                arr_80 [i_0] [i_21] [i_21] [i_0] = (((arr_53 [6] [i_21 - 2] [i_21]) < var_9));
                var_36 = (arr_13 [i_0] [i_0] [i_14] [i_0]);
            }
            var_37 = (((arr_79 [i_0] [i_0] [i_0]) ? (arr_42 [i_0]) : var_7));
            arr_81 [i_0] [5] = (17470445906624977820 * 58);
        }
        var_38 = ((var_3 ? var_10 : (!var_3)));
        var_39 = (var_7 ? (var_3 != var_5) : (arr_54 [i_0] [i_0] [i_0]));
    }
    var_40 &= (max(19, 635048760));
    var_41 = (max(((var_1 ? ((var_5 ? var_10 : var_0)) : (var_4 <= var_4))), (((var_9 ^ var_2) ? -var_4 : ((var_6 ? var_9 : var_4))))));
    #pragma endscop
}
