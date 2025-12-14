/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_1] [i_0] = (arr_1 [i_0]);
                arr_8 [i_0] [i_1] [i_1] [i_2] = var_3;
            }

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        arr_18 [i_1] = ((var_3 ? (arr_17 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) : 205));
                        var_13 = ((var_6 ? (arr_12 [i_0] [i_1] [i_0] [5] [i_0]) : (arr_12 [i_5] [i_1] [i_3] [i_1] [i_0])));
                    }
                    var_14 = ((~(arr_11 [i_0] [i_1] [i_3])));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_15 ^= ((10 ? var_6 : var_12));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_24 [i_7] [i_1] [8] [i_7] [i_7] = var_0;
                        var_16 -= -654500984793090743;
                    }
                    arr_25 [i_0] [i_0] [i_3] [i_1] [i_6] [i_1] = (((arr_1 [i_3]) ? (arr_6 [i_1]) : ((var_9 ? (arr_6 [i_1]) : var_2))));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_17 &= (~888544307);
                    var_18 ^= (arr_5 [i_0] [i_1] [i_3] [i_8]);
                    arr_30 [i_8] &= (arr_12 [i_0] [i_3] [i_0] [i_0] [i_0]);

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_19 = (~var_3);
                        var_20 = (max(var_20, (arr_21 [i_0] [i_3] [8])));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_21 = var_8;
                        arr_37 [1] [i_10] [i_10] [i_1] [i_10] [i_10] [1] = (((arr_27 [i_1] [i_8] [i_10] [i_1] [i_10 + 1] [i_1]) ? (arr_27 [i_3] [1] [i_10] [i_1] [i_10 + 1] [8]) : (arr_27 [i_8] [6] [i_10] [i_1] [i_10 + 1] [i_10])));
                        arr_38 [i_8] [i_1] [i_8] [i_0] = (arr_31 [i_8] [10] [i_10] [i_8] [i_10 + 1] [i_10] [i_10 - 1]);
                        arr_39 [i_0] [6] [i_1] [5] [i_0] = var_2;
                    }

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_22 = (-(arr_23 [i_8] [i_8] [i_8] [i_11 - 1] [i_11 - 1]));
                        arr_42 [i_1] [i_0] [4] [8] [i_8] [5] = ((!(arr_20 [i_1] [i_8] [i_3] [8])));
                        arr_43 [i_0] [7] [i_3] [i_1] = ((~((-(arr_12 [6] [i_1] [10] [2] [i_11 - 1])))));
                        arr_44 [1] [i_1] [i_1] = ((-(arr_12 [i_11] [i_1] [i_11 - 1] [0] [i_11])));
                    }
                }
                var_23 = ((arr_32 [i_0] [i_1]) && (((arr_23 [i_0] [i_0] [i_0] [i_3] [i_3]) == var_6)));
                arr_45 [1] [i_3] [i_0] &= (arr_12 [i_0] [i_3] [i_3] [i_0] [i_0]);
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_24 = (var_12 < 30826);
                var_25 += var_0;
                arr_49 [i_0] [i_1] [i_1] = 118;
            }
            var_26 = var_12;
        }
        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
        {
            var_27 = var_2;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_0] = ((var_11 && ((((arr_32 [i_14] [i_15]) ? (arr_10 [i_0] [i_0]) : (arr_5 [3] [i_14] [2] [i_0]))))));
                        arr_60 [6] [i_15] [2] [i_13] [i_14] [i_15] = ((-7 ? (arr_29 [i_13] [i_15]) : 42840));
                        var_28 = (((arr_34 [i_0] [6] [i_15]) == (~-24605)));
                        arr_61 [i_15] [6] [i_15] = var_7;
                    }
                }
            }
            var_29 = var_7;
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 4; i_17 < 8;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        var_30 = (var_7 | (!3791));
                        var_31 = -117;
                    }
                }
            }
        }
        var_32 = (((arr_46 [i_0] [i_0] [i_0]) ? -888544307 : var_1));
        var_33 = (max(var_33, 30826));
    }
    var_34 = (min(var_34, -1395676598));
    #pragma endscop
}
