/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0 + 1] = 255;
        var_12 = var_5;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_13 &= (((arr_0 [i_0] [i_1 - 2]) && (arr_3 [i_0 + 1])));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_14 = (max(var_14, (arr_8 [i_0] [i_1 + 2] [1] [i_4])));
                            var_15 = (((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2]) ? 2 : ((var_9 ? (arr_3 [1]) : var_9))));
                            var_16 = ((var_1 ? var_9 : var_2));
                            var_17 -= (((arr_0 [i_1 - 2] [i_3 - 1]) ? (arr_0 [i_1 + 2] [i_3 - 1]) : var_4));
                        }
                    }
                }
                var_18 = (((arr_9 [i_1 + 1] [i_2] [i_2 - 1] [i_1] [i_2 - 1]) ? 255 : var_10));
                var_19 = var_3;
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_20 = (arr_0 [i_0] [i_0]);
                            arr_17 [i_0] [i_2] [i_2] [i_5 + 4] [1] [i_0] = (arr_10 [i_1 + 1]);
                        }
                    }
                }
                var_21 = ((+((var_10 ? (arr_10 [i_0]) : 29))));
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                var_22 |= (~var_9);
                var_23 &= var_5;
            }
            arr_20 [i_1] [i_0 - 1] = (var_5 ? (~var_6) : (~var_7));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_24 *= (arr_13 [i_0 - 1] [i_0 - 1] [i_0] [2] [4]);
            var_25 = ((((arr_5 [i_8]) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1]) : var_0)));
            var_26 = ((-(arr_2 [i_8] [i_8])));
        }
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            var_27 = (arr_15 [i_9] [i_9] [7] [i_9 + 2] [2]);
            arr_26 [3] = ((18 ? ((((arr_18 [i_0] [i_0] [11] [i_0]) ? (arr_9 [6] [4] [6] [i_0 - 1] [6]) : 0))) : (((arr_21 [i_0]) ? (arr_23 [i_9] [i_9] [i_0]) : (arr_24 [9] [i_9] [i_9])))));

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_28 = -224;
                var_29 = (min(var_29, ((((arr_25 [i_0 - 1] [i_0 + 1]) + (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                arr_29 [i_10] [i_9 - 1] [i_10] = (arr_7 [i_0 - 1] [i_9 - 2] [i_10]);
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    {
                        var_30 |= (((arr_14 [i_0 - 1]) ? (arr_14 [i_0 + 1]) : var_0));
                        var_31 = 2290951095;
                        var_32 = arr_28 [i_11];
                        var_33 = (((arr_31 [i_13 - 1] [6] [i_13]) ? ((~(arr_11 [i_0 + 1] [i_0 + 1] [i_11] [9] [i_0]))) : (((arr_9 [i_0] [i_11] [i_0] [i_0] [i_0]) ? 64 : var_4))));
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 16;i_14 += 1)
    {
        var_34 = ((((max(((var_11 ? (arr_41 [i_14]) : var_1)), 889990134))) - (arr_41 [i_14])));
        arr_43 [i_14] [16] = (((((arr_42 [1]) ? (arr_41 [i_14]) : 22))));
        var_35 *= ((((var_5 ? (25717 - 227) : (arr_41 [4]))) / (arr_41 [16])));
        var_36 = 57351;
    }
    var_37 ^= var_8;

    /* vectorizable */
    for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
    {
        var_38 = (((arr_45 [i_15 - 2] [i_15]) && 255));
        var_39 = (-1 + 14);
        var_40 = (arr_45 [i_15 + 1] [i_15 - 1]);
        var_41 = (max(var_41, var_6));
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 19;i_16 += 1) /* same iter space */
    {
        var_42 = (arr_47 [i_16 + 2] [i_16]);
        var_43 = (arr_46 [i_16]);
    }
    #pragma endscop
}
