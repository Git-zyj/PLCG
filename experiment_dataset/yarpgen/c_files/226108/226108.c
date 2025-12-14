/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = 12305;
        arr_3 [21] = var_11;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_9 [i_1] = ((var_10 ? 64166 : (~64166)));
                arr_10 [i_0] [i_1] = 64166;
                arr_11 [i_1] [i_1] [i_1] = var_2;
                var_17 = (((((1369 ^ (arr_0 [i_0])))) ? (arr_4 [i_0] [i_1]) : (((arr_0 [i_1]) ? 1369 : 1369))));
            }

            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_17 [i_1] [i_1] = (((arr_14 [i_1]) * (arr_14 [i_1])));
                    var_18 = (1369 < var_1);
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_19 = var_3;
                        var_20 = ((var_15 / (((arr_7 [20] [i_1]) ? (arr_13 [i_0] [1]) : 1369))));
                        var_21 = ((!(arr_1 [i_5 + 2])));
                        arr_24 [i_0] [i_1] [i_1] [i_3 + 2] [i_5] [i_1] = 1369;
                    }
                    for (int i_7 = 4; i_7 < 24;i_7 += 1)
                    {
                        var_22 = 64167;
                        arr_28 [i_0] [i_1] [i_1] [i_0] [3] = ((var_8 + ((1379 ? var_1 : var_12))));
                    }
                    arr_29 [i_1] [i_3 + 2] = var_7;
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_3 - 3] [i_8] [i_1] = (((1369 > var_10) <= (((arr_5 [i_1] [i_1]) ? 64166 : 64167))));
                    var_23 = (((arr_8 [i_3 - 1] [i_8 + 2]) ? var_12 : (arr_2 [1])));
                    arr_33 [i_0] [i_1] [i_0] [i_0] = (arr_14 [i_1]);
                }
                for (int i_9 = 4; i_9 < 24;i_9 += 1)
                {
                    var_24 = (((arr_21 [i_9] [i_9] [i_9] [i_3 + 1] [i_0]) - (arr_21 [i_3] [i_3] [i_3 - 2] [i_3 - 3] [i_1])));

                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        arr_40 [3] [i_1] [i_1] [i_3] [i_9 - 3] [i_1] = (arr_15 [i_1] [13] [i_9] [i_10 + 1]);
                        var_25 = (arr_20 [i_1] [i_10]);
                    }
                }
                arr_41 [i_0] [i_1] = (((arr_36 [i_3 - 3] [i_3 - 3] [i_1] [i_0]) ? 64167 : (arr_36 [i_3 - 3] [i_3] [i_3 + 1] [i_3])));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_26 = var_6;
                arr_45 [i_1] [i_1] [i_1] = (!64167);
            }
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                arr_48 [i_0] [i_1] [i_12 - 2] = (var_9 || var_2);
                arr_49 [i_0] [i_1] [6] = (arr_0 [24]);
            }
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                arr_53 [i_0] [i_0] [i_1] [i_1] = (((arr_25 [i_1] [i_13 - 2] [i_13 - 1] [i_13 - 2]) ? (arr_25 [i_1] [i_13 - 2] [i_13 - 2] [i_13 - 2]) : var_3));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            arr_61 [i_1] = (!var_4);
                            var_27 = (((var_14 / (arr_47 [i_14] [i_1] [i_1]))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        arr_67 [i_1] = 64167;

                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            arr_70 [i_0] [i_0] [i_16] [i_1] [i_18] [i_0] = (arr_0 [i_16 - 2]);
                            arr_71 [i_0] [i_17] [i_1] [i_17] = (((arr_25 [22] [17] [i_16 - 2] [i_16 + 1]) ? 1369 : 1369));
                            var_28 = var_12;
                            var_29 = (arr_65 [1] [i_17] [9] [i_1] [1] [i_0]);
                            arr_72 [i_0] [i_1] [1] [i_17] [i_1] = ((((((arr_14 [i_1]) ? (arr_19 [i_17] [i_16 - 1] [i_1] [i_0]) : 1369))) ? 64167 : ((var_4 ? var_8 : (arr_26 [10] [i_1] [i_0])))));
                        }
                        for (int i_19 = 1; i_19 < 24;i_19 += 1)
                        {
                            var_30 = 1357;
                            arr_75 [i_1] [i_1] = (64167 < 64166);
                        }
                    }
                }
            }
        }
        var_31 = (((((64166 != (arr_68 [i_0])))) / (arr_22 [i_0] [i_0] [8])));
    }
    var_32 = (max(((1369 >> (64166 && var_6))), (((!var_11) ? var_5 : 1368))));

    /* vectorizable */
    for (int i_20 = 2; i_20 < 17;i_20 += 1)
    {
        arr_80 [i_20] = ((-(arr_64 [i_20] [i_20] [i_20] [i_20] [i_20 - 1] [i_20 + 1])));
        arr_81 [i_20] [i_20] = (((arr_14 [i_20]) * (arr_78 [i_20 + 1])));
    }
    for (int i_21 = 2; i_21 < 21;i_21 += 1)
    {
        arr_84 [17] [i_21] = var_3;
        var_33 = (arr_0 [i_21]);
    }
    #pragma endscop
}
