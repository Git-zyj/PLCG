/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 ^= arr_9 [i_3];
                        var_15 *= arr_2 [i_1];
                    }
                }
            }
            var_16 = (max(var_16, (arr_1 [i_0])));
            var_17 = arr_4 [i_0] [i_0];
        }
        var_18 = arr_10 [i_0] [i_0] [i_0] [4];
        var_19 = (arr_8 [i_0] [8] [i_0]);
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = arr_7 [i_5];
            var_21 = arr_8 [i_5] [i_5] [8];
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_17 [i_6] [i_6] = arr_7 [i_6];
            var_22 += arr_7 [4];
        }
        var_23 += arr_1 [14];
        arr_18 [i_4 + 1] [i_4] = (arr_10 [10] [i_4] [i_4 - 1] [18]);

        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_24 = (arr_2 [i_4 - 2]);
            var_25 ^= arr_10 [i_4] [i_4] [i_4] [4];
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] [i_4 - 2] = (arr_25 [i_9] [i_8 + 3] [i_9]);

                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            arr_35 [i_4] [i_4 - 2] [i_4] [11] [i_9] = (arr_20 [i_4]);
                            var_26 = (arr_20 [i_11]);
                            arr_36 [i_4] [i_4] [i_8] [i_9] [i_8] [i_9] = arr_23 [i_9] [i_11 + 3] [i_9];
                            arr_37 [i_9] = arr_5 [i_8] [i_8] [i_8];
                        }
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            arr_41 [6] [i_9 + 2] [i_9] [11] [i_9] [i_8] [i_10] = (arr_34 [i_4] [i_10]);
                            arr_42 [i_4] [i_4] [i_4] [i_9] [i_4 + 1] = arr_33 [i_4] [i_8] [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_12];
                            var_27 |= arr_31 [i_4] [i_8] [i_10] [i_10] [i_10];
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_28 = arr_31 [i_4] [i_4] [i_4] [i_9] [i_4];
                            var_29 = (arr_33 [i_4] [i_8] [i_9] [i_10] [i_8] [i_9] [9]);
                        }
                    }
                }
            }
            arr_45 [i_4] [i_8] [7] = arr_26 [i_4] [10] [i_8] [i_8];
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            arr_48 [6] [i_14] = arr_2 [i_4];

            for (int i_15 = 3; i_15 < 10;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_30 -= arr_49 [i_15 - 3] [i_17];
                            arr_55 [6] [i_14] [i_15] [i_15] [i_14] [i_14] = (arr_24 [i_14] [0] [0]);
                            arr_56 [i_15] [i_14] [i_14] = arr_26 [i_4] [i_15] [i_15 - 3] [i_4];
                            var_31 = (min(var_31, (arr_25 [i_17] [i_17] [i_15])));
                        }
                    }
                }

                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {
                    arr_59 [i_4] [i_15] [i_15 - 1] [i_18] = (arr_26 [11] [i_15] [i_4 - 1] [i_18]);
                    var_32 = (arr_52 [i_18]);
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
                {
                    var_33 = (arr_9 [i_15]);
                    var_34 = arr_50 [10] [10] [i_14];
                }
                for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
                {
                    var_35 = (arr_60 [i_15]);
                    var_36 = (min(var_36, (arr_16 [i_4])));
                    var_37 += arr_29 [i_20];
                    var_38 = arr_33 [i_4] [i_4 - 1] [i_14] [i_15] [i_14] [i_15] [i_20];
                    var_39 = (arr_60 [i_15]);
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    var_40 = arr_0 [i_4];

                    for (int i_22 = 2; i_22 < 10;i_22 += 1)
                    {
                        arr_73 [i_4 - 2] [i_14] [i_15] [i_4 - 2] [i_4 - 2] = (arr_29 [i_15]);
                        var_41 = arr_29 [i_15];
                        arr_74 [i_22] &= arr_53 [4] [i_14] [i_15] [i_21] [i_15];
                        var_42 = (min(var_42, (arr_16 [i_4])));
                        arr_75 [i_4] [i_4] [i_4] [i_15] = (arr_49 [i_14] [i_14]);
                    }
                    for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
                    {
                        var_43 = (arr_1 [i_15 + 2]);
                        arr_78 [i_4 - 3] [i_14] [i_15] [i_21] [i_14] = (arr_12 [i_4] [i_14]);
                    }
                    for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
                    {
                        arr_82 [i_4] [i_15] = arr_69 [i_4] [i_4] [i_15] [i_4] [i_21] [i_15];
                        var_44 = arr_61 [10] [i_14] [i_15];
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_45 = arr_64 [i_15] [i_14];
                        arr_85 [i_15] = arr_49 [i_21] [i_15];
                        var_46 = arr_10 [i_4 + 1] [i_14] [i_25] [i_15];
                        arr_86 [i_25] [i_14] [i_15] [i_25] [i_25] |= (arr_25 [i_25] [8] [i_25]);
                        var_47 -= arr_29 [i_25];
                    }
                    var_48 = arr_13 [i_4];
                }
            }
            var_49 = arr_60 [4];
        }
        arr_87 [i_4] &= arr_14 [i_4] [i_4] [i_4];
    }
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 20;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            {
                var_50 = (max(var_50, (arr_10 [i_27] [i_27] [i_27] [8])));
                var_51 = (arr_6 [i_26]);
            }
        }
    }
    var_52 = var_3;
    #pragma endscop
}
