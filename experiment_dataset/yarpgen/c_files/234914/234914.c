/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 99;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_18 = 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = ((~(((min(var_13, 1))))));
                        var_19 = ((((max(var_15, (((1 >= (arr_4 [i_0] [0] [i_0]))))))) ? ((((var_12 >= (arr_4 [i_0] [i_1] [i_3]))))) : (((arr_10 [i_3] [i_1 + 1] [i_1] [i_1] [i_0]) ? (13678886591416423605 > 521511013) : ((min(var_13, var_13)))))));
                        var_20 = arr_9 [i_0] [i_0];
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -0;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_17 [i_0] [i_0] = var_6;
                arr_18 [i_0] [i_0] [i_0] = var_8;
                arr_19 [i_0] [i_0] [i_1] [i_4] = (max((max((((var_10 && (arr_4 [i_0] [i_1] [i_0])))), (arr_16 [i_0] [i_0] [i_4] [i_0]))), (((!(arr_0 [i_0]))))));
                var_21 = -99;
            }
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                var_22 = (min((arr_11 [i_0] [i_1 + 2] [i_5] [i_5 - 1]), var_4));
                var_23 = ((((~(!var_8))) | ((((max(32767, 1947))) << (!32767)))));
                arr_22 [i_0] [i_0] [i_0] = ((+((((arr_6 [i_0] [i_0]) || (arr_6 [i_1 + 2] [i_0]))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_32 [6] [i_1 - 1] [i_6] [i_0] [i_8] [9] = ((var_13 ? 1 : (arr_28 [i_0] [i_7] [i_0] [i_0] [i_0])));
                            var_24 = -1948;
                            var_25 = var_13;
                            var_26 = ((157 << (132 == 8388600)));
                            var_27 = (((arr_20 [i_8 + 1]) ? ((var_13 ? var_15 : var_0)) : (arr_25 [1] [1] [i_6])));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_28 = ((!132241642) ? ((-(arr_2 [i_0]))) : ((max((arr_26 [i_9] [i_6 - 1] [i_1] [i_0]), (arr_26 [i_0] [i_6] [i_7] [i_9])))));
                            var_29 = (arr_9 [i_6] [i_0]);
                            arr_36 [i_0] [i_7] [i_0] [i_1] [i_0] = (!var_7);
                        }
                        var_30 = (((((arr_35 [i_0] [i_1 + 1] [i_0]) ? (arr_35 [1] [i_1 + 3] [i_0]) : (arr_35 [i_0] [i_0] [i_0]))) / ((min((arr_35 [i_0] [i_1] [i_0]), var_6)))));
                        var_31 = min((max((arr_5 [i_1 + 3] [i_6 + 1]), (((arr_15 [1] [i_0]) ? (arr_20 [i_7]) : (arr_7 [i_7] [i_7] [i_7] [i_7]))))), 2876);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_32 = var_6;
                        var_33 = (((arr_5 [i_11] [i_0]) * (arr_5 [i_10 - 1] [i_0])));
                        var_34 = var_6;
                    }
                }
            }
            var_35 *= (var_0 / var_5);
            var_36 = (arr_3 [i_10 - 1]);
            var_37 = (arr_1 [i_10 - 2] [i_0]);
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_38 = (-84 ? -1 : 99);
            var_39 = (min(var_39, (((135 ? ((((!((max((arr_26 [i_0] [i_13] [i_0] [i_13]), 14807229968891197211))))))) : (max((((!(arr_46 [10])))), (min(var_14, (arr_0 [i_0]))))))))));
            var_40 *= (max((max(-121, (arr_11 [i_13] [i_13] [i_0] [i_0]))), 1575));
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    arr_53 [i_0] [i_0] [6] [1] = (((!var_13) ? (max((((arr_44 [i_0]) ? 0 : (arr_46 [i_0]))), (min((arr_20 [i_15]), (arr_1 [i_0] [i_0]))))) : (arr_10 [i_0] [3] [3] [i_15] [i_15])));
                    var_41 = (max((((var_9 ? (min(var_16, (arr_5 [i_0] [i_0]))) : var_10))), 18));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 12;i_18 += 1)
                {
                    {

                        for (int i_19 = 1; i_19 < 13;i_19 += 1)
                        {
                            arr_64 [i_0] [3] [i_17 - 1] [i_0] [i_0] = -var_14;
                            var_42 = (max(var_13, (min(-79, 3639514104818354405))));
                            var_43 = ((!((max(var_1, (arr_15 [i_0] [i_16]))))));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 14;i_20 += 1)
                        {
                            arr_69 [i_0] [i_16] [i_16] = var_9;
                            arr_70 [i_0] = var_9;
                            var_44 = ((~(arr_11 [9] [i_17 - 1] [i_17] [i_16])));
                            var_45 = (((arr_30 [i_18] [i_0] [i_17] [i_0] [i_16]) ? (arr_30 [i_18] [i_0] [i_16] [i_0] [1]) : 127));
                        }
                        arr_71 [i_0] [i_16] [i_0] [i_17 - 1] [13] [13] = ((((max((arr_62 [i_0] [i_18 - 1] [i_18 - 3] [i_18]), (arr_2 [i_0])))) ? (max((arr_63 [i_0]), ((((arr_20 [3]) << (var_12 - 107)))))) : ((max(var_13, (arr_25 [i_0] [i_18 + 1] [i_18]))))));
                        arr_72 [i_17] [i_0] [i_17] [i_0] [12] = ((+(((~116) | (var_3 == var_1)))));
                        var_46 = ((((((((var_13 ? (arr_25 [i_18] [5] [5]) : var_1))) && ((max((arr_57 [i_18 - 1] [i_16] [i_0]), var_1)))))) == var_15));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 13;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 13;i_23 += 1)
                {
                    {
                        arr_79 [i_0] [i_21 - 1] [i_22] [i_0] [i_0] = (max(((~(var_5 * var_10))), (((32767 && (var_8 >= 96))))));
                        arr_80 [11] [i_0] [i_21] [i_22] [i_23] [i_23] = var_7;
                    }
                }
            }
        }
    }
    var_47 = ((var_1 ? var_8 : 268435456));

    for (int i_24 = 2; i_24 < 18;i_24 += 1)
    {
        var_48 = (min((max((min(-2, -1712146430)), (arr_82 [i_24]))), (((arr_82 [i_24]) ? (arr_81 [i_24 + 1]) : var_10))));
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 19;i_25 += 1)
        {
            for (int i_26 = 2; i_26 < 15;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {
                    {
                        var_49 = (((max((arr_85 [i_24] [i_25] [i_27]), (arr_83 [i_24] [i_26] [i_24])))) == (((!246) ? (min(3639514104818354418, 221)) : ((((arr_87 [i_26] [i_26] [i_24]) | 64716))))));
                        arr_91 [i_24] = (max(((var_6 ? var_7 : ((var_15 ? 4398046511072 : 1)))), var_12));
                    }
                }
            }
        }
        var_50 = (min((min(var_14, (arr_87 [16] [16] [i_24 - 1]))), (((!(arr_89 [i_24 - 2] [i_24 - 1] [i_24]))))));
    }
    #pragma endscop
}
