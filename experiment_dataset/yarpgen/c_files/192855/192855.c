/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] &= (arr_0 [i_0]);
        arr_4 [i_0] = ((~(min((((~(arr_2 [i_0] [8])))), (var_1 + var_14)))));
        arr_5 [i_0] [1] = (arr_1 [6] [i_0]);
        var_15 ^= ((4733359940541809023 ? -656887341 : 15475));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 = (max((arr_6 [i_1]), ((1682848885347634642 ? (arr_0 [i_1]) : (min(var_7, (arr_7 [7])))))));
        var_17 = (max(var_17, (arr_7 [i_1])));
        var_18 ^= (arr_6 [i_1]);
        var_19 = (arr_7 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_20 = (((~1408743108748881709) || 2940110533368468881));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_21 *= (arr_11 [i_4]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (arr_0 [0]);
                            var_23 = ((((var_4 ? (arr_14 [i_5] [i_2] [i_2]) : (arr_2 [i_6] [8])))) ? (arr_20 [i_2] [i_3] [6] [i_5] [0] [i_5] [8]) : (arr_7 [i_2]));
                            var_24 = (arr_2 [i_2] [i_3]);
                        }
                    }
                }
            }

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_25 [i_2] [i_2] = (arr_18 [i_7 - 2] [i_3]);
                    var_25 ^= ((~(arr_9 [i_2] [i_3])));
                    var_26 = (arr_19 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_3]);
                    var_27 &= (arr_19 [i_7 - 1] [5] [i_7 + 1] [5]);
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_28 = (((arr_26 [i_7 + 1] [i_10] [i_10 + 1] [i_10]) ? (arr_17 [i_7 - 1] [i_7 - 1] [i_10 - 1] [i_10 + 1]) : (arr_26 [4] [4] [i_10 - 1] [i_10])));
                        var_29 = (min(var_29, ((((arr_11 [i_7 - 1]) + var_6)))));
                        var_30 = (max(var_30, 11048));
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_2] [i_11] [i_9] [9] = (arr_29 [i_11] [i_3] [i_3] [i_3] [0] [i_3]);
                        arr_36 [i_2] [i_3] [i_7] [i_11] [i_11] = ((~(arr_2 [i_7 + 1] [i_11 + 1])));
                    }

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_31 = (!-49519164);
                        var_32 = ((((var_14 / (arr_0 [i_2]))) >= (arr_22 [i_7] [i_7 + 1] [i_7] [i_7 + 1])));
                        arr_39 [1] [i_12] [3] [i_7] [i_3] [1] [1] = (arr_22 [i_2] [i_2] [i_2] [i_9]);
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_33 ^= (arr_34 [i_2] [i_3] [i_2] [i_9] [0] [i_2] [i_3]);
                        var_34 = (((arr_20 [i_2] [i_3] [i_3] [i_7] [i_9] [i_13] [i_13]) ? (arr_20 [i_2] [i_9] [i_9] [3] [10] [i_2] [i_2]) : var_13));
                    }
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_35 = (!-59719);

                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_36 = ((!(arr_31 [i_7 - 1] [i_14] [i_7 - 1] [i_7 - 1] [8])));
                        var_37 = (arr_24 [i_7] [i_7] [i_7 - 1] [i_7]);
                        arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_0 [i_14]);
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        var_38 += (((arr_8 [i_7 + 1] [i_7 - 1]) > (arr_8 [i_7 - 1] [i_7 - 1])));
                        var_39 = (~(arr_21 [i_7 - 1] [i_7] [i_7] [3]));
                        var_40 = (arr_43 [i_2] [i_2] [i_3] [i_2] [6] [i_16]);
                        var_41 |= (!var_4);
                    }
                    var_42 = (((arr_48 [i_2] [i_3] [i_7 - 1] [i_14] [i_2] [i_7]) / -1682848885347634625));
                }
                var_43 = 1682848885347634642;
                var_44 = (((arr_46 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_43 [i_7 + 1] [i_3] [i_2] [i_2] [i_2] [i_2]) : 3365689482764589848));
            }

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_45 = var_3;
                var_46 = (arr_41 [i_17] [1] [i_17] [i_3] [i_2] [i_2]);
            }
        }
    }
    var_47 = (min(var_7, var_8));
    #pragma endscop
}
