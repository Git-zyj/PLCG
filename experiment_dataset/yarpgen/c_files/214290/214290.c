/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((!((!(arr_1 [3])))));
        arr_3 [i_0] = -9007199254740991;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = ((~(arr_6 [i_1])));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_16 ^= arr_5 [i_2];
            arr_11 [i_1] [i_1] = (~(arr_5 [1]));
            var_17 = ((~((-((-(arr_0 [13])))))));
            var_18 ^= ((~(arr_4 [i_1])));
            var_19 |= ((-(arr_10 [12])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                var_20 = (arr_12 [i_1] [i_1]);
                var_21 = (arr_6 [16]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_22 = (arr_9 [i_5] [i_4]);
                            var_23 |= (arr_17 [1]);
                        }
                    }
                }
                var_24 ^= (arr_1 [9]);
                var_25 = (arr_20 [1] [i_3]);
            }
            var_26 = -8279303778710587367;
            var_27 = (max(var_27, (arr_14 [i_1] [13] [i_1])));
            arr_25 [4] [i_3] [4] = ((!(arr_4 [i_3])));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_28 |= (arr_0 [7]);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_39 [i_9] [i_8] [21] [i_10] = (arr_27 [i_9] [i_10]);
                        var_29 = (arr_31 [i_9] [i_8]);
                        var_30 = (~(arr_2 [20]));
                        arr_40 [i_9] [4] = -186;
                    }
                }
            }
        }
        arr_41 [i_7] [i_7] = (arr_26 [i_7]);
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_31 = (arr_51 [i_11] [i_13] [14] [i_11] [i_11]);
                        var_32 = (arr_36 [3] [i_12] [i_13] [i_14]);
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            {
                                arr_57 [i_16] [i_12] = (arr_0 [i_11]);
                                arr_58 [i_16] [i_12] [i_12] = ((-(arr_23 [7] [12] [9] [i_15] [15] [17])));
                            }
                        }
                    }
                    arr_59 [9] [i_12] [i_12] = (((-(arr_45 [i_11]))));
                }
            }
        }

        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_33 = ((~((-(arr_2 [8])))));
            var_34 = (arr_22 [13] [i_17] [i_17]);
        }
        for (int i_18 = 3; i_18 < 15;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    {
                        arr_68 [i_18] [9] [7] [i_18] [9] [1] = (((-(!6593))));

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            arr_73 [15] [i_18] [i_11] = ((-(arr_69 [9])));
                            arr_74 [i_18] = ((!(arr_10 [i_20])));
                            var_35 = arr_49 [i_11] [6] [i_11];
                        }

                        /* vectorizable */
                        for (int i_22 = 2; i_22 < 16;i_22 += 1)
                        {
                            arr_78 [i_11] [12] [i_11] [i_19] [i_18] [i_11] = (~1);
                            arr_79 [1] [i_18] [i_19] [i_18] = (arr_7 [i_22]);
                            arr_80 [i_22 + 1] [i_20] [i_18] [i_18] [i_11] = (arr_61 [i_18]);
                            arr_81 [i_20] |= (!(arr_54 [9] [i_18] [3] [i_20] [11]));
                        }
                    }
                }
            }
            var_36 = ((~(arr_20 [i_11] [i_18])));
            var_37 = (arr_7 [i_18]);
        }
    }
    var_38 = var_2;
    #pragma endscop
}
