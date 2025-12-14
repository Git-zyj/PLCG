/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((-9223372036854775807 - 1) ? (arr_2 [i_0]) : var_6))) ? ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) : ((7904536150825970558 ? 1560526736 : 9223372036854775807))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_19 = arr_9 [i_1] [i_4];
                            var_20 = 380048926;
                        }
                    }
                }
            }
            var_21 = (~var_6);
            var_22 = var_14;
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            arr_18 [i_0] [i_5] [i_5] = (~(~9223372036854775808));
            var_23 = 35;
            var_24 = 10;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_26 [i_0] [i_6] [i_0] = (-9223372036854775807 - 1);

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] [i_9] = (arr_11 [i_6] [i_7] [i_8] [i_9]);
                            var_25 = 8;
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            var_26 = (max(var_26, ((max(10542207922883581057, 3914918370)))));
            arr_34 [i_10] [i_11] = (((((max(var_10, var_12)))) ? var_10 : (((((var_17 ? 380048915 : var_16))) ? var_0 : (((1 ? var_2 : var_12)))))));
        }
        for (int i_12 = 3; i_12 < 23;i_12 += 1)
        {
            arr_37 [i_10] &= (max(380048907, 9223372036854775807));

            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                var_27 = ((var_6 ? (((!35) / (arr_17 [i_13] [i_12] [i_13]))) : (((var_11 ? (((arr_21 [i_13]) / var_14)) : 0)))));
                var_28 = -65535;
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_29 = (!((min((arr_13 [i_14] [i_12] [i_14] [i_14] [i_12] [i_12] [i_12]), (((arr_2 [i_14]) ? 517165729 : var_11))))));
                arr_44 [i_10] [i_10] [i_10] = (max(1, (((!380048925) ? (952814693 ^ 74) : (((arr_16 [i_14]) ? (arr_7 [i_10] [i_10] [i_12] [i_14]) : 4052631299352472180))))));
                var_30 = (max(var_30, ((min(380048926, -36)))));
                arr_45 [i_12] [i_14] = -176;
            }
            var_31 = min(((~(arr_20 [i_12 - 3]))), (((arr_20 [i_12 + 2]) ? (arr_27 [i_12] [i_12] [i_12] [14] [i_12 - 1] [i_12 + 2] [i_12 - 1]) : (arr_20 [i_12 - 1]))));
            arr_46 [i_10] [i_10] [i_12] = ((1 ? 0 : 74));
        }
        var_32 = ((((3777801567 ? (3914918370 * 3342152603) : -4096)) >= (((-(1490264721 < 517165729))))));
    }
    var_33 = ((((var_11 ? var_18 : var_6))));
    #pragma endscop
}
