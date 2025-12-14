/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_3;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 += (min(var_6, (arr_9 [18] [18] [i_2] [i_0 + 1])));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_14 = (min((((arr_8 [i_1]) ? var_3 : var_1)), ((var_1 ? (((2743593351 != (arr_9 [9] [i_1] [i_1] [10])))) : ((max((arr_8 [i_1]), var_1)))))));
                            arr_14 [i_1] = -var_5;
                            arr_15 [i_1] [i_1] [i_1] [i_0] [12] = (max((~var_9), 1039657496));
                        }
                        arr_16 [i_1] = ((3255309799 ? (!var_6) : var_2));
                    }
                }
            }
        }
        arr_17 [0] [0] = var_10;
        arr_18 [1] = (((max((((~(arr_12 [10] [10] [8] [10] [8])))), (min((arr_8 [20]), var_9)))) >= (((min(((var_2 >= (arr_10 [i_0] [5] [i_0] [11] [i_0] [i_0]))), (arr_2 [i_0 + 1])))))));
    }
    for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (-(arr_0 [23]));

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_15 = (arr_19 [2] [23]);
            arr_25 [i_5] = (min((((arr_10 [i_5] [22] [4] [i_5 - 2] [i_5] [i_6]) ? (max(var_8, (arr_21 [i_5]))) : (((44 ? var_2 : var_1))))), ((((max((arr_3 [i_5]), var_3))) ? 0 : var_0))));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    {
                        var_16 *= (arr_23 [2]);
                        arr_33 [i_5] [i_8] [4] [i_5] = ((var_3 ? var_1 : (arr_29 [i_5] [6] [i_5] [6])));
                        var_17 += (min((max((max((arr_9 [i_5] [8] [i_5] [i_9]), (arr_23 [2]))), (((-(arr_5 [i_5] [i_7])))))), ((max((arr_8 [18]), (max(215, var_8)))))));
                        arr_34 [i_5] [i_7] [i_8] [i_5] = (((min((arr_1 [i_5 - 4]), (arr_1 [i_5 - 4]))) * (!-94)));
                        arr_35 [i_5] [i_5] [16] [i_9] = var_5;
                    }
                }
            }
            var_18 ^= (max((arr_30 [11] [11] [i_5] [i_7 - 1]), (min((min(31432, (arr_32 [i_5] [4] [i_5] [4] [i_7]))), ((max(var_1, 1)))))));
            var_19 = (max(var_19, ((max(((max((arr_9 [18] [14] [18] [i_7]), var_2))), (((arr_11 [i_5] [12] [16] [16] [i_7]) ? (arr_12 [i_7] [10] [18] [10] [18]) : (arr_31 [4]))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_39 [i_5] [i_5] [i_10] = ((var_5 ? (arr_37 [i_10] [i_5 - 1]) : (arr_37 [15] [i_5 + 1])));

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_42 [i_5] [i_5] [i_11] = var_9;
                arr_43 [11] [i_10] [i_5] [4] = ((((((arr_24 [23] [i_5]) ? (arr_5 [i_5] [i_10]) : var_4))) ? (((5764009048012466950 ? var_0 : (arr_31 [i_5])))) : (arr_20 [3])));
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                arr_47 [i_5] [i_10] = (arr_45 [i_5] [1] [i_5 + 1] [i_5]);
                arr_48 [i_5] [i_5] [i_5] [10] = var_8;
                var_20 = (((arr_5 [20] [20]) == (arr_27 [4] [3])));
                arr_49 [i_5] [i_5] = (arr_36 [i_5]);
            }
            arr_50 [i_5] [i_5] = (((arr_30 [i_5] [i_5] [i_5] [i_5]) ^ (arr_36 [i_5])));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((((min((arr_19 [i_5] [i_13]), (arr_11 [1] [6] [1] [6] [6]))) << ((((max(var_0, (arr_37 [i_5] [i_5])))) ? (arr_2 [i_5 - 4]) : ((min((arr_5 [i_5] [i_5]), (arr_30 [i_5] [i_5] [10] [i_13])))))))))));
            var_22 |= (((arr_11 [i_5] [16] [i_5] [i_13] [i_5]) ? var_1 : (arr_12 [i_5] [i_5] [12] [18] [i_13])));
            arr_53 [i_5] [i_5] = (min((arr_51 [10]), var_4));
        }
        var_23 -= (min(var_7, var_7));

        /* vectorizable */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            var_24 = var_9;
            var_25 = (max(var_25, ((((arr_19 [i_5] [i_5]) ? ((10107111171384031544 ? (arr_7 [4] [18]) : (arr_36 [10]))) : ((((arr_8 [0]) >= var_9))))))));
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            arr_69 [i_5] [i_5] [i_16] = ((-((var_6 ? (arr_45 [i_5] [i_17] [17] [i_5]) : (max(var_9, (arr_10 [i_5] [5] [3] [5] [i_5] [i_18])))))));
                            arr_70 [i_5] [i_5] [i_5] [17] = var_4;
                            arr_71 [i_5] [i_5] [i_5] [i_16] [i_5] = (max(((min((arr_41 [i_5 - 2] [1] [7]), (((!(arr_30 [i_5] [i_15] [i_17] [i_18]))))))), var_9));
                        }
                    }
                }
            }
            arr_72 [i_5] = max((((((~(arr_12 [i_15] [i_5] [i_15] [i_5] [i_5])))) ? (((max(112, (arr_5 [i_5] [i_5]))))) : (arr_4 [i_5] [i_15] [i_15]))), var_1);
        }
        for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
        {
            var_26 = (max(var_26, ((min((arr_10 [12] [i_5] [i_19] [i_5] [i_19] [i_5]), (arr_29 [i_5 - 4] [i_19] [i_19] [i_5]))))));
            var_27 = (((arr_40 [i_5] [i_5] [i_5] [13]) ? ((var_6 ? (arr_40 [i_5] [i_5] [i_5] [i_5]) : (max(var_4, (arr_63 [i_5] [i_5] [i_19] [i_19]))))) : (arr_61 [i_5] [22] [i_5] [i_19])));
            arr_75 [i_5] [i_5] = (min(611208881, ((min(207, var_4)))));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    {
                        var_28 |= (((max(((min(7783, 194))), var_6)) ^ ((((((201 ? 128 : var_9))) && ((max(var_0, var_3))))))));
                        var_29 = (min(var_1, (((arr_26 [i_5 + 3] [i_5]) ? (((arr_27 [i_19] [i_20]) ? var_5 : (arr_0 [i_20]))) : (!var_6)))));
                    }
                }
            }
        }
        arr_81 [i_5] = (arr_5 [i_5] [i_5 - 3]);
    }
    for (int i_22 = 4; i_22 < 21;i_22 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (((var_8 | (max(((min(2020627296, (arr_57 [17])))), (arr_63 [i_22] [1] [i_22 - 2] [i_22]))))))));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 24;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                {
                    arr_88 [i_22] [i_22] = (arr_51 [i_22]);
                    /* LoopNest 2 */
                    for (int i_25 = 1; i_25 < 1;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 24;i_26 += 1)
                        {
                            {
                                arr_93 [4] [2] [i_22] [i_22] [i_23] [i_22] = ((((min((min(var_4, 2261709588)), var_7))) / (max((arr_63 [i_22] [i_22] [i_22] [i_22]), (min((arr_85 [1] [1] [i_26]), (arr_63 [2] [i_22] [i_22] [i_26])))))));
                                var_31 = (max(var_31, ((min(var_2, (arr_83 [2] [i_23]))))));
                            }
                        }
                    }
                    var_32 = (max((max(((max((arr_6 [i_22] [20] [i_24]), var_9))), 2276669337)), ((min(var_7, ((var_2 ? var_2 : var_2)))))));
                }
            }
        }
        var_33 = (min(var_33, (((((min(var_3, (max((arr_19 [i_22] [i_22]), var_7))))) ? (max((min((arr_21 [22]), (arr_51 [i_22]))), ((max(var_4, var_6))))) : ((((min((arr_56 [i_22]), var_10))))))))));
        arr_94 [i_22] = (max((max((((~(arr_2 [13])))), var_0)), ((min(var_10, (max((arr_65 [1] [1] [1] [1] [1]), 205)))))));
    }
    var_34 *= (((max(var_7, (max(1, var_2))))));
    #pragma endscop
}
