/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (arr_2 [i_1] [i_0]);
            arr_6 [i_1] [10] &= (((arr_5 [i_0]) || (arr_5 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = ((arr_7 [i_0] [i_1] [i_2 + 1]) || ((!(arr_0 [i_2 - 2]))));
                        var_21 = (min(var_21, (arr_7 [i_0] [i_1] [i_2])));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_13 [i_0] [i_4] [i_4] = var_2;

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_22 = (((arr_9 [i_0] [i_0] [i_4 - 1]) ? ((var_14 ? (arr_9 [i_0] [i_0] [i_4]) : (arr_5 [i_0]))) : 1));
                    var_23 = ((-(arr_14 [i_0] [i_4] [i_4] [i_5])));
                    var_24 = (!(arr_11 [i_4 - 1] [i_1] [i_4] [i_5]));
                    var_25 = (min(var_25, (arr_3 [i_0])));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_18 [i_4] [i_4] [i_1] [i_4] = (((!var_13) ? var_11 : -65));

                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_4 - 1] [i_6] [i_4] [1] = (var_6 ^ -32745);
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = 1;
                        arr_24 [i_0] [i_1] [i_4] [i_6] [i_6] [i_4] = (arr_8 [i_0] [i_1] [i_4]);
                        arr_25 [i_4] [2] [i_4] [i_4] = var_8;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, ((((arr_9 [i_4 - 1] [i_4 - 1] [i_6]) > var_1)))));
                        arr_28 [i_4] [i_1] [i_4] [i_4] [i_4] = ((var_2 ? -32737 : var_16));
                        var_27 = (max(var_27, (((~((var_10 ? var_14 : 0)))))));
                        arr_29 [i_0] [i_1] [i_4] [i_0] [i_8] = (((arr_16 [i_4 - 1] [i_0] [i_0]) || (arr_16 [i_4 - 1] [i_1] [i_1])));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [i_4] [i_4] = 0;
                        var_28 = (((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1]) | (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        arr_33 [i_4] [20] = ((20622 ? ((3324409524 ? (arr_8 [i_0] [11] [i_4]) : var_8)) : (arr_26 [i_0] [i_0] [6] [i_4] [i_6] [i_0] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_4] [i_0] [i_6] [i_10] [i_10] &= (arr_4 [i_6] [i_4 - 1]);
                        arr_37 [i_0] [i_1] [i_4] [i_6] [i_10] &= (((arr_16 [i_4] [i_0] [i_0]) ? (arr_16 [i_6] [i_1] [i_1]) : (arr_16 [i_1] [i_4] [i_10])));
                        arr_38 [1] [i_6] [i_4] [i_1] [7] = (-29 || 30822155);
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 = (((arr_31 [i_4 - 1] [i_4 - 1] [4]) / var_8));
                        var_30 = (var_17 ? (arr_41 [i_1] [2] [i_1] [i_4 - 1] [i_4 - 1]) : (((arr_30 [i_0] [i_0] [i_4] [i_4] [i_11]) * (arr_12 [i_11]))));
                        var_31 = var_15;
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        arr_45 [i_1] [i_1] [i_4] [i_6] [i_0] &= var_10;
                        var_32 = 0;
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_48 [i_1] [15] [i_4] = 101;
                        var_33 = (arr_15 [i_4] [i_4]);
                        var_34 = (min(var_34, (81029158 >> 29)));
                    }
                    var_35 &= (((arr_4 [i_1] [i_0]) << 1));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_51 [i_0] [i_4] [i_4 - 1] [0] = var_1;
                    var_36 = (min(var_36, (((14221765649560562684 ? -7640703288879033188 : 203)))));
                }
            }

            for (int i_15 = 4; i_15 < 19;i_15 += 1)
            {
                arr_54 [i_15 - 4] = 739420977;

                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    arr_58 [i_0] [0] [i_15] [i_16] = var_16;
                    var_37 &= (((arr_40 [i_0] [i_1] [i_15 - 1] [i_15] [i_16]) | (arr_40 [i_0] [i_0] [i_15 + 2] [i_16 + 1] [4])));
                    arr_59 [i_0] [i_0] [i_15] [i_16] [i_16] = (arr_41 [i_0] [i_0] [i_1] [i_15] [i_0]);
                    var_38 = (min(var_38, var_10));
                    var_39 = (max(var_39, (((26044 | (arr_12 [i_16 + 1]))))));
                }
            }
        }

        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_64 [i_0] = (((arr_31 [i_0] [i_17] [i_17]) ? (arr_14 [i_0] [i_0] [i_0] [i_17]) : 631826941));
            arr_65 [0] = (((arr_10 [i_0]) / (arr_10 [i_0])));

            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_40 = (arr_26 [i_0] [i_17] [i_18] [18] [i_20] [7] [i_19]);
                            arr_73 [i_20] = (((arr_19 [i_20 + 1]) < (arr_8 [i_20 + 1] [i_20 - 1] [i_20 - 1])));
                            var_41 = ((arr_70 [2] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20]) ? (arr_52 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 - 1]) : (((arr_50 [i_0] [i_19] [i_20] [i_20] [i_0] [i_0]) ? var_6 : 25056)));
                            var_42 = (!1);
                        }
                    }
                }
                var_43 = (((arr_39 [i_0] [i_0] [4] [i_0]) ? var_16 : ((((arr_47 [i_0] [i_18] [i_17] [i_17] [i_0]) ? (arr_62 [i_0] [i_0] [i_18]) : (arr_5 [i_17]))))));
            }
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
        {
            var_44 = (min(var_44, ((((arr_39 [i_21] [i_0] [i_0] [i_21]) | var_1)))));
            var_45 = 43532;
            arr_77 [i_0] [i_0] [i_0] = ((((((arr_34 [i_0] [i_0] [i_0] [i_21] [i_21]) ? var_11 : var_1))) ? (arr_27 [i_0] [i_21] [i_21] [i_0] [i_21] [i_0]) : (((arr_30 [i_0] [i_0] [0] [i_21] [i_21]) ? (arr_27 [i_21] [i_21] [i_0] [i_0] [i_21] [i_0]) : -47))));
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
        {
            var_46 = (!264241152);
            arr_82 [i_0] [i_0] = (arr_1 [i_22] [i_22]);
            arr_83 [i_22] &= ((((1 && (arr_42 [i_0] [i_0] [i_0] [i_22]))) ? var_9 : (arr_1 [i_0] [i_22])));
        }
        arr_84 [i_0] = var_0;
    }
    var_47 = ((max((234 / -32745), -122)));
    var_48 &= ((var_8 ? (max(1241335297, 52)) : (((((min(var_6, -20)))) * (var_12 / var_4)))));
    var_49 = var_14;
    #pragma endscop
}
