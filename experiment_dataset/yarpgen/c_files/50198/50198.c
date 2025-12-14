/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = 14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_10 = (max(var_10, (((1645707578 <= (arr_10 [i_4] [i_3] [i_1] [i_0]))))));
                                var_11 = ((((118 << (-54 + 74)))));
                                arr_15 [i_0] [i_2] [i_2] = ((((var_4 | 120) | 1)));
                            }
                            for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_5] [12] [i_2] [i_2] [12] [12] = (arr_13 [i_5] [i_5 + 1] [i_5] [i_5] [14]);
                                arr_19 [i_0] &= (var_1 != var_3);
                                var_12 = (var_2 / ((((arr_11 [i_0 - 2] [i_0 - 2]) >= 30))));
                                var_13 = ((14063456042836600895 / (((arr_10 [i_1] [i_1 - 1] [i_1 - 1] [4]) + 1))));
                                var_14 = (min(var_14, (((((var_3 + (arr_1 [i_3 - 1] [i_3]))) | 120)))));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, 253));
                                arr_22 [i_0 - 1] [14] [11] [1] [i_6 + 1] [i_2] [i_3] = ((var_7 * (arr_5 [3] [i_1 + 3])));
                                var_16 = (arr_8 [i_0 - 2]);
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                var_17 = (var_4 / 253);
                                arr_25 [i_2] [i_2] = (((arr_3 [i_1 + 2]) & 255));
                            }
                            arr_26 [i_3] [i_1 + 3] [i_2] [9] [9] [i_2] = (((arr_0 [i_0 + 1]) > (((arr_0 [i_0 - 1]) ^ (arr_3 [i_0 + 1])))));
                        }
                    }
                }
                var_18 += ((((var_9 + var_6) || 233)));
                arr_27 [0] [1] = (0 < 39951);
            }
        }
    }

    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_19 ^= ((var_8 << (((arr_4 [i_8 + 1]) + 30931))));
        var_20 += (1 >= -1);
        var_21 = (max(var_21, (arr_20 [i_8] [i_8] [i_8 + 2])));
        var_22 = (max(var_22, (var_3 && var_0)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            arr_36 [i_10] = ((var_0 << (var_0 - 3246839305)));
            var_23 = (max(var_23, var_0));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_45 [i_9] [i_9] |= var_8;
                            var_24 ^= (arr_10 [i_11 + 1] [i_11 + 1] [i_11] [i_12]);
                        }
                    }
                }
            }

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 4; i_15 < 14;i_15 += 1)
                {
                    var_25 = (arr_17 [i_9] [i_15 + 1]);
                    arr_50 [i_9] [i_9] = (((arr_43 [i_14] [i_15 - 2]) + var_2));
                    arr_51 [i_15] = var_3;
                    var_26 = (((arr_16 [1] [i_15 - 3] [i_14] [i_15 - 2] [3]) >> (((arr_16 [i_9] [i_9] [i_9] [i_9] [i_9]) - 90))));
                }
                for (int i_16 = 4; i_16 < 15;i_16 += 1)
                {
                    var_27 -= (arr_31 [i_10 - 1]);
                    arr_56 [i_9] [i_10] [i_9] = ((var_5 == (arr_55 [i_16] [i_16 - 4] [i_16 - 3] [i_16 - 3] [6] [i_16])));
                    var_28 = (min(var_28, ((((var_4 + 2147483647) << var_1)))));
                    arr_57 [i_16 - 2] [i_16 - 2] = (914530306 & 354224375);
                }
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    var_29 = (var_6 >= -54);

                    for (int i_18 = 1; i_18 < 14;i_18 += 1)
                    {
                        arr_62 [i_9] [i_10] = 120;
                        arr_63 [8] [8] [1] [9] [i_17 + 1] [i_17] [i_18] = ((0 || (arr_6 [i_17 + 1])));
                    }
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        var_30 = -115;
                        var_31 = (arr_44 [i_17 + 3] [i_17] [i_17] [i_17 - 1] [0]);
                    }
                    var_32 = (min(var_32, (1 < 39951)));
                    var_33 ^= (((arr_44 [i_17 + 3] [i_9] [i_17 + 3] [i_10 - 1] [i_9]) <= (arr_53 [i_17 + 3] [i_10 - 1] [i_10])));
                    var_34 -= var_1;
                }
                arr_67 [i_10] [i_10] [i_9] = (arr_21 [i_10 - 1] [i_14] [i_10 - 1] [i_10 - 1] [i_14]);
            }
            for (int i_20 = 1; i_20 < 15;i_20 += 1)
            {
                arr_71 [i_20] [10] = 3;
                var_35 = 245;
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    {
                        var_36 = 0;
                        arr_81 [i_9] [i_21] [i_22] [i_21] = (arr_0 [i_21]);
                    }
                }
            }
        }
    }
    var_37 = var_8;
    #pragma endscop
}
