/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_20 = (arr_2 [i_0] [i_4]);
                            var_21 = (((!0) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1]) : -29089));
                            var_22 += (((((18937 || (arr_5 [i_0] [1] [i_3] [i_4])))) >> (-8971795680476476245 + 8971795680476476266)));
                        }
                    }
                }
            }
            var_23 -= (arr_2 [i_0] [i_0]);

            for (int i_5 = 2; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_24 = (~(arr_12 [15] [i_5] [i_5 - 2]));
                arr_13 [i_0] [i_0] [i_0] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_18 [i_7] = ((7526298950149935993 / (arr_4 [i_7] [i_1] [i_1] [i_1])));
                            arr_19 [i_0] [i_0] [i_5] [i_6] [i_7] = arr_16 [i_0] [1] [i_0] [18] [i_7] [i_0];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_25 [i_9] [i_8] [i_5] [i_1] = (arr_22 [i_0] [i_0] [i_0] [9] [i_9] [i_9] [i_9]);
                            arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (--18938);
                            var_25 = var_12;
                        }
                    }
                }
            }
            for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_34 [i_11] = -var_6;
                            arr_35 [i_0] [i_1] [i_11] = ((var_11 || (var_0 * 0)));
                            var_26 = (((arr_5 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]) - var_1));
                        }
                    }
                }
                var_27 -= 210;
                arr_36 [i_0] [i_1] [i_10 - 2] [17] = ((((((arr_15 [i_0]) || var_16))) + var_4));
            }
            var_28 = 18938;
        }
        arr_37 [i_0] [6] = (!var_3);
    }
    for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_29 = (var_0 || var_17);
                        var_30 = (min(var_30, 18956));
                        var_31 = ((((min(10, ((var_10 ? (arr_45 [i_14] [i_14] [i_14] [i_14]) : 248))))) ? (((-(arr_27 [i_16] [i_15] [i_14])))) : (((((arr_43 [i_13] [i_13]) ? -1113514561985088583 : var_19))))));
                        var_32 = (max(var_32, ((min(((1 ? 18446744073709551615 : (arr_32 [i_13 - 2]))), var_3)))));
                        arr_47 [i_14] [i_14] = (((((!(arr_15 [i_13]))))));
                    }
                    var_33 = 0;
                    var_34 = 1572981388;
                }
            }
        }
        arr_48 [i_13] [i_13] = ((18446744073709551615 ? (arr_30 [i_13 - 3] [i_13] [i_13] [i_13] [i_13 - 3] [i_13]) : (arr_42 [i_13] [i_13] [i_13 - 3])));
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    var_35 = (max(var_35, ((min(((min((arr_9 [i_13] [i_13] [i_13] [i_13 + 1] [i_18]), (arr_39 [i_13 + 1])))), (((arr_22 [i_17 + 1] [i_17 + 1] [i_17] [i_17] [i_17] [i_17] [i_17]) & ((min(var_1, var_19))))))))));
                    arr_53 [i_13 - 2] [i_13 - 2] [i_13 - 2] [20] = (((-(arr_1 [i_13 + 1]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 4; i_19 < 21;i_19 += 1) /* same iter space */
    {
        var_36 = 1;

        for (int i_20 = 0; i_20 < 0;i_20 += 1)
        {
            var_37 = (((arr_31 [i_20 + 1]) ? (arr_31 [i_20 + 1]) : (arr_23 [i_19 - 4] [i_19 - 3] [i_19 - 1] [i_19 - 3] [i_19 - 2])));
            arr_59 [i_20] [i_20] [i_20] = (((((var_15 ? var_3 : 3522740181))) ^ var_14));
            var_38 = var_3;
        }
    }
    var_39 = var_15;
    #pragma endscop
}
