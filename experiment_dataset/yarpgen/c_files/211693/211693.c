/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_10;
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 = (min(var_21, (arr_6 [8] [i_2] [i_2])));
            var_22 = (arr_3 [i_1] [i_1]);
            var_23 = (arr_4 [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 = (arr_11 [i_1] [4] [i_3] [i_4] [i_4] [i_3]);
                        var_25 = (min(var_25, (arr_7 [i_1] [i_1] [i_1] [i_1])));
                        var_26 = (min(var_26, (arr_6 [2] [2] [i_4])));
                        var_27 |= (arr_8 [i_1] [i_2] [i_3]);
                        var_28 = (arr_8 [i_4] [i_4] [i_3]);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_29 = (arr_1 [i_1] [i_2]);
                    var_30 = (arr_12 [i_2] [i_2] [i_2]);
                    var_31 = (arr_14 [i_1]);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_32 = arr_1 [i_1] [i_5];
                        var_33 = (arr_12 [i_1] [i_2] [i_8]);
                        arr_22 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2] = (arr_13 [i_1] [i_2] [i_7]);
                        var_34 = (arr_1 [i_5] [i_7]);
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_35 = (arr_13 [i_1] [i_2] [i_5]);
                        var_36 = (arr_10 [i_1] [i_2]);
                        arr_25 [i_1] [i_2] [i_2] [i_7] [i_2] = (arr_16 [i_1] [i_1] [i_1] [i_2]);
                        var_37 = (arr_6 [i_2] [i_2] [i_2]);
                        var_38 = (arr_6 [i_2] [i_2] [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_39 = (arr_27 [7] [i_2] [i_5] [i_5] [i_10]);
                        var_40 = arr_10 [i_2] [i_7];
                        var_41 = (arr_3 [i_1] [i_7]);
                        arr_29 [i_1] [i_1] [i_1 + 1] [i_1] [i_2] = arr_11 [i_1] [i_2] [i_2] [i_5] [i_1] [i_10];
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_42 += (arr_19 [16] [i_11] [i_11] [i_11] [i_11]);
                        var_43 = (min(var_43, (arr_27 [i_1] [i_1] [i_5] [i_1] [i_11])));
                        var_44 = (arr_8 [i_1] [i_5] [i_7]);
                        var_45 = (arr_16 [i_11] [i_11] [i_11] [i_2]);
                        var_46 = (arr_11 [i_1 + 2] [3] [i_1] [3] [i_1 + 2] [i_1]);
                    }
                    var_47 = (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [5]);
                    var_48 = (arr_1 [i_2] [i_5]);
                    var_49 = (arr_2 [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_50 = (arr_34 [i_2] [i_2] [i_12] [i_2]);
                            var_51 ^= (arr_14 [12]);
                            var_52 = (arr_6 [i_2] [i_2] [i_5]);
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_53 = (max(var_53, (arr_31 [i_1] [i_1] [i_1] [i_15] [i_16] [i_17] [i_17])));
                            var_54 ^= (arr_1 [i_1 + 3] [i_14]);
                            var_55 += (arr_8 [i_14] [i_16] [i_17]);
                            var_56 |= (arr_1 [i_1] [i_1]);
                        }
                    }
                }
            }
            arr_47 [14] [i_1] = (arr_8 [i_1 + 4] [i_1] [i_1 + 4]);
        }
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            arr_50 [i_1 + 3] = (arr_4 [i_18]);

            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                var_57 = (arr_18 [i_19] [i_18] [i_18]);

                /* vectorizable */
                for (int i_20 = 2; i_20 < 16;i_20 += 1)
                {
                    var_58 = arr_36 [i_20] [i_1] [i_18] [i_20] [i_1] [i_20] [i_19];
                    var_59 |= (arr_32 [i_1] [i_18] [i_18] [i_18] [i_18]);
                }
                for (int i_21 = 3; i_21 < 16;i_21 += 1)
                {
                    var_60 = arr_56 [i_1 + 2] [i_1 + 2];
                    arr_59 [i_1] [i_1] [i_1] = (arr_26 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]);
                    var_61 = (arr_53 [i_18] [i_19]);
                }
            }
            var_62 = (arr_49 [i_1] [i_1] [i_18]);
            var_63 = (arr_0 [i_1]);
        }
        var_64 |= (arr_52 [i_1] [i_1] [i_1] [i_1 + 3]);

        for (int i_22 = 1; i_22 < 16;i_22 += 1) /* same iter space */
        {
            var_65 = (min(var_65, (arr_19 [6] [i_22] [i_1] [i_22] [i_1])));

            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {
                arr_65 [i_1] [i_23] [i_23] = arr_0 [i_23];
                var_66 = (max(var_66, (arr_62 [i_1] [i_1] [i_1] [i_1])));
                var_67 = (arr_46 [i_1] [i_22] [i_22] [i_22] [i_22] [i_1] [i_22 - 1]);
            }
            var_68 = (max(var_68, (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 3])));
            var_69 = (max(var_69, (arr_49 [i_1] [i_1] [i_22])));
        }
        for (int i_24 = 1; i_24 < 16;i_24 += 1) /* same iter space */
        {
            var_70 |= (arr_21 [i_1]);
            var_71 = (arr_60 [i_1] [14]);
            var_72 = (arr_26 [i_1] [i_1] [i_1 + 1] [i_24] [i_24 + 1] [i_24]);
            arr_70 [i_1] [i_1] = (arr_66 [i_1] [i_1] [i_1]);
        }
        for (int i_25 = 1; i_25 < 16;i_25 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 17;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 16;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 17;i_28 += 1)
                    {
                        {
                            var_73 = (arr_82 [i_1] [i_25] [i_26] [i_27] [i_28]);
                            var_74 = (arr_39 [i_25] [i_25] [i_25] [i_28]);
                            var_75 = (arr_69 [i_25 - 1] [i_25 - 1]);
                        }
                    }
                }
            }
            var_76 = (arr_12 [i_1] [2] [i_1]);
            var_77 &= arr_51 [i_1 - 1] [i_1] [i_25] [i_25];
            var_78 = arr_34 [i_1] [i_1] [i_25] [i_1];

            for (int i_29 = 0; i_29 < 1;i_29 += 1)
            {
                var_79 &= (arr_34 [i_1] [i_1] [i_25 + 1] [i_29]);
                /* LoopNest 2 */
                for (int i_30 = 3; i_30 < 14;i_30 += 1)
                {
                    for (int i_31 = 4; i_31 < 16;i_31 += 1)
                    {
                        {
                            var_80 = (arr_84 [i_1] [i_25] [i_29] [i_25 - 1]);
                            var_81 = (arr_91 [i_29] [i_25 - 1] [i_29] [i_30] [i_31] [i_1]);
                            var_82 = (arr_61 [i_29] [i_30] [i_31]);
                        }
                    }
                }
                var_83 = (arr_82 [i_1] [i_25] [i_25 + 1] [i_29] [i_25]);
            }
        }
        var_84 |= (arr_86 [i_1] [i_1 + 1] [i_1 + 1]);
        var_85 = (arr_6 [1] [i_1] [i_1 + 2]);
    }
    #pragma endscop
}
