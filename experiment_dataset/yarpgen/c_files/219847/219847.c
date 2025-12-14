/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_3 [i_0 - 1])));
            var_14 ^= (~var_12);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_15 += (arr_6 [i_0] [i_1] [i_1] [i_3] [i_1]);
                        var_16 = (arr_7 [i_0] [i_1] [i_0] [i_3 + 2] [i_2] [1]);
                        var_17 -= ((!((!(arr_8 [i_0] [i_0 + 1] [i_3 + 2] [i_3])))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_4] [i_0 - 2] [i_0 - 2] = (arr_4 [i_0] [i_0] [i_0]);

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_18 += (arr_0 [7] [7]);
                var_19 = (arr_0 [4] [i_4]);
                var_20 ^= (arr_7 [i_4] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0] [4]);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_7] [i_5] = (arr_0 [i_0 - 2] [i_0 - 2]);
                            var_21 = (arr_7 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7]);
                            var_22 -= (arr_7 [i_0] [i_0] [i_0 - 2] [7] [i_0 + 1] [i_0 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_23 = ((!(arr_10 [i_0 + 2])));
                            var_24 = (arr_11 [i_0 + 1] [i_0 + 1] [i_5]);
                            arr_27 [0] [6] [6] [i_8] [8] = var_10;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_25 = (!-var_4);
                var_26 ^= ((-((-(arr_23 [i_0 - 2] [2] [i_0 - 2] [i_0 + 2])))));
                var_27 -= (arr_16 [7] [i_0 - 2] [i_10] [i_0]);
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                arr_34 [i_0 - 1] [i_0 - 1] [i_11] = (arr_6 [i_11] [i_4] [2] [i_0 + 2] [3]);
                arr_35 [i_0 + 2] [i_0] = (arr_9 [i_0 + 2]);
                var_28 += (arr_5 [i_0] [i_0 - 2]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        {
                            var_29 = (arr_16 [i_13] [i_13] [i_13 + 4] [i_13 + 1]);
                            arr_41 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (arr_0 [i_13] [i_13]);
                            arr_42 [i_0] [i_0] [i_0] [i_12] [i_13] [i_0] = var_2;
                        }
                    }
                }
            }
            var_30 |= (arr_8 [i_0 - 2] [i_0] [i_0] [10]);
        }
        var_31 ^= (arr_24 [i_0 - 2]);
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_32 = (max(var_32, ((~(arr_45 [i_14])))));
        /* LoopNest 3 */
        for (int i_15 = 4; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        var_33 = (arr_49 [i_15] [i_15 + 3] [i_15 - 3]);
                        var_34 = (arr_47 [i_17]);
                        var_35 -= (arr_50 [i_16] [i_16] [i_16]);
                    }
                }
            }
        }
        var_36 = var_12;

        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {

            /* vectorizable */
            for (int i_19 = 2; i_19 < 21;i_19 += 1) /* same iter space */
            {
                var_37 = (arr_46 [i_14] [i_18 + 1]);
                arr_61 [i_14] = (arr_46 [i_18 - 1] [i_19 - 1]);
            }
            for (int i_20 = 2; i_20 < 21;i_20 += 1) /* same iter space */
            {
                arr_64 [i_14] [i_14] = var_5;
                arr_65 [i_14] [i_14] = (arr_48 [i_14]);
                var_38 = var_12;
                arr_66 [i_18] = ((!(arr_62 [i_20] [i_20 - 2] [i_20 - 2] [i_20])));
            }
            var_39 = (max(var_39, ((~(arr_47 [i_18 - 1])))));
            arr_67 [i_14] [i_14] [i_14] = (arr_45 [i_14]);
        }
        for (int i_21 = 1; i_21 < 20;i_21 += 1)
        {

            /* vectorizable */
            for (int i_22 = 1; i_22 < 21;i_22 += 1)
            {
                arr_73 [i_14] [i_14] [i_22] = ((~(arr_49 [i_21 + 2] [i_22 + 1] [i_22 - 1])));
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 18;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            arr_79 [5] [i_21] [6] [i_24] [i_24] [i_24] = (~(arr_76 [i_14] [i_21] [i_22 - 1] [i_22 - 1] [17]));
                            var_40 &= (arr_69 [i_22 + 1]);
                            var_41 = var_6;
                        }
                    }
                }
            }
            for (int i_25 = 0; i_25 < 22;i_25 += 1) /* same iter space */
            {

                for (int i_26 = 2; i_26 < 21;i_26 += 1)
                {
                    arr_84 [i_26] = 29437;
                    var_42 = (arr_44 [i_14]);
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    for (int i_28 = 2; i_28 < 21;i_28 += 1)
                    {
                        {
                            var_43 = var_4;
                            arr_92 [i_14] [i_14] [i_28] [i_27] [i_28] = (arr_83 [1] [i_28 - 2] [i_21 + 1] [9]);
                        }
                    }
                }
            }
            for (int i_29 = 0; i_29 < 22;i_29 += 1) /* same iter space */
            {
                var_44 = (((~(arr_75 [i_29] [21] [i_29] [i_21 - 1]))));

                for (int i_30 = 2; i_30 < 18;i_30 += 1)
                {
                    var_45 = (max(var_45, (arr_63 [i_30 + 1] [i_21] [i_21 + 2])));
                    var_46 = var_6;
                }
            }
            var_47 |= ((((!(arr_76 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21])))));
            var_48 = (arr_94 [i_14] [i_21] [i_21 - 1]);
            arr_98 [4] [4] = (-(arr_51 [i_14] [i_21 - 1] [i_21 + 1] [0]));
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 22;i_31 += 1) /* same iter space */
        {
            var_49 -= var_7;
            /* LoopNest 3 */
            for (int i_32 = 2; i_32 < 21;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 22;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 22;i_34 += 1)
                    {
                        {
                            var_50 = (arr_105 [i_14] [i_14] [i_14] [i_32 - 2]);
                            var_51 = (arr_76 [i_32] [i_31] [16] [i_33] [i_31]);
                            var_52 -= ((~(arr_108 [i_14] [i_14])));
                            var_53 ^= (arr_104 [i_32] [i_32 + 1] [i_32 - 1] [i_32 - 2]);
                        }
                    }
                }
            }
            arr_109 [i_31] [i_31] [i_31] = var_5;
        }
        /* vectorizable */
        for (int i_35 = 0; i_35 < 22;i_35 += 1) /* same iter space */
        {
            arr_113 [i_35] [i_35] = ((~(arr_102 [18] [i_35])));
            var_54 &= ((!(arr_60 [i_35])));
            var_55 -= (~(arr_52 [i_14] [i_35] [i_14] [i_14]));
        }
        var_56 = var_4;
    }
    var_57 = (~var_0);
    #pragma endscop
}
