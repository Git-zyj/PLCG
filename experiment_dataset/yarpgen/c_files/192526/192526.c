/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 ? var_4 : (max(0, 3029123435962333867))))) ? var_2 : ((((max(var_8, var_0))) ? (1 != var_3) : var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                var_13 = (min(var_13, ((((var_10 + 9223372036854775807) << (var_10 - 1))))));
                var_14 = 18;
                var_15 = (((((-5291137407347022149 ? (arr_6 [i_1] [i_1] [i_1] [i_1]) : var_3))) ? (arr_5 [i_1 + 1] [i_1] [i_2]) : (arr_3 [i_0 + 2])));
                var_16 = (arr_1 [i_2]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] = ((~(arr_1 [i_0 + 2])));
                var_17 = 1;
            }
            arr_12 [i_0] [i_0] [i_0] = var_10;
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_4] = (!1);
            var_18 += (((arr_1 [i_0 - 1]) ? (var_3 >= var_2) : ((-2329063129950688846 ? 9763 : var_8))));
            var_19 = -2888;
            var_20 = (max(var_20, var_1));
        }
        var_21 |= (((arr_14 [i_0 + 1] [12]) < ((var_8 ? var_2 : var_9))));
        arr_16 [i_0] = ((((((arr_10 [15] [i_0] [i_0]) ? 1 : var_9))) ? -255 : (-2888 >= var_4)));
        var_22 = (max(var_22, 1));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = 1;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_23 = (max((arr_14 [i_8] [i_7]), var_0));
                        var_24 = (min(var_24, (((((((((0 ? (arr_0 [10]) : var_11)) + 2147483647)) << ((((((arr_2 [i_6]) && (arr_3 [14])))) - 1)))) >> (((((arr_26 [i_5] [i_5] [i_5] [7] [i_5 + 2]) ? var_9 : var_6)) - 111)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_25 = (max((max((arr_8 [i_9]), var_4)), (max(1, (arr_8 [i_9])))));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_26 |= (arr_27 [i_5] [i_5] [i_12 - 1] [i_9] [i_12]);
                            var_27 = ((var_4 / (arr_2 [i_9])));
                            var_28 = var_8;
                            var_29 = ((!(((var_6 ? var_0 : var_4)))));
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_30 = var_5;
                            var_31 = (min(var_31, var_9));
                            arr_41 [i_5] [i_9] [i_10] [i_11] [i_5] [0] [i_13] = -var_9;
                            var_32 = (max(var_32, ((max(((max(1, (!var_2)))), ((var_5 ? var_9 : (arr_3 [i_5 - 1]))))))));
                            var_33 |= (arr_38 [i_5] [i_9] [i_10] [i_10] [i_11] [i_13]);
                        }
                        var_34 = var_4;
                        var_35 = ((arr_27 [i_5 + 1] [i_5 + 2] [8] [i_9] [8]) > (arr_32 [i_5 + 1]));

                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_36 = var_9;
                            arr_45 [i_5] [i_9] [i_9] [i_10] [i_11] [i_14] [i_14] = (max(((var_4 ? (arr_37 [i_5 + 2]) : (arr_37 [i_5 + 2]))), var_5));
                        }
                        for (int i_15 = 1; i_15 < 15;i_15 += 1)
                        {
                            var_37 *= (max(((((max(183, var_2))) ? (arr_44 [i_9] [i_15 + 1] [i_15]) : var_5)), ((((((arr_39 [i_5] [9] [i_10] [1]) ? 9223372036854775807 : (arr_33 [i_15])))) ? var_9 : (var_3 != 1)))));
                            var_38 = (min(var_38, var_8));
                            var_39 = (min(var_39, (((max((!var_6), 1))))));
                            var_40 ^= ((!((!((0 && (arr_24 [i_9] [i_10] [i_11])))))));
                            var_41 = 1;
                        }
                    }
                    for (int i_16 = 2; i_16 < 16;i_16 += 1)
                    {
                        var_42 -= var_5;
                        var_43 -= (arr_38 [i_5] [i_5 - 1] [i_10] [5] [i_5] [5]);
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_44 = ((max(14342, ((-79 ? var_7 : (arr_1 [6]))))));
                        var_45 += (((max(203, ((var_11 ? 220968725 : 9223372036854775807)))) * ((max(((var_7 ? 63 : var_1)), 0)))));
                        var_46 = var_6;
                        var_47 = var_5;
                    }
                    for (int i_18 = 1; i_18 < 13;i_18 += 1)
                    {
                        arr_57 [i_18] [i_9] [i_10] [i_18] = var_3;
                        arr_58 [3] [i_9] [i_18] = var_6;
                        var_48 = (min(var_48, (((((((arr_7 [i_9]) ? 1 : (((!(arr_10 [i_5] [i_9] [i_18]))))))) ? (max((arr_1 [i_5 + 2]), (arr_1 [i_5 + 1]))) : var_0)))));
                        var_49 = ((-(((var_7 >= (arr_25 [i_5 - 1]))))));
                        var_50 = ((167 ? ((max((arr_49 [i_5] [i_5] [i_5] [i_5] [i_5]), var_0))) : (arr_19 [1])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {

                    for (int i_21 = 2; i_21 < 15;i_21 += 1)
                    {
                        var_51 |= (max((!var_10), (arr_13 [i_19] [i_19] [i_20])));
                        var_52 *= (max(((-(((var_9 + 9223372036854775807) >> (var_5 + 28310))))), -var_8));

                        for (int i_22 = 1; i_22 < 13;i_22 += 1)
                        {
                            var_53 = (max(var_53, ((((max((arr_65 [i_5] [i_20] [i_21]), ((3 ? 61766 : (arr_33 [i_21]))))) - (~136))))));
                            var_54 = (max(var_54, (((var_10 < ((max((arr_27 [i_5] [4] [i_19] [i_20] [i_22]), ((var_3 ? (arr_28 [i_5] [i_5] [i_20] [i_5]) : var_6))))))))));
                            var_55 = (max((((((((arr_34 [i_22]) ? 1 : 1))) ? var_6 : (max(var_0, (arr_14 [i_19] [i_19])))))), (((102 * var_8) ? (arr_13 [i_20] [i_21] [i_22 + 2]) : (arr_18 [i_19] [i_5])))));
                            var_56 = max((((!(var_11 == 6774)))), -3909223966276996523);
                        }
                    }
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {

                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            var_57 = ((61700649 ? ((max(((var_8 ? var_6 : var_0)), var_3))) : var_4));
                            var_58 = ((~(65535 / 1)));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 17;i_25 += 1)
                        {
                            arr_79 [i_19] [i_19] [i_19] [i_19] [i_19] = (var_0 / var_1);
                            var_59 = ((~(arr_54 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19])));
                        }
                        for (int i_26 = 0; i_26 < 17;i_26 += 1)
                        {
                            arr_82 [i_19] = ((!(((((max(var_11, var_7))) ? var_2 : -1)))));
                            var_60 += ((((max(((2147483642 << (5873677126804965333 - 5873677126804965333))), 1))) <= 9223372036854775807));
                        }
                        var_61 = var_7;
                        var_62 = (max(var_62, (((((((((arr_31 [i_5 + 2]) + 2147483647)) << (((((arr_31 [i_5 + 1]) + 794684735)) - 3))))) ? (max(var_9, var_7)) : (~-1))))));
                    }
                    for (int i_27 = 0; i_27 < 17;i_27 += 1)
                    {
                        arr_87 [i_5] [i_19] [1] [i_20] [i_27] [i_27] = ((((max(var_2, (arr_20 [i_19] [i_27])))) ^ 69));
                        var_63 = (max(var_63, (((~(arr_42 [i_19] [i_19 + 1] [0] [i_19] [i_20] [i_27] [14]))))));
                        var_64 = (((max(228, ((var_3 ? 1 : (arr_38 [16] [i_19] [i_19] [12] [i_20] [12]))))) >> (((((arr_33 [i_5 + 2]) ? (arr_33 [i_5 + 2]) : var_6)) + 96))));
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 17;i_28 += 1)
                    {
                        var_65 = var_6;
                        var_66 = (arr_56 [i_5 - 1] [i_19] [i_19] [i_5]);
                        arr_92 [4] [i_20] [i_19] = (!var_4);
                        var_67 = (((var_7 ? var_7 : (arr_68 [i_5] [i_5] [i_20]))));
                    }
                    var_68 = ((var_2 ? (max((max(var_8, 22474)), ((max(1, var_4))))) : ((((((var_11 ? (arr_52 [9] [i_19] [2] [i_19]) : 2994767496270095658))) ? 7680 : 22461)))));
                    var_69 ^= (((max(var_10, (arr_26 [i_20] [i_5 + 2] [i_20] [i_19 + 3] [i_20]))) - (((-(arr_26 [7] [i_5 + 2] [i_20] [i_19 + 2] [i_19]))))));
                }
            }
        }
    }
    for (int i_29 = 1; i_29 < 15;i_29 += 1) /* same iter space */
    {
        arr_96 [i_29] = (((((((~(arr_8 [i_29]))) / var_4))) ? (arr_36 [i_29 - 1] [i_29] [i_29] [i_29] [i_29] [i_29]) : (((((arr_64 [6] [i_29] [i_29] [i_29]) > var_10))))));

        for (int i_30 = 0; i_30 < 17;i_30 += 1)
        {
            arr_100 [i_29] = (max(-22486, (((-16 + 2147483647) << (var_3 - 51)))));
            var_70 += (max(var_1, var_4));
        }
    }
    var_71 = var_6;
    var_72 = (((((1 | (var_7 & var_9)))) ? ((((max(var_2, 9223372036854775803))) | (229 | var_8))) : (((var_2 ? var_9 : 57)))));
    var_73 = (~var_0);
    #pragma endscop
}
