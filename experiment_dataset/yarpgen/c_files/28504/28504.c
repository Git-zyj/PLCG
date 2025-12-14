/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (~var_8);
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((-(min(var_8, (~var_5)))));
        var_14 = 0;
        var_15 += ((arr_1 [i_0] [i_0]) < ((min((arr_0 [i_0] [i_0]), (arr_0 [7] [i_0])))));
        var_16 = (max(var_16, var_6));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 &= (min(((min((arr_2 [i_1]), (var_5 - 20)))), var_9));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = -2;

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_18 ^= var_5;
                            arr_13 [i_1] [0] [i_1] [i_4] [0] [i_1] [i_1] = (arr_4 [i_3]);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (max(var_19, ((((min((arr_10 [12] [i_2 - 3] [i_2 - 3]), 4294967278)) << (((((arr_10 [i_2] [i_2 - 3] [i_2]) ? var_0 : (arr_10 [i_1] [i_2 - 3] [3]))) - 65)))))));
                            var_20 = (max(var_20, (((-(max(-70, (((arr_6 [i_1] [1] [i_1]) ? (arr_4 [i_6]) : var_8)))))))));
                        }
                        arr_17 [i_1] [i_2 + 2] [8] [i_4] [8] = (min((((-((((arr_3 [i_1]) && (arr_7 [i_2] [6] [i_4]))))))), (min((arr_3 [i_1]), (((7844670803891947684 ? 8800 : 72)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_21 = ((9047 <= (((arr_5 [i_1] [i_1] [i_1]) ? 12082058572026477516 : var_3))));
                            var_22 ^= var_6;
                            var_23 ^= (arr_10 [i_7 + 1] [i_8] [i_8]);
                        }
                        var_24 = (max(var_24, 9223372036854775807));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_3]);
                        arr_23 [10] [11] [i_3] [i_7] = ((-67108864 ? (arr_3 [i_7 - 2]) : (var_2 - -30698)));
                        arr_24 [i_2] = ((!(arr_18 [i_2 - 1])));
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_25 = ((((min(-var_6, (~-4250537973669090103)))) ? (min((((arr_26 [i_1] [i_1] [i_1] [i_1]) ? 17475 : (arr_25 [i_9] [i_2] [12]))), var_3)) : 10921));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_26 = (arr_7 [0] [i_10] [i_10]);
                            var_27 += ((((var_8 ? (((arr_25 [i_1] [i_1] [i_1]) ? var_6 : var_7)) : (((arr_15 [i_1] [i_2] [i_3] [i_9 - 1] [i_2]) - var_4)))) - (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3])));
                            var_28 = ((-(max(var_9, 1))));
                        }
                        arr_29 [i_1] [i_9] [i_9 + 3] = ((-255 ? (~-1382207670) : 3878630388));
                        var_29 = var_4;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_30 = (min(var_30, var_0));

                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            var_31 = ((var_5 ? (arr_31 [i_12 + 1] [i_2 - 1] [10] [i_2 - 1] [i_1]) : var_5));
                            var_32 ^= (arr_3 [i_12]);
                            arr_37 [i_1] [i_1] [i_1] [i_12] [i_1] = (min(((var_3 ? (arr_34 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]) : (arr_34 [i_12] [i_3] [i_12] [i_3] [i_12 + 1]))), ((((arr_31 [i_11] [i_11] [i_11] [i_12] [i_12 + 1]) != (arr_34 [i_12] [i_3] [i_11] [i_11] [i_12 - 1]))))));
                        }
                        var_33 -= ((~(arr_35 [i_1] [i_2] [i_2])));
                    }
                }
            }
        }
        arr_38 [i_1] = min((min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (3961191962210403275 / 37055))), (((~4294967295) ? var_2 : var_7)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_34 = 61645;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 20;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        arr_48 [i_16] = var_5;
                        var_35 = ((-(arr_43 [i_16])));
                        var_36 *= var_4;

                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            var_37 = (arr_46 [i_16] [i_16] [i_16]);
                            var_38 = (~var_7);
                            var_39 = (((arr_47 [i_13]) >= ((0 ? (arr_45 [i_17] [i_16] [i_16] [i_16] [i_14] [i_13]) : (arr_47 [2])))));
                            arr_52 [i_13] [i_16] [19] [i_16] [i_17] = ((8969620584383722677 ? (((arr_51 [i_16] [i_15] [0]) ? 10 : (arr_51 [i_16] [i_15] [i_16]))) : (var_3 / var_0)));
                            arr_53 [i_13] [i_16] [i_15] [i_16] [i_15] [i_13] [i_15] = var_3;
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            arr_58 [1] [i_16] = (arr_54 [i_13] [i_14] [i_15 - 3] [i_16 - 1] [i_15 - 3]);
                            var_40 *= (((1 - 5813108162527250164) / -8384483760596744268));
                            var_41 = (max(var_41, (arr_39 [i_13] [i_13])));
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            arr_62 [10] &= (var_1 ? (arr_59 [i_15] [i_16]) : var_10);
                            var_42 *= (((((-32765 ? -726 : (-32767 - 1)))) >= (arr_44 [22] [1] [16] [i_16])));
                            var_43 = (arr_50 [14] [i_14] [i_15 - 2] [i_16 + 1] [i_19]);
                            arr_63 [15] [i_14] [i_16] [i_16] [i_19] = (((arr_42 [i_15] [i_15 + 3] [i_16 - 1]) && (arr_42 [i_13] [i_15 - 1] [i_16 - 1])));
                        }
                    }
                    var_44 = 14925834927653303786;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 21;i_20 += 1)
    {
        var_45 = (min(var_45, (arr_59 [i_20] [i_20])));
        arr_67 [i_20] [i_20] = var_1;

        for (int i_21 = 1; i_21 < 20;i_21 += 1)
        {
            var_46 = ((var_8 ? (arr_40 [i_20] [i_21]) : (((((arr_41 [i_20] [i_20] [i_21]) != -1))))));
            var_47 = (~9498898597800117209);
            var_48 = (min(var_48, ((((arr_47 [i_21]) ? (arr_40 [i_20] [i_20]) : ((1 ? var_7 : (arr_71 [i_20] [13]))))))));
        }
    }
    var_49 = ((((max(var_8, var_1))) ? ((max(-var_7, (17 >= 1)))) : (-1451776681 + var_2)));
    #pragma endscop
}
