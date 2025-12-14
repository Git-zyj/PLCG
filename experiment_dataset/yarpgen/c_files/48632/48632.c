/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_17 = (min(((((min(8272576881287004752, var_15))) ? ((var_13 ? (arr_3 [i_0] [i_1]) : 1)) : (min((arr_1 [i_0]), 1)))), (~2147483625)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] = var_15;
                                var_18 = (arr_1 [i_0]);
                            }
                        }
                    }
                    var_19 = (max(var_19, -8272576881287004772));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_20 = (((~var_4) ? (arr_3 [i_0] [i_0]) : 1));
                        arr_16 [i_0] [i_0] = (max((((-(!var_5)))), ((((((arr_5 [i_0] [i_0] [i_0] [1]) ? 1 : var_15))) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_5] [i_5] [i_2] [i_1] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (arr_2 [i_2] [i_1] [i_0]);

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_22 += ((((~(max(8272576881287004778, (arr_3 [i_0] [13]))))) / ((((arr_12 [i_0] [i_2] [i_2] [i_0]) ? ((((arr_6 [i_1]) && (arr_22 [7] [i_1] [i_0] [i_6] [i_2] [i_2 + 1])))) : (arr_15 [i_1] [3] [i_0] [1] [i_7]))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_0] [12] [i_0]) ? 14 : (min(var_5, 1))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_23 = (max(((((((arr_6 [i_6]) + 1))) ? (((((-32767 - 1) >= 16)))) : var_5)), (((-var_9 - (max((arr_8 [i_2] [i_2] [i_2 - 2] [i_2]), 2147483602)))))));
                            var_24 = (var_8 - (((((max((arr_15 [i_0] [i_1] [i_8] [i_6] [i_8]), 8796093022207))) && (((-116 ? var_14 : 59)))))));
                            var_25 = var_1;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_26 += 1;
                            var_27 = (min(((-(var_9 ^ var_14))), ((max((((var_3 || (arr_20 [i_0] [i_1] [i_0] [i_9])))), (arr_13 [i_0] [i_1] [i_6] [i_9]))))));
                            var_28 = ((((~(var_9 + 32683))) ^ (max(((((arr_4 [i_0] [i_2 + 1]) != var_12))), ((-(arr_21 [12] [i_0])))))));
                            var_29 = ((((max((!-99), ((-(arr_13 [i_9] [i_6] [i_1] [i_0])))))) ? ((((!((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_7 [i_2 + 1] [i_0] [i_2 - 1] [i_2])));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_30 += 1;
                            arr_32 [i_0] [12] [i_0] [i_0] [3] = (min((((!(var_12 <= var_3)))), ((((min(4503530907893760, var_3))) ? ((max(var_9, -4))) : ((~(arr_31 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_10])))))));
                        }
                        var_31 = var_5;
                        var_32 = ((((max(((30 * (arr_4 [i_0] [i_0]))), (arr_17 [i_0] [i_0] [2])))) & (max(((var_2 ? var_5 : (arr_27 [i_0] [i_1] [i_0] [i_6]))), ((max(var_12, (arr_18 [i_0] [12] [i_0] [i_0]))))))));
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    var_33 = (!((((!var_14) ? ((-(arr_5 [i_0] [i_0] [i_0] [1]))) : (var_0 << var_13)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_34 = ((((!(arr_9 [i_1] [i_12 + 1] [i_12] [i_13 - 1])))) > (arr_9 [i_11] [i_12 + 1] [i_13] [i_13 + 1]));
                                var_35 = (arr_4 [i_0] [i_1]);
                                var_36 = ((-(arr_36 [i_1])));
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_37 = ((!((max(12, -32759)))));
                                var_38 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                arr_55 [1] [i_17] [i_0] [i_1] [i_0] = var_11;
                                var_39 = ((~((((max((arr_17 [i_0] [i_0] [i_0]), 61945))) ? ((3968 ? 0 : var_11)) : var_6))));
                                var_40 = (max(((0 ? (arr_28 [i_0] [i_0] [6] [i_0] [i_0]) : var_9)), 21));
                                var_41 = (arr_35 [i_17 + 2] [i_17 + 4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_42 = ((((((6 / -32759) - 19))) / (max((arr_39 [i_14] [i_0] [i_0]), 16911433728))));
                                var_43 = -2075;
                                var_44 = (~-0);
                                var_45 = var_2;
                            }
                        }
                    }
                }
                for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
                {
                    var_46 = (min(var_46, var_15));
                    var_47 = (((max(40, (arr_29 [i_0] [i_0] [i_21] [13] [i_21]))) == ((((!((max((arr_26 [i_0] [i_1] [i_21] [9] [i_21] [i_0] [i_1]), var_8)))))))));
                }

                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    var_48 += var_0;
                    var_49 = (max((((arr_52 [i_0] [1] [i_22] [i_22] [1] [i_22] [i_22]) ? 9603229870226614414 : 148)), ((var_6 ? (max(var_5, var_14)) : 8782948426345809007))));
                }
                var_50 = (min((!87), var_5));
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        {
                            var_51 += (((arr_44 [i_0] [i_0] [5] [1] [i_0] [i_0]) ? 17442 : (arr_5 [i_24] [i_24] [i_24] [i_24])));
                            var_52 = (max(((max((arr_49 [1] [i_0] [i_23]), (arr_40 [i_23 + 1] [i_23] [i_0] [i_0] [i_23 - 1] [5])))), (max((arr_40 [i_23 - 1] [i_23] [i_0] [i_0] [i_23 + 1] [i_1]), -8362374371121585500))));
                            var_53 += (((((min(657415641236040560, var_2)) ? var_10 : ((max(var_0, (arr_50 [i_0] [i_1] [i_1] [1] [i_24]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
