/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = 14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (15393162788864 ? 9223372036854775807 : 15393162788864);
                    var_18 = (var_2 & 798327367);
                    arr_8 [i_0] [i_0] [1] [1] = (((var_2 ? var_9 : (arr_5 [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [6] [i_3 + 3] [1] = -var_6;
                                var_19 = (min((arr_11 [i_3 + 3] [i_3 - 1] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3 + 3]), ((var_5 + (min(31, var_15))))));
                                arr_14 [1] [i_1] [i_2] [1] [1] = (max((max(var_12, (var_14 / var_12))), ((max((arr_12 [i_0] [i_0] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 1]), (arr_12 [i_1] [i_1] [i_1] [5] [i_1] [i_3 + 3]))))));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((arr_23 [i_0] [i_5] [i_6] [i_7 - 1] [1]) ? (arr_6 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (arr_21 [i_0] [i_5] [i_7 + 1] [i_7]))))));
                            var_21 = (min(var_21, (!18446744073709551615)));
                            var_22 ^= -var_9;
                            var_23 = (min(var_23, (~var_1)));
                        }
                    }
                }
            }
            var_24 -= 15393162788864;
            arr_24 [i_0] [i_5] [i_0] = ((((arr_11 [1] [i_5] [i_0] [i_5] [5] [i_5] [i_0]) ? (arr_17 [i_5]) : (arr_9 [1]))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            arr_28 [i_9] = (!var_9);
            arr_29 [i_9] = arr_12 [4] [5] [5] [i_9 + 2] [i_9] [8];
        }
        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            var_25 *= var_12;
            arr_33 [i_0] [i_10] = ((((((!((max(var_9, -9436))))))) < (max(-15393162788847, 255))));
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {
        var_26 = (min(var_26, var_10));

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_27 = (max(var_27, (arr_34 [i_11])));

                for (int i_14 = 3; i_14 < 23;i_14 += 1)
                {
                    arr_43 [i_11 - 1] [i_11 - 1] [i_11 - 3] [i_11] [22] [i_11 - 1] = (!1023);
                    var_28 = ((var_2 ? var_1 : (((var_10 ? (arr_36 [0] [i_13] [i_14]) : (arr_38 [i_12] [0] [i_12]))))));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_51 [12] [12] [12] [i_15] = (60 < 4294967040);
                            arr_52 [i_11 - 3] [3] [i_13] [i_15] [i_15] = ((42300 ? 64535 : 11867112238218541298));
                            arr_53 [i_11] [6] [6] [i_15] [0] [i_13] [i_12] = (arr_35 [i_11]);
                        }
                    }
                }
                var_29 = (arr_42 [i_11] [8] [i_13] [8]);
                var_30 = (arr_37 [i_11] [i_11 - 1]);
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                arr_56 [i_11] [i_12] [i_17] = (arr_37 [i_11] [i_11]);
                arr_57 [i_11 - 2] [i_11] [i_11] = var_4;
                var_31 |= (!var_13);
            }
            arr_58 [i_11] = ((~(arr_47 [i_12])));
            arr_59 [i_11 - 3] [i_12] = (((arr_47 [i_11 - 1]) ? (arr_50 [i_11] [22] [i_11] [i_12] [i_12] [i_11 - 2] [i_12]) : var_2));
            arr_60 [i_11 - 1] = ((arr_54 [10] [i_11 + 1] [i_11 - 1]) != (arr_54 [i_11 - 1] [i_11 - 1] [i_11 - 3]));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    var_32 = (min(var_32, 134));
                    var_33 = (((arr_66 [i_18] [i_18] [i_18]) ^ 990389176));
                }
            }
        }
        arr_71 [10] = var_6;
    }
    var_34 = ((!((var_13 || ((min(var_12, var_7)))))));
    #pragma endscop
}
