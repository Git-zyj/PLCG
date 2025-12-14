/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : -19827)) : (arr_1 [i_0]))) % 6));
        arr_3 [i_0] = ((var_1 ? ((max(224, 8192))) : var_2));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 = ((var_6 ^ (arr_6 [i_1] [i_1])));

            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_15 = ((var_1 & ((var_0 ? -32307 : (arr_6 [i_3] [i_2])))));
                    var_16 = 9385;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_17 = 8192;
                    var_18 = (~-17540);
                    var_19 = (((arr_12 [i_3 + 2] [i_3 + 3] [i_3 - 1] [i_3] [i_5] [i_5]) ? (arr_12 [i_2] [i_3 + 3] [22] [i_5] [i_5] [i_5]) : var_7));
                    var_20 = (((arr_6 [i_1] [i_1]) ? var_9 : (arr_6 [i_1] [i_2])));
                    arr_17 [i_2] = (((arr_13 [21] [i_2] [i_3] [i_5] [i_2] [i_5]) < (arr_13 [20] [20] [i_5] [i_5] [i_5] [i_5])));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    var_21 = (((!var_6) ? var_7 : (arr_15 [i_3 + 3] [i_3] [i_3 + 4] [i_3 + 4])));
                    arr_20 [i_2] = var_5;
                    arr_21 [i_1] [3] [i_2] [i_2] [i_6] = (~16383);
                    var_22 = (arr_8 [i_2] [i_6] [4] [i_6]);
                    var_23 |= -0;
                }
                arr_22 [i_1] [i_2] [i_1] [i_1] = (~0);
                arr_23 [i_2] = (arr_9 [i_2] [i_2] [i_2]);

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_28 [i_1] [i_2] [i_7] = (arr_10 [i_2] [i_2]);
                    arr_29 [i_2] [18] [12] [i_7] = 30119;
                    var_24 *= var_10;
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    arr_32 [i_1] [12] [i_2] [i_8] = var_5;

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        arr_35 [i_1] [i_2] [i_3] [i_8] [i_1] [i_2] [i_9] = (arr_16 [i_1] [i_2] [i_3 + 2] [i_3 + 2]);
                        arr_36 [i_2] [i_2] = ((var_8 ? ((252 ? var_3 : var_1)) : (arr_15 [i_3 - 1] [i_3 - 1] [i_8 - 1] [i_9 + 1])));
                        arr_37 [i_1] [i_2] [i_3 + 4] [i_3 + 4] [i_2] = ((((((arr_25 [i_1] [i_2] [i_3] [i_8] [i_9]) ? var_11 : var_9))) ? var_4 : (((arr_25 [i_1] [i_2] [i_3] [6] [20]) ? var_4 : (arr_12 [i_1] [i_2] [i_3 - 2] [i_3] [i_3] [i_9])))));
                        var_25 = ((((232 ? var_8 : var_10)) | var_2));
                        arr_38 [i_2] [i_2] [i_3 - 1] [i_8] [i_9] = ((((0 ? var_0 : 0)) != 15134));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_26 = ((0 / (arr_25 [i_1] [i_2] [i_3] [i_2] [i_1])));
                        var_27 *= (((((arr_12 [i_3] [i_10] [i_8] [i_3] [12] [12]) ? 57 : var_3)) * var_10));
                    }
                }
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_28 = (((arr_5 [i_1] [i_2]) ? 38722 : 243));
                var_29 = 17626;
            }
            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                arr_46 [i_2] [i_2] [i_1] = var_0;
                var_30 = (max(var_30, ((((((var_11 << (var_6 - 243)))) ? (arr_40 [6] [0]) : (~21635))))));
            }
            var_31 = ((~(arr_39 [i_1] [i_2])));
        }
        var_32 += ((((91 ? var_10 : var_6)) * 161));
        arr_47 [i_1] = (((((~27591) + 2147483647)) >> (var_5 + 26060)));
        arr_48 [5] = (((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (!var_7)));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                {
                    var_33 = ((((-31270 ? 12288 : (arr_15 [i_13] [i_14] [i_14] [i_15 + 2]))) >> (((arr_15 [i_13] [i_13] [i_15] [i_15 + 2]) - 115))));
                    var_34 *= (((((-(arr_2 [22]))) + (((arr_50 [i_14 + 1]) + var_11)))));
                }
            }
        }
        var_35 = (((((((max(206, (arr_51 [3] [i_13] [1])))) ? (((arr_49 [i_13] [i_13]) ? (arr_0 [i_13] [8]) : var_5)) : -28468))) ? 11557 : var_10));

        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            arr_58 [i_13] = (max(var_9, (((arr_4 [i_16]) ? 23836 : var_11))));

            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_36 = arr_5 [i_17] [i_16];
                var_37 = ((var_0 ? (arr_31 [i_17] [i_13] [i_16] [i_13] [i_13]) : (((max((arr_14 [i_13] [i_17]), var_6))))));
                arr_62 [i_13] [i_16] [i_13] [i_13] = (min((arr_19 [i_13] [i_16] [i_17]), (min((arr_5 [i_17] [i_16]), var_1))));
            }
        }
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            var_38 = (min((min((235 | var_8), 30889)), (~-1)));
            var_39 = (min(22423, (((arr_11 [i_13] [i_13] [i_13] [i_18] [i_13]) ? ((var_7 ? var_9 : 56387)) : (arr_13 [i_18] [i_18] [16] [i_13] [i_13] [i_13])))));
        }
    }
    #pragma endscop
}
