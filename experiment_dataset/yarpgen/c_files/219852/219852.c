/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_7 >> (var_5 + 934394990)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
            {
                arr_8 [i_2] = (((arr_0 [i_0] [i_2]) != (arr_4 [i_2] [i_1] [i_0])));
                arr_9 [i_0] [9] [i_2] = var_1;
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_19 = (max(var_19, ((~((39546 ? (arr_7 [i_3]) : (arr_2 [i_3] [i_1])))))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_4] [i_1] [i_1] [i_0] = ((-(arr_12 [i_1] [i_1] [i_3] [i_1])));
                    var_20 = (((arr_7 [i_4]) ? (arr_7 [i_0]) : (arr_7 [i_4])));
                    var_21 = var_14;
                    arr_17 [i_0] [i_0] [3] [i_3] [0] = ((((((arr_1 [i_0] [i_0]) / (arr_11 [4] [4] [i_4])))) ? (arr_7 [i_0]) : -var_11));
                }
            }
            arr_18 [i_0] [17] [i_1] = (((arr_4 [i_0] [0] [0]) && (((~(arr_3 [i_0] [i_1] [i_1]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_29 [i_5] [i_1] [i_1] [i_1] [i_5] [i_6 - 3] [i_1] = ((!(arr_15 [i_6] [i_6 + 1] [i_6] [i_6] [i_1])));
                            arr_30 [4] [i_5] = (((arr_6 [i_6 - 1]) ? (arr_11 [i_6] [i_5] [i_0]) : (arr_19 [i_5] [i_1] [i_7])));
                            arr_31 [i_5] [i_1] [i_5] [i_6] [i_5] = (arr_7 [i_1]);
                            var_22 ^= (((arr_25 [i_0] [i_0] [i_0] [i_6] [i_7]) != var_1));
                            var_23 = (max(var_23, ((((arr_22 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 3]) - (arr_22 [i_6 - 3] [i_1] [i_5] [i_6] [7]))))));
                        }
                    }
                }
            }
            arr_32 [i_0] = (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_0])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((((((arr_3 [i_0] [i_10] [i_11]) > (arr_13 [i_0] [i_0] [i_0] [i_9 + 2] [i_0] [i_11]))) ? (arr_20 [i_8 + 3]) : (arr_42 [i_0] [i_8] [i_9] [i_10 + 2] [i_11]))))));
                            var_25 = (min(var_25, ((((((-(arr_26 [19] [19] [19] [i_10] [i_11])))) ? (arr_27 [i_8 + 2]) : (arr_37 [i_0] [i_8] [i_9] [i_10]))))));
                            arr_45 [i_9] [i_9] = ((!(arr_13 [i_11] [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 3])));
                            var_26 = (arr_15 [i_0] [i_11] [i_0] [i_8 + 3] [i_0]);
                        }
                    }
                }
            }
            var_27 = (max(var_27, (arr_7 [i_8])));
            arr_46 [i_8] = (arr_15 [i_0] [i_8] [i_8] [i_8 + 1] [i_8]);
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            var_28 = (arr_1 [i_0] [20]);
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_29 = (((arr_22 [i_13 + 3] [i_13 + 3] [i_12 - 1] [i_0] [i_0]) < (((arr_21 [i_0] [i_12] [i_0]) * (arr_3 [i_12] [i_12 + 1] [16])))));
                        arr_57 [7] [i_13 + 1] [i_0] = (((arr_12 [i_13 + 3] [i_13 + 3] [i_12 + 1] [i_12]) - 0));
                    }
                }
            }
            arr_58 [i_0] [i_0] [i_12 + 1] = var_8;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            arr_61 [i_0] [i_15] = (arr_52 [i_0] [1]);
            var_30 = var_10;
        }
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    arr_66 [i_16] [i_0] = ((((((max((arr_41 [i_17] [i_17] [i_16 + 1] [i_17] [i_0]), (arr_36 [i_17] [i_16])))) ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : (arr_22 [i_17] [i_16 + 2] [i_16 + 2] [17] [i_16 + 3]))) > 255));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                arr_72 [i_18] [i_18] [i_16] [i_16] [i_18] = -0;
                                arr_73 [i_0] [i_0] [i_17] [i_18] [i_18] = ((!((max((arr_35 [i_16 + 2] [i_16 + 3]), (arr_35 [i_16 + 3] [i_16 + 2]))))));
                                arr_74 [i_18] [i_18] = ((((((((-(arr_50 [i_0] [i_18] [i_18])))) ? ((((arr_21 [i_0] [i_0] [i_16]) ? (arr_3 [i_0] [5] [i_0]) : 0))) : (arr_48 [i_16] [i_17])))) ? var_10 : (arr_71 [i_19] [i_18] [i_18] [i_17] [i_16 - 1] [i_0])));
                                arr_75 [i_18] [i_18] [i_18] [i_16] [i_19] = var_14;
                            }
                        }
                    }
                }
            }
        }
        arr_76 [i_0] = (arr_69 [i_0] [i_0] [i_0] [i_0] [17] [i_0]);
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 12;i_23 += 1)
                {
                    {
                        arr_88 [2] [i_21] [2] = ((((max(-1, (arr_81 [i_23] [i_20] [i_20])))) ? (arr_34 [i_21] [i_23]) : ((((max(1, (arr_52 [i_21] [i_21])))) ? (((arr_54 [i_20] [i_21] [i_22] [i_23] [i_20] [i_21]) ? 1813647716 : (arr_83 [i_20] [i_21] [i_22] [i_23]))) : (((arr_40 [10] [i_23] [i_23] [7] [i_23]) ? (arr_4 [i_20] [i_21] [i_22]) : (arr_37 [i_20] [i_20] [1] [i_23])))))));
                        arr_89 [i_20] [7] [i_23] = (((arr_67 [i_23] [i_22] [i_21] [i_20]) ? (arr_47 [i_23] [12]) : (((-(max((arr_26 [i_23] [i_22] [i_20] [i_20] [i_20]), (arr_2 [i_23] [i_21]))))))));
                        arr_90 [i_21] = (max((255 - 250), (arr_53 [i_20] [i_20] [i_21] [13] [i_22] [i_23])));
                    }
                }
            }
        }
        arr_91 [i_20] = 1;
    }
    #pragma endscop
}
