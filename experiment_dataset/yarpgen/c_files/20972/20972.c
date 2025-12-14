/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((var_0 & -1) == (((var_3 << (2713058 - 2713034)))))) ? (((var_8 ? var_4 : var_9))) : (((2713058 - var_10) & 1376992455))));

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 1383641384));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_14 |= (max((max(var_3, var_0)), (((var_6 ? (arr_14 [i_3 - 3] [i_3] [i_3] [i_3]) : 4293952916)))));
                                var_15 = ((((max(-var_3, var_5))) ? (((var_5 != -1) ? (max(var_0, var_4)) : -4292254237)) : (arr_13 [i_3 + 2] [i_1 + 1] [i_0 - 1])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2] = 29285;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [1] [i_1] [i_1] [i_6] [i_6] [i_6] = (min((arr_11 [i_0] [5] [i_0] [i_1]), (((36250 | (min(4083753862, 39181)))))));
                                var_16 = ((~((max(var_2, var_7)))));
                            }
                        }
                    }
                }
            }
        }
        var_17 = var_8;
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_18 = (min(var_18, (((((max(var_3, (min(var_2, var_6))))) > var_5)))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_19 = 13044624630457070060;
                                var_20 = (min(var_20, ((!((((arr_27 [i_10 - 2]) ? var_8 : 14)))))));
                                var_21 = (min(var_21, ((((4292254238 + (((max(1, var_2))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_22 = ((0 ? -32754 : 35437));
                                var_23 = (min(var_23, ((min((arr_35 [i_13] [15] [6] [i_13] [i_13]), (max(8953804803900289398, -3)))))));
                                arr_42 [14] [i_8] [i_12] = ((var_0 || 436668278) ? ((((!(arr_33 [i_7] [i_7]))))) : ((-32751 ? 742813090 : 8388)));
                            }
                        }
                    }
                    var_24 = var_7;
                    arr_43 [i_8] [i_8] [20] = (min(18950, (((var_9 - var_6) ? ((var_2 ? var_6 : var_6)) : 36250))));
                    var_25 ^= (((((min(var_11, 10123)))) ? (~var_4) : var_9));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 10;i_14 += 1)
    {
        var_26 = (min(var_26, ((((arr_38 [i_14 - 2] [i_14] [i_14] [i_14 - 2]) ? (arr_38 [i_14 + 1] [i_14] [i_14] [i_14 - 2]) : var_5)))));
        arr_47 [i_14] = (var_8 ? (arr_46 [i_14 - 2]) : var_0);
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                {
                    var_27 = -var_0;
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 9;i_18 += 1)
                        {
                            {
                                var_28 = (min(var_28, var_6));
                                var_29 = 15;
                                var_30 = (var_11 || var_7);
                            }
                        }
                    }
                    var_31 -= var_4;
                    arr_58 [i_14] [i_15] [1] |= (((arr_54 [i_15 + 1] [i_15] [i_15] [2] [i_15] [9]) ? (~var_7) : 3215143831));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 10;i_19 += 1)
        {
            for (int i_20 = 4; i_20 < 9;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 8;i_21 += 1)
                {
                    {
                        var_32 = ((((((arr_24 [i_21]) ? var_8 : var_2))) ? (arr_39 [i_14 - 2] [20]) : ((1038623465 ? var_0 : -116))));
                        var_33 = (max(var_33, (23555 >= var_3)));
                        arr_65 [i_14] [i_20] = (((arr_61 [i_21] [i_21 + 3] [i_21] [i_21 - 4]) ^ var_7));
                        arr_66 [i_21] [i_20] [1] [i_14] [1] [i_14] = (((arr_59 [i_14 - 2] [i_19 - 2]) ? -9223372036854775804 : var_8));
                    }
                }
            }
        }
        var_34 = (-7 % 18446744073709551603);
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 12;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {
            {
                var_35 = (min(43398, ((((((16914 ? -11 : 4292254239))) && ((max(var_11, var_7))))))));
                var_36 = (arr_33 [14] [i_23]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 16;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 16;i_25 += 1)
        {
            {
                arr_78 [i_24] [i_24] [i_25] = ((var_7 * (min(4095, -1))));
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 0;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 15;i_27 += 1)
                    {
                        {
                            arr_85 [i_24] [i_24] [i_24] [i_24] [i_24] = ((((var_7 ? ((55417 ? 14 : var_2)) : (arr_72 [i_27] [i_27]))) * (((var_9 < var_2) >> (18446744073709547520 - 18446744073709547500)))));
                            var_37 = (min(var_37, ((max((((18446744073709547520 ? (~-8) : ((min(10100, -25364)))))), ((-5695 ? var_1 : (arr_80 [i_26 + 1] [i_26 + 1] [i_26 + 1]))))))));
                            arr_86 [6] [i_26] [8] [i_24] [i_24] = ((((arr_35 [i_24] [i_25] [15] [16] [18]) == -1)) ? ((38 * (var_3 & var_1))) : (arr_35 [10] [i_25] [11] [0] [10]));
                            var_38 = (min(var_38, var_4));
                        }
                    }
                }
                arr_87 [i_24] [11] = ((((var_2 - (((arr_81 [i_24] [1] [3]) ? (arr_24 [21]) : var_6))))) > (var_3 % 5005184182049188264));
                arr_88 [i_24] [i_25] [i_25] = (min(((!(arr_33 [i_24] [i_25]))), ((!(((var_1 ? var_1 : var_5)))))));
            }
        }
    }
    var_39 = (((((((var_11 ^ (-2147483647 - 1))) != var_1)))));
    #pragma endscop
}
