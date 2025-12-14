/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((!(arr_4 [i_1] [i_1] [i_2])));
                    arr_9 [1] [i_1] [14] [i_1] = (~50952);
                }
            }
        }
        var_15 = var_5;

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_16 *= (max(-29162, ((2147483647 ? 0 : 4))));
            arr_13 [i_3] [i_3] = 101;
            var_17 -= (arr_4 [6] [4] [6]);
            var_18 -= var_5;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_19 *= var_1;
        var_20 = (min(var_20, (~var_4)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_21 *= ((-((240 ? 938046457 : 1))));
            arr_21 [i_6 + 2] [i_5] = ((0 ? (arr_19 [0] [i_6 - 2] [i_6 + 3]) : (arr_6 [i_6 + 2] [i_6 - 1])));
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_7] [2] = 1461951434;
            arr_25 [i_7] [1] = ((-36 ? 26475 : 1545939794));
            arr_26 [i_5] [i_7] = (((((arr_18 [i_7 - 2] [i_7 - 1]) ? var_13 : -8749))) ? ((-(!47))) : 1);
            var_22 = (((!-119) ? 1 : (arr_23 [i_5])));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_23 = ((~(arr_16 [i_5])));
                        arr_34 [i_9] [i_10] [12] [5] [i_8] [i_9] = ((!(~164098237)));
                        var_24 = var_13;

                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_25 = ((-853776543 ? ((((arr_20 [i_11] [i_8] [i_5]) ? var_8 : var_2))) : ((62 ? -287778673 : 4294967295))));
                            arr_38 [i_5] [i_8] [i_9] [i_9] [i_11] = -1542062614;
                            arr_39 [i_9] [i_8] = (arr_17 [3]);
                            var_26 -= (((arr_3 [13] [i_11]) ? ((((((var_0 ? 16931 : 76))) ? -833038023 : -2641))) : var_11));
                            arr_40 [i_5] [i_8] [i_9] [i_10] [i_11] = var_4;
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_27 -= var_5;
                            var_28 = 95;
                            arr_44 [i_9] = (((((16 ? 115 : 6345705561029067982))) ? 1 : (~var_5)));
                        }
                        var_29 *= (((((-(arr_42 [i_5] [i_8] [i_8] [i_8] [i_9] [i_9] [i_10])))) ? var_6 : (arr_33 [i_10] [i_10] [i_9] [8])));
                    }
                }
            }

            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_47 [i_5] [i_8] [i_13] = 8388607;
                var_30 = (((((-(arr_20 [19] [i_5] [i_5])))) ? var_5 : (arr_22 [i_5] [i_5])));

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_31 -= (max(144, 2580549395));
                    var_32 = 26;
                }
                var_33 = var_10;
                var_34 = 1581938024;
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_35 = var_1;

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_36 = ((var_9 ? (((-((~(arr_5 [i_5])))))) : (((arr_37 [i_5] [16] [i_15] [i_5] [i_5] [16] [i_5]) ? var_3 : 737227550))));
                        arr_57 [i_5] [i_8] [i_15] [i_16] [i_8] |= (((~896) ? (arr_28 [i_17] [i_8]) : ((var_13 ? 4294967295 : (arr_28 [i_8] [i_8])))));
                        var_37 = (min(var_37, 156));
                        var_38 *= var_6;
                    }
                }
                var_39 = ((((((arr_20 [i_5] [i_5] [i_5]) ? var_0 : (arr_20 [i_5] [i_5] [1])))) ? -6885027732127175851 : (((var_0 ? ((var_5 ? var_0 : (arr_46 [i_5] [3]))) : ((0 ? 1 : 64448)))))));
                var_40 = 12408709353181732592;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            arr_63 [i_18] [i_8] [i_15] [i_8] [i_15] = (arr_45 [i_15] [i_18 - 1]);
                            arr_64 [i_15] [i_8] [i_15] [5] [i_19] = (((--126) ? (arr_60 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_19] [i_19] [i_19]) : (~var_6)));
                        }
                    }
                }
                var_41 = (arr_61 [i_5] [i_15]);
            }
            var_42 = (min(var_42, ((((((0 ? 2147483647 : var_2))) ? (arr_4 [i_8] [i_8] [i_8]) : (!225))))));
        }
        var_43 = ((!(((-(arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        arr_65 [i_5] [i_5] = (min(((var_6 ? var_9 : var_9)), ((-30731 ? -563231821 : var_0))));
        arr_66 [i_5] = var_5;
    }
    var_44 = 59;
    var_45 = 65;
    #pragma endscop
}
