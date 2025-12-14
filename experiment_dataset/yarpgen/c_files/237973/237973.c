/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((-((-(max(568857323, 28))))));
    var_13 = 214;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = 2808800748469722732;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = var_8;
            var_14 -= (((((var_8 ? 0 : var_7))) ? 1854262739 : (arr_5 [i_0] [i_1])));
            arr_8 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_1] [i_1]);
            var_15 = (arr_2 [i_0] [i_0]);
            var_16 *= (((((arr_3 [6]) >> (((arr_6 [i_1] [i_1] [i_1]) + 26467)))) * (arr_5 [i_0] [i_1])));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = arr_11 [i_2];
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_11 [i_2])));
                    arr_20 [i_3] = (max((min(((max(var_1, 0))), var_4)), (((!((15 || (arr_9 [i_4]))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_18 = ((0 ? (arr_25 [i_5]) : var_3));
            arr_27 [i_5] = (arr_22 [10] [i_6]);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_31 [i_5] = (((arr_29 [i_5] [i_7]) ? (arr_30 [i_5] [i_5] [i_5]) : (arr_29 [i_5] [i_7])));
            arr_32 [i_7] &= var_4;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_19 = ((!(arr_35 [i_5] [i_7] [i_5])));
                            arr_42 [20] [i_7] [20] [i_9] = (((arr_39 [i_5] [i_5] [i_5] [14] [i_5]) ^ (arr_26 [i_9] [i_7] [i_5])));
                            arr_43 [i_5] [i_7] [i_5] [i_9] [5] [i_9] [i_9] = 0;
                            var_20 = arr_41 [i_7] [i_7] [i_7] [i_7] [i_7];
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            arr_54 [i_5] [i_13] [i_11] [i_11] [i_13] [i_11] [i_13] = (((((arr_26 [i_5] [i_5] [i_13]) <= (arr_37 [i_5] [i_7] [i_11] [i_12] [i_13] [i_7]))) ? ((64 ? var_9 : var_0)) : (arr_24 [i_12] [i_12 - 1] [i_12 - 1])));
                            var_21 = (((((arr_28 [i_12] [1]) ? (arr_30 [i_11] [i_12] [i_13]) : (arr_52 [i_5] [i_7] [i_11] [i_11] [i_12 - 1] [i_13] [i_11]))) / (((var_5 ? (arr_21 [i_11]) : (arr_26 [i_11] [i_11] [i_13]))))));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_57 [i_7] = -10;
                            arr_58 [i_5] [i_12] [i_12] = (((((arr_47 [i_5] [i_5] [i_5] [i_5]) < (arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (arr_46 [i_5] [i_5] [i_11]) : (arr_30 [i_5] [i_7] [1])));
                            arr_59 [i_12] [i_12] [i_12] [i_12] [i_14] = arr_39 [i_14] [i_12 - 1] [i_11] [i_5] [i_5];
                            var_22 = (arr_45 [i_5] [i_7] [i_12]);
                        }
                        arr_60 [i_5] [i_12] [16] [i_7] [i_5] = ((-15 ? (arr_53 [i_5] [i_7] [18] [i_11] [i_12 + 2] [i_12 - 2] [i_5]) : ((-(arr_41 [i_5] [i_7] [i_11] [i_11] [i_12])))));
                        var_23 = ((var_1 == (arr_35 [i_12] [17] [17])));
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_24 *= (((arr_46 [1] [i_15] [21]) ? ((2702851533 ? 8897937147345707506 : 0)) : (arr_55 [i_5] [i_16] [i_16] [i_5])));
                var_25 = (max(var_25, (arr_21 [i_5])));
                arr_65 [i_5] [i_15] [i_15] [i_16] &= ((var_11 ? ((15 + (arr_40 [i_15]))) : (arr_51 [i_16] [i_16] [i_16] [i_15] [i_16] [i_16] [i_16])));
                var_26 = (min(var_26, -var_1));
            }
            for (int i_17 = 2; i_17 < 21;i_17 += 1)
            {
                arr_68 [i_5] [i_5] [i_15] [i_5] = (arr_44 [i_15] [i_17 - 2] [i_17 + 1]);
                var_27 = ((-(arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_15] [i_5])));
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 20;i_19 += 1)
                {
                    {
                        var_28 = (min(var_28, -31118));
                        arr_74 [i_5] [i_18] [i_18] [i_18] [0] [i_19] = ((~(arr_30 [i_5] [3] [i_19 - 4])));
                    }
                }
            }
            arr_75 [i_5] = ((var_6 ? (((arr_22 [i_5] [i_5]) ? -16 : var_2)) : (arr_26 [i_15] [i_15] [i_5])));
            var_29 = (max(var_29, 15));
        }
    }
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        var_30 = ((max(-21, (arr_44 [i_20] [i_20] [i_20]))));
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    {
                        arr_88 [i_20] [i_20] [i_20] [i_20] [i_20] = (min(((((148 ^ 0) ? -15 : var_3))), 14129751804339590617));
                        arr_89 [i_20] [18] [i_22] = ((!((((((1 ? (arr_52 [i_20] [i_20] [i_20] [i_20] [i_21] [i_22] [i_23]) : (arr_84 [i_22])))) ? (((max(226, (arr_78 [i_22]))))) : var_4)))));
                    }
                }
            }
        }
        arr_90 [i_20] [i_20] = (arr_50 [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    #pragma endscop
}
