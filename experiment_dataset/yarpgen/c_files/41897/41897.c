/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((((~var_2) + 2147483647)) >> (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (1361794976 ? (arr_1 [i_0]) : 1);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_11 = ((-(min((max((arr_4 [i_1]), (arr_6 [4] [i_1]))), 0))));
        var_12 *= (min(((max((arr_1 [i_1]), (arr_0 [i_1])))), 1));
        var_13 *= (min((arr_1 [i_1]), (((arr_4 [i_1]) | (arr_3 [0] [0])))));
        var_14 += (((((1 ? 1236247145 : -1))) && var_7));
        var_15 = ((((min((arr_6 [i_1] [i_1]), var_2))) ? (4251317679721330664 && 1) : (((127 && ((((arr_3 [i_1] [i_1]) & (arr_0 [i_1])))))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_16 += (((max((arr_7 [i_2 - 3]), 1))) ? ((min(1, 1))) : (((!((max(255, (arr_9 [10] [i_2 + 3]))))))));
            var_17 = (max(var_17, (arr_5 [10] [10])));

            /* vectorizable */
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                arr_13 [i_4 - 2] [i_3] [i_2] = (arr_3 [i_3] [i_3]);
                arr_14 [i_3] [6] [i_3] = (arr_1 [i_3]);
                var_18 = ((-1 ? (arr_11 [i_4 - 2] [i_3] [8]) : (1 * 1)));
            }
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                arr_20 [i_6] [i_5] [i_2 + 4] [i_6] = (!1092961690);
                arr_21 [i_6] [i_5] [i_6] = 1;
            }
            for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_19 = (max(var_19, -1));
                            var_20 |= 1;
                            var_21 = ((-29664 ? 1 : (arr_23 [i_5 - 2] [i_2 - 1])));
                        }
                    }
                }
                arr_30 [i_7] [i_5 - 2] [12] = var_6;
                var_22 = (max(var_22, ((!((((arr_5 [i_7] [i_7]) - (arr_23 [i_7] [i_5]))))))));
                arr_31 [6] [6] = arr_8 [i_5];
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
            {
                arr_35 [i_10 + 1] [i_2] [i_2] = ((~(arr_12 [i_10] [i_10])));
                arr_36 [i_10] [i_2] = (((~(arr_34 [i_2] [i_2]))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 = -var_2;
                            var_24 *= var_2;
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    arr_50 [6] [i_13] [6] [6] = (arr_34 [i_2 - 2] [i_2 + 4]);
                    var_25 += (1 ? 127 : 3020798527);
                    arr_51 [i_14] [i_13] [i_5] [i_2] = (arr_44 [i_13] [i_13] [i_2 + 4]);
                }
                arr_52 [i_13] [i_5] [i_2] = ((~(arr_17 [i_13 + 2] [i_13 + 2] [i_5])));
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            arr_60 [i_17] [i_16] [i_15] [i_15] [i_5] [i_2] = (((var_7 / var_2) * -1803101234));
                            var_26 = (arr_56 [i_15] [i_15]);
                            arr_61 [i_17] [i_17] [i_15] [i_15] [i_5 - 1] [i_2] = var_2;
                        }
                    }
                }
            }
            var_27 = ((var_6 ? var_7 : (arr_26 [i_5 - 2] [i_5 + 1] [i_2] [i_2 + 3] [i_2])));
            var_28 ^= (~var_0);
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_29 = (((arr_3 [1] [1]) | 1));
            arr_64 [i_2] = (arr_1 [i_18]);
        }
        arr_65 [i_2 + 4] = -0;
    }
    var_30 = (-1162703610 >= var_7);
    var_31 = var_4;
    #pragma endscop
}
