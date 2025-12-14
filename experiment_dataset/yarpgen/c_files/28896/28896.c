/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_18 = (arr_7 [i_0] [0] [i_2] [0]);
                var_19 = (arr_0 [2]);

                /* vectorizable */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_20 = (min(var_20, (arr_1 [i_2])));
                    var_21 = arr_10 [i_0] [i_1] [i_2] [i_2] [i_3];
                    var_22 = (arr_5 [i_1]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_23 -= (arr_3 [3] [i_1]);
                    arr_14 [i_0] [i_1] [i_0] [i_4] |= (arr_11 [i_4] [i_4]);
                    arr_15 [i_4] [i_1] [i_1] = (arr_1 [i_0]);

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5 - 1] = (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]);
                        var_24 = arr_2 [i_5];
                        arr_19 [i_1] = (arr_11 [i_0] [i_5 - 1]);
                        var_25 = (max(var_25, (arr_4 [i_2] [i_4])));
                        var_26 = (arr_11 [i_0] [i_1]);
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_27 = (arr_5 [i_0]);
                        var_28 = (arr_16 [6] [i_0] [i_0] [2] [i_0] [13] [6]);
                        var_29 = arr_21 [i_0] [i_1];
                    }
                }
            }
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                arr_28 [i_1] = (arr_21 [i_0] [i_0]);
                var_30 = (max(var_30, (arr_1 [i_0])));
            }
            var_31 = (arr_9 [i_0] [i_1] [5] [i_1] [1]);
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_32 = (arr_2 [i_0]);
            var_33 = (arr_29 [i_8] [i_8]);
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_34 ^= (arr_23 [i_9] [i_9] [i_9] [0] [i_9]);
        arr_35 [7] = (arr_7 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_35 = (arr_16 [i_10] [i_10] [i_10] [9] [i_10] [i_10] [i_10]);

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_36 = (min(var_36, (arr_8 [i_10] [i_11] [i_10] [i_10] [i_10] [i_10])));

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_42 [i_10] [i_10] [11] [i_12] = (arr_13 [i_10] [i_11] [i_12]);
                arr_43 [i_10] [i_10] [i_10] [i_10] = (arr_12 [i_10] [i_11] [i_12] [i_12]);
                arr_44 [i_11] = (arr_25 [i_10]);
                var_37 = arr_8 [i_12] [i_12] [11] [i_11] [i_11] [i_10];
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 14;i_13 += 1)
            {
                var_38 ^= (arr_8 [i_10] [i_11] [i_11] [i_13 - 1] [i_13] [4]);
                var_39 = (min(var_39, (arr_37 [i_10])));
            }
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                var_40 -= (arr_31 [i_10] [14] [14]);

                for (int i_15 = 4; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    arr_53 [i_15] [i_14] [i_11] [i_11] [8] [i_10] = (arr_41 [i_10] [i_10]);
                    var_41 = (min(var_41, (arr_17 [i_10] [12] [i_10] [i_10] [i_10] [i_10] [i_10])));
                }
                for (int i_16 = 4; i_16 < 12;i_16 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        arr_61 [i_10] [8] [0] [i_16 + 2] [i_17] = (arr_58 [i_17] [i_17] [i_17] [12] [i_17] [i_17]);
                        arr_62 [i_17] [1] [1] [i_11] [8] = (arr_0 [8]);
                        arr_63 [i_10] [i_10] [0] [i_10] [i_10] = (arr_46 [i_16 - 2] [13]);
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_42 -= (arr_22 [i_10] [3] [i_10]);
                        arr_66 [i_10] [i_10] [i_14] [i_10] [i_16] [i_18] [i_18] = (arr_7 [i_10] [i_10] [12] [i_18]);
                        var_43 = (arr_58 [i_11] [12] [12] [0] [i_11] [i_11]);
                        var_44 -= (arr_32 [5]);
                    }
                    var_45 = arr_27 [i_11] [i_11] [0];
                }

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_46 = (arr_55 [i_10] [i_10] [i_10]);
                    arr_70 [i_10] [i_11] [13] [i_14] [i_19] = (arr_46 [0] [i_11]);
                    var_47 &= (arr_2 [i_10]);
                }
                var_48 = (min(var_48, (arr_56 [i_10] [i_11] [i_11] [i_14 - 1])));
            }

            for (int i_20 = 2; i_20 < 14;i_20 += 1)
            {
                var_49 = (max(var_49, (arr_36 [i_10] [12])));
                var_50 = arr_20 [7] [i_10] [i_11] [i_11] [i_20];
                arr_74 [i_11] [i_20] [8] [i_20] = (arr_10 [i_11] [i_11] [i_11] [i_11] [i_11]);

                /* vectorizable */
                for (int i_21 = 1; i_21 < 13;i_21 += 1) /* same iter space */
                {
                    arr_79 [i_10] [i_11] [i_20 - 2] [i_21 - 1] [i_10] [i_11] |= (arr_27 [i_10] [i_10] [i_21 - 1]);
                    var_51 = (arr_52 [i_10] [i_10] [i_10] [i_10]);
                    var_52 = arr_71 [i_21] [i_21 + 1] [i_21 - 1];
                    var_53 |= (arr_50 [i_10] [i_11] [i_20 - 2] [i_11]);
                }
                /* vectorizable */
                for (int i_22 = 1; i_22 < 13;i_22 += 1) /* same iter space */
                {
                    var_54 = (arr_68 [i_10] [i_10] [i_10] [i_10] [i_10]);
                    var_55 &= arr_49 [i_22];
                    var_56 = (min(var_56, (arr_5 [i_10])));
                }
                for (int i_23 = 1; i_23 < 13;i_23 += 1) /* same iter space */
                {
                    arr_86 [i_10] [i_10] [i_20 + 1] [i_20 + 1] = (arr_26 [6] [12] [12] [i_23]);
                    var_57 = (arr_40 [2] [i_11] [2]);
                    arr_87 [i_20 - 2] [i_23] = (arr_54 [13] [i_23 + 2]);
                    arr_88 [i_10] [i_10] [7] [i_10] = (arr_13 [i_11] [i_20] [14]);
                }
            }
        }
    }
    #pragma endscop
}
