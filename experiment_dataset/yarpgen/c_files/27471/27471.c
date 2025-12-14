/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 &= (arr_2 [i_0]);
        arr_4 [i_0] = ((~(arr_1 [3])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_9 [0] = (arr_0 [i_1]);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] |= (arr_11 [7] [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_12 = ((min(((min((arr_17 [i_4] [i_4] [i_3] [i_1]), (arr_1 [i_3])))), (arr_0 [i_1]))));
                        var_13 = (arr_10 [i_2]);

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_24 [i_1] [i_2] [11] [i_4] [10] = (arr_5 [9]);
                            var_14 = min((arr_7 [i_2]), var_10);
                        }
                        var_15 *= arr_13 [i_1] [i_1] [i_4];
                    }
                }
            }
            arr_25 [i_1] [i_1] [i_2] = (max((arr_8 [i_2]), (arr_8 [i_1])));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_29 [i_6] [i_6] [i_6] = (arr_11 [i_6 + 1] [i_1]);
            arr_30 [i_1] [i_1] [i_6] = var_0;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_33 [i_7 + 2] = (arr_19 [i_7 - 1]);
            var_16 &= (arr_2 [i_7 + 2]);
            var_17 = arr_14 [i_1] [i_7 - 1] [i_7];
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_18 = var_4;
            arr_37 [6] [i_8] = arr_20 [i_1] [i_8] [i_1] [i_1];

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_41 [i_9] |= min((arr_8 [i_1]), (arr_28 [i_8 - 1] [i_8 + 2] [i_8 - 1]));
                var_19 = arr_32 [i_8] [i_8 + 1] [i_8];

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_20 = (min((arr_8 [i_8 + 1]), (min((arr_8 [i_8 - 1]), (arr_8 [i_8 + 1])))));
                        arr_48 [i_1] [i_1] [i_8 - 1] [i_8] [i_1] [14] [9] = arr_28 [i_10] [i_10] [i_11];
                    }
                    var_21 = max((arr_0 [i_1]), (arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 1]));
                    arr_49 [i_8] [i_1] [i_8] [i_1] [i_10] |= (max((arr_13 [i_8 + 2] [i_8 + 1] [i_8 + 1]), var_5));
                }
            }
        }
        var_22 = -var_3;
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_23 = (arr_50 [i_12]);
        var_24 = var_10;
    }
    for (int i_13 = 3; i_13 < 13;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    var_25 = (max((arr_57 [i_14]), (min((arr_2 [i_13 - 2]), var_0))));
                    var_26 += ((-(arr_53 [i_13 - 1] [i_13 - 3])));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_67 [i_13] [5] [i_16] [i_13] = arr_58 [i_13 - 2] [i_13 - 1];
                                var_27 &= arr_11 [i_13] [i_13];
                            }
                        }
                    }
                    var_28 = (arr_34 [i_14]);
                    arr_68 [i_15] [i_13] [7] = min(32755, -1);
                }
            }
        }
        var_29 -= max(((min((arr_14 [i_13] [14] [i_13 - 3]), (arr_51 [6] [14])))), -9);
        var_30 = (max(var_30, ((min((arr_20 [i_13] [i_13] [13] [i_13 + 1]), (!var_5))))));
        var_31 = ((min(var_5, (arr_36 [i_13 - 1] [i_13 - 3]))));
    }
    var_32 = ((-((min(var_4, var_10)))));
    #pragma endscop
}
