/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(1, (min(var_10, var_2))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (((max((arr_7 [i_2] [i_3]), ((!(arr_8 [i_0] [i_1] [i_2] [i_3] [1] [i_3]))))) ? (arr_5 [i_0] [i_1] [i_0]) : (((!(arr_3 [i_3] [i_2] [i_0]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] = arr_5 [i_0] [i_0] [i_0];
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] [i_0] = arr_2 [i_1];
                        var_21 = (~1);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 -= var_2;
                            var_23 = (max(var_23, (((~(arr_3 [i_5] [i_0] [i_0]))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_7] [1] [1] [1] [i_0] &= arr_13 [i_0];
                            var_24 = (min(var_24, -1));
                            arr_24 [i_0] [i_6] [i_2] [i_0] [i_0] = (!1);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 -= (((min(1, 1)) ? ((-(arr_22 [0] [i_1]))) : (arr_22 [0] [0])));
                            arr_28 [i_8] [i_0] [1] [i_0] [1] = ((-(((((~(arr_11 [0])))) ? (arr_25 [1] [i_6] [i_0] [i_1] [i_0]) : (arr_17 [i_8] [i_1] [i_0])))));
                            var_26 = ((+(((min((arr_2 [1]), var_1)) ? ((min(1, (arr_15 [i_0] [i_1] [i_1] [i_8] [i_0] [1])))) : ((max(1, (arr_0 [i_0] [i_0]))))))));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_27 = max((arr_11 [i_1]), (arr_19 [1] [1] [i_0] [i_6] [i_9]));
                            var_28 = (min(((max((arr_18 [i_0] [i_1] [i_2] [1] [i_9]), (arr_9 [i_9 - 1] [1] [i_9 - 1] [i_6] [i_9] [i_9])))), (~var_14)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_0] [1] [i_0] = arr_26 [i_0] [i_1] [i_2];
                            var_29 += arr_19 [i_0] [i_0] [1] [i_0] [i_0];
                        }
                        var_30 = arr_17 [1] [1] [1];
                        arr_37 [i_0] [i_0] [i_0] [i_0] = ((var_8 ? ((max(var_4, (max((arr_8 [i_0] [i_1] [i_2] [1] [i_1] [i_6]), (arr_1 [1])))))) : (arr_26 [i_0] [i_0] [i_2])));
                        var_31 = (((arr_0 [i_0] [i_1]) ? var_12 : (min(((1 ? (arr_35 [i_0] [i_0] [i_0] [1] [1]) : var_6)), (arr_9 [i_0] [1] [i_0] [i_0] [i_0] [1])))));
                        var_32 = arr_17 [i_1] [i_1] [1];
                    }
                    var_33 = (max(var_33, (min((arr_0 [i_1] [i_1]), (max((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_2])))))));

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_34 &= arr_39 [i_11];
                        arr_40 [i_0] = (min((arr_18 [1] [i_1] [i_0] [i_1] [i_1]), (((~1) ? var_7 : (arr_20 [i_0] [i_0])))));
                        var_35 = arr_25 [i_0] [i_0] [i_1] [i_2] [0];
                        var_36 = (~var_3);
                        var_37 &= ((var_16 ? ((((var_1 > (arr_18 [i_11] [i_2] [i_1] [i_0] [i_0]))))) : 1));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_38 = (((arr_17 [1] [i_1] [i_0]) - (((arr_9 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) ? (arr_17 [i_12] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_2] [i_12] [i_0])))));
                        var_39 = (max(((max((arr_41 [i_0] [i_1] [i_2] [i_12]), var_8))), -var_13));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_40 = arr_18 [i_13] [i_0] [i_0] [i_0] [i_0];
            var_41 -= ((~(arr_6 [i_0] [i_0])));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_42 = (max(var_4, (~1)));
                var_43 = ((-(1 >= 1)));
            }
            var_44 = (max(var_44, ((max((((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_1 [i_14]))), (arr_31 [i_0] [i_14] [i_14] [i_0] [i_14] [i_14]))))));
            var_45 = (!((min(((1 ? (arr_2 [i_0]) : var_9)), (arr_42 [i_14] [i_0] [i_14] [i_14] [i_0])))));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_46 = arr_26 [i_0] [1] [i_0];
            var_47 *= (((min(var_14, (arr_5 [i_0] [1] [1]))) ? (((arr_26 [i_0] [i_16] [1]) ? var_10 : 1)) : ((min((max(var_14, 1)), (arr_1 [i_16]))))));
            var_48 = (min(1, 1));
            var_49 = (max(var_49, 1));
        }
        var_50 = ((-(arr_5 [i_0] [i_0] [i_0])));
        var_51 *= (max((max(((~(arr_5 [i_0] [i_0] [1]))), var_15)), var_7));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_52 -= max(1, 0);
        var_53 -= 1;
        var_54 = var_3;
        arr_59 [i_17] = (max((min(var_11, ((-(arr_0 [i_17] [i_17]))))), var_3));
    }
    #pragma endscop
}
