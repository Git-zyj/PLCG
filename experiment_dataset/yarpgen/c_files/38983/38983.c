/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((((var_4 / var_0) / var_11))), ((((max(var_8, 8110624553021280870))) ? (((max(var_11, var_0)))) : (10336119520688270724 * 6704091376996849910))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(((((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? var_4 : var_11))) : (max(2847844091, var_2))))), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = ((((((!(~1))))) - (max(var_8, var_12))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [0] = ((1447123205 ? (arr_3 [i_1] [1]) : ((((!(arr_4 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_17 *= (10336119520688270725 < var_11);
                        var_18 = -8110624553021280879;
                        var_19 = ((var_11 ? (arr_10 [9] [i_2] [i_2] [i_2]) : (arr_10 [i_1] [i_2] [i_1] [i_4])));
                        arr_14 [i_1] [1] [1] [i_4] = (-2147483647 - 1);
                    }
                }
            }
        }
        var_20 &= (((arr_5 [i_1]) + 1447123228));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_21 = (max(var_21, 3));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_0));
                            var_23 = (((-32767 - 1) >= 65));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_24 *= ((((arr_22 [i_7] [i_5] [8] [i_10]) >= (arr_3 [i_5] [i_5]))) ? var_0 : (arr_26 [6] [i_7] [i_7] [10] [i_11 + 1] [i_7] [i_10]));
                            var_25 = (min(var_25, (arr_1 [i_5])));
                        }
                    }
                }
            }
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                arr_36 [i_5] [i_5] [i_6] [i_5] = (((((arr_25 [i_6] [i_6] [i_6] [i_5]) ? (arr_20 [i_5] [i_5] [i_5] [0]) : 2122032699)) ^ -32765));
                arr_37 [4] [i_6] = (5196467344373768495 || var_3);
                var_26 ^= var_5;
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_27 = (((((arr_25 [i_5] [i_5] [i_13] [i_14]) ? 1139409595 : (arr_41 [i_6]))) * ((((arr_12 [i_14] [i_6] [i_13] [i_14] [i_13] [i_15]) == var_11)))));
                            arr_46 [i_5] [3] [4] [8] [i_6] [i_5] [i_13] = ((111 && (((var_13 ? var_6 : (arr_27 [i_6]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            arr_51 [i_6] [10] [i_6] = var_11;
                            var_28 = (!var_11);
                            arr_52 [i_5] [i_6] [i_13] [i_6] [i_6] = ((0 ? ((10336119520688270725 ? 7427524395739486608 : var_0)) : (var_13 + var_11)));
                            var_29 = (min(var_29, (((((var_8 >= (arr_30 [4]))))))));
                        }
                    }
                }
                arr_53 [i_6] [i_6] [i_13] = (((arr_7 [i_6 + 2] [i_5]) / (arr_12 [i_5] [i_5] [i_6] [i_13] [i_13] [i_13])));
            }
            var_30 = (max(var_30, (arr_35 [i_5])));
        }
        /* LoopNest 3 */
        for (int i_18 = 3; i_18 < 8;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    {
                        var_31 = 32749;
                        arr_62 [6] [8] [i_18] [i_18] = (((((22 ? (arr_11 [i_5] [i_18] [i_18 - 3] [i_20]) : var_8))) ? var_9 : (arr_8 [i_19])));

                        for (int i_21 = 3; i_21 < 10;i_21 += 1) /* same iter space */
                        {
                            var_32 *= 32744;
                            arr_66 [i_5] [i_5] [i_21] [i_21] [i_20] [3] = (((((0 ? 1 : -22658))) ? (((var_1 / (arr_31 [i_5] [i_18] [i_19] [i_20] [i_21])))) : 9223372036854775807));
                        }
                        for (int i_22 = 3; i_22 < 10;i_22 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, 37614));
                            arr_69 [i_20] [i_20] [i_20] [i_20] [i_20] = ((((arr_34 [i_18] [i_18] [i_19]) / (arr_50 [i_5] [i_5] [i_19] [i_5] [i_5]))) >= (arr_63 [i_5] [i_19]));
                            arr_70 [1] [1] [i_19] [8] [i_22] [i_22 - 1] = (((arr_3 [i_18 + 3] [i_18]) * var_5));
                            var_34 -= var_7;
                        }
                        var_35 -= (((arr_21 [i_20]) && (arr_33 [i_20] [i_20])));
                    }
                }
            }
        }
        var_36 *= ((~(((arr_9 [i_5] [i_5] [i_5]) << 0))));
        arr_71 [i_5] [i_5] = (!var_4);
    }
    for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
    {
        var_37 = (min(var_37, ((((arr_57 [i_23] [i_23] [i_23] [i_23]) >= -81309341)))));
        var_38 |= var_1;
        var_39 = (min((arr_65 [i_23]), 43));
    }

    for (int i_24 = 0; i_24 < 13;i_24 += 1)
    {
        var_40 = var_4;
        arr_77 [i_24] [i_24] = -13699993409815181584;
        var_41 *= ((!(arr_10 [i_24] [i_24] [i_24] [i_24])));
        arr_78 [i_24] = ((((((arr_76 [i_24]) || (arr_4 [i_24])))) << (((arr_4 [i_24]) ? var_9 : (arr_76 [i_24])))));
    }
    var_42 = (min(((var_0 ? ((var_6 ? var_3 : 54)) : var_9)), var_11));
    var_43 -= var_11;
    #pragma endscop
}
