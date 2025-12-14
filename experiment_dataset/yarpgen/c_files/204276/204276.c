/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3 - 2] = (((((((arr_8 [i_0] [i_0] [i_0] [i_0]) * var_8))) ? var_15 : (var_3 >= var_5))));
                        var_18 = var_3;
                        arr_11 [i_0] [i_1] [1] [i_0] [i_2 - 1] [i_0] = (max((max((arr_0 [i_0] [i_0]), (~var_3))), (-22296 + 28006)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            var_19 = 14428;
            var_20 = (arr_13 [i_0]);
            arr_16 [7] [i_0] = ((~(((!(arr_14 [i_0] [i_4 - 3]))))));
            var_21 = -1;
            var_22 = var_7;
        }
        var_23 |= (((-28023 / 27997) - ((((min(var_4, var_3))) ? (((!(arr_2 [10])))) : (arr_13 [i_0])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 ^= ((max((min(var_9, (arr_13 [i_0])), -2995120028951423043))));
                        arr_25 [i_0] = ((~((max((arr_1 [i_5] [i_6]), (arr_1 [i_0] [i_6]))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_25 = ((((28 << (16383 - 16370))) + (-1 - -1)));
                            var_26 ^= arr_4 [i_8];
                            var_27 = (arr_1 [i_5] [i_0]);
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_30 [i_6] [i_5] [i_6] [i_7] [i_0] [i_7] [i_0] = (((min(11207620821732709117, -28006)) > var_1));
                            var_28 = (min(((var_13 ? (((arr_26 [i_0]) & 5496987738242506675)) : (((max(14882, (arr_7 [i_0] [i_0] [i_6] [i_0]))))))), var_12));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_34 [i_0] = arr_4 [i_0];
                            arr_35 [i_0] [i_0] [i_6] [i_0] [i_0] = var_14;
                            arr_36 [i_0] [i_6] [i_0] [i_0] = (max(((var_1 / (arr_22 [i_0] [i_0] [i_0] [3]))), (((arr_22 [i_10] [i_7] [i_6] [i_5]) * (arr_22 [i_10] [i_7] [i_5] [i_0])))));
                            arr_37 [i_0] [i_5] [i_6] [i_0] [i_5] = var_4;
                        }
                        var_29 *= (max(((-16383 ? (arr_28 [i_5]) : (arr_22 [i_0] [i_5] [i_6] [i_7]))), (((-8112 >= -16365) ? -var_14 : (min(-28213, (arr_28 [i_7])))))));
                        var_30 = (max(((-61 ? var_8 : var_11)), ((max((arr_21 [i_0]), (arr_21 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_31 = ((-71 ? 9919384393314747201 : 16383));
                        arr_41 [i_11] [i_0] [i_5] [i_0] [i_0] = ((var_7 ? var_16 : (arr_23 [i_0] [i_5] [i_11] [10] [i_0] [10])));
                    }
                    arr_42 [i_6] [i_0] [i_0] = ((max((arr_7 [2] [2] [2] [i_6]), -28035)));

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_32 ^= (arr_39 [i_5] [3] [i_6] [i_12 - 1]);
                        var_33 = (arr_4 [i_12 + 1]);
                        var_34 = (((arr_22 [i_0] [i_0] [i_0] [i_0]) ? (((arr_46 [i_0] [i_0] [i_6] [i_0]) | var_2)) : (((16395 ? (arr_29 [i_0] [i_5] [10] [2] [i_12]) : (arr_7 [i_0] [i_12 - 1] [i_0] [i_0]))))));

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_35 = ((~((-(arr_15 [6])))));
                            var_36 = (((arr_39 [i_0] [i_5] [i_6] [i_13]) ? var_17 : (arr_47 [i_5] [i_5] [i_0] [i_12 - 1] [5] [i_13] [i_13])));
                            arr_50 [i_0] [i_5] [i_0] [i_12] [i_5] [i_0] = ((-512 ? ((19813 ? (arr_4 [i_0]) : -16364)) : ((((arr_28 [i_0]) >= var_12)))));
                            arr_51 [i_12] [i_0] = -28006;
                        }
                    }
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        var_37 = (max((max((arr_23 [i_14] [i_14 + 2] [i_6] [i_6] [i_6] [i_0]), (arr_2 [i_0]))), ((-(arr_33 [i_14])))));
                        arr_54 [i_5] [i_0] = (~0);
                        var_38 = (min((arr_40 [i_0] [i_0]), (min(var_7, (arr_38 [i_0] [i_5] [i_0])))));
                    }
                    arr_55 [6] [i_0] [i_0] [i_0] = ((~(((arr_13 [i_5]) / (arr_33 [i_0])))));
                }
            }
        }
    }
    var_39 = (min(var_8, -30684));
    var_40 += (max(((((!var_14) && ((max(-25926, var_0)))))), (min((!var_15), (var_12 + var_14)))));
    var_41 = (~77);
    #pragma endscop
}
