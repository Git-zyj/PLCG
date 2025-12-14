/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (((((-2147483647 - 1) ? (((arr_0 [i_0] [i_0]) ? 2146435072 : (arr_0 [i_0] [i_0]))) : var_2)) << (1 - 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [11] [11] [i_2] = (min(((var_5 | (((1 ? var_0 : var_4))))), ((min((arr_0 [i_0 - 1] [i_2 - 2]), ((var_7 ? var_6 : var_6)))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_13 = ((((max(1, (arr_3 [i_0 + 1])))) ? ((-(arr_3 [i_0 + 1]))) : ((((arr_3 [i_0 + 1]) && var_9)))));
                            arr_15 [i_0] [i_0] = ((var_5 ? -62 : 1));
                            var_14 = ((~((min(-16, 196)))));
                        }
                        var_15 = (arr_2 [i_0] [2]);
                        var_16 = (arr_6 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_17 += 3;
                        var_18 ^= ((min(((min((arr_9 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0 - 2]), var_2))), 2970733338)));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_19 = ((((var_3 ? (-1576479237 | -1) : 1))) ? (((max(-1576479220, -10)) | var_10)) : (max(((100663296 ? -1576479220 : (arr_1 [i_0] [i_0]))), ((var_8 | (arr_19 [i_6] [11] [i_1] [i_1] [i_1] [i_0]))))));
                            arr_20 [i_0] [i_1] &= (arr_10 [i_0] [i_0] [i_0] [i_6]);
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_5] = arr_7 [i_5] [i_1] [i_2] [i_0 - 2];
                        arr_22 [i_0] [i_1] [i_2] [i_5] = 10;
                    }
                    var_20 = 8388606;
                    var_21 = ((((arr_3 [i_0 + 1]) + (arr_13 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 3]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_22 = (((arr_25 [i_8] [i_10]) ? (((0 && 55) ? 16977 : 205)) : 196));
                        arr_34 [i_7 - 2] [i_7 - 2] [i_9] [i_10] [i_10] = ((~(arr_23 [i_7] [i_9])));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_23 = arr_33 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_9];
                            arr_37 [i_7] [i_8] [i_9] [i_9] [i_11] = (var_6 | var_8);
                        }
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_24 = 916420097;
                            arr_40 [i_12] [i_12] [i_9] [i_10] [i_12] = (min(5, 1576479228));
                            var_25 = max((((((((arr_36 [20] [i_8] [i_9] [i_8] [i_8]) ? var_5 : 0))) ? 0 : -10))), (((arr_32 [i_10] [i_12] [i_12] [i_12] [i_12 + 2] [i_12]) - (80 << var_10))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_44 [i_7] [i_7] [i_7] = (arr_24 [i_7 - 2] [i_7 + 1]);
                        var_26 = (1 / -3);
                        arr_45 [i_7] [i_7] [i_7] = ((arr_33 [i_7 + 1] [9] [10] [i_7] [9] [i_7]) * 39);
                        var_27 = (min(var_27, (var_3 / var_1)));
                    }
                    for (int i_14 = 3; i_14 < 22;i_14 += 1)
                    {
                        arr_49 [i_7] [i_7] [i_7] [i_7] = ((((~var_5) / (arr_28 [i_9]))));
                        arr_50 [i_7] [i_8] [i_9] [i_14 - 3] = var_0;
                        arr_51 [1] [i_8] [i_8] [i_14] = (arr_43 [i_7] [20]);
                    }
                    for (int i_15 = 2; i_15 < 20;i_15 += 1)
                    {
                        var_28 = (65525 || 1);
                        arr_54 [i_7] [i_8] [i_9] [20] = ((((((((10 ? (-127 - 1) : -90))) - 3623584992))) ? (((~((3 ? (arr_23 [i_7] [i_7]) : var_6))))) : (min(((((arr_43 [i_7] [i_9]) >> (var_11 - 3332276664)))), ((var_10 ? (arr_39 [i_7] [i_8] [20] [i_9] [i_8] [20] [i_15]) : var_11))))));
                        var_29 ^= ((((arr_48 [i_7 + 1]) ^ (arr_48 [i_7 + 1]))));
                        var_30 ^= ((((max(-18, (var_11 ^ 3)))) ? ((9 ? var_4 : 3844660347)) : var_4));
                        var_31 = (arr_23 [i_8] [i_15]);
                    }

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_58 [i_7] [i_8] [i_9] [i_16] = var_8;

                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            var_32 -= ((1 ? 1536 : (arr_35 [i_17 + 3] [16] [i_7 - 1] [16] [i_17 + 3])));
                            var_33 ^= (((((-(arr_53 [i_7] [i_8] [17] [i_7])))) ? -var_5 : (arr_35 [2] [i_16] [i_9] [22] [i_7])));
                            arr_61 [i_7] [i_8] [i_7] [i_7] = var_0;
                        }
                        var_34 = ((+(((arr_27 [11]) ? (arr_55 [i_7] [19] [i_9] [i_16]) : (arr_31 [i_7] [i_8])))));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                    {
                        var_35 += var_9;
                        arr_65 [15] [i_8] [i_8] [15] [i_18] = (0 && -80);

                        /* vectorizable */
                        for (int i_19 = 3; i_19 < 19;i_19 += 1)
                        {
                            var_36 = -3;
                            arr_68 [i_19] [i_18] [i_8] [i_8] [i_7] = 1;
                        }
                        for (int i_20 = 1; i_20 < 21;i_20 += 1)
                        {
                            arr_72 [i_7] [i_9] [i_18] [i_20 + 1] = (max(112, 255));
                            var_37 = ((~(arr_39 [i_20] [i_20] [9] [i_20] [i_20 - 1] [i_20] [i_20])));
                            var_38 = ((((~((1 ? 79 : 1)))) >= var_6));
                        }
                    }
                }
            }
        }
    }
    var_39 += ((var_2 ? ((~((-3661620087992291456 ? var_0 : 1576479219)))) : (min((-2147483646 | -4604), (var_9 && var_10)))));
    var_40 = var_10;

    for (int i_21 = 1; i_21 < 8;i_21 += 1)
    {
        arr_76 [i_21] = ((((var_7 && (arr_1 [i_21] [i_21]))) && var_8));
        arr_77 [i_21] = var_0;
        var_41 *= var_1;
    }
    #pragma endscop
}
