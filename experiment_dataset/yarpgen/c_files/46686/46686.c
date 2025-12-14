/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((((arr_7 [i_2 + 4] [5] [i_1] [i_0 + 2]) ? var_7 : (arr_7 [i_0] [i_0 - 2] [14] [2]))));
                    var_15 = (min(var_15, ((((var_12 ? var_7 : var_8))))));
                    var_16 = (((~var_4) ? (arr_1 [i_0 + 1]) : (((arr_4 [i_1]) ? var_13 : var_10))));
                }
            }
        }
        var_17 = (((arr_3 [i_0] [i_0 + 1]) ? (((var_10 ? var_12 : var_7))) : -1));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = (max(var_18, var_0));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_19 = (max(var_19, var_13));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((~((var_13 ? var_10 : var_13)))))));
                            var_21 = (((12654866045662881891 ? (arr_5 [i_0] [0]) : var_1)) % var_5);
                            var_22 = -15403;
                        }
                    }
                }
                var_23 = (min(var_23, (((var_4 ? -var_8 : (((arr_2 [6]) ? var_0 : var_11)))))));
                var_24 = 58065;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_25 = (min(var_25, var_5));
                            var_26 = var_3;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {

                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    var_27 = (max(var_27, var_8));
                    var_28 = ((-86 ? -var_2 : (!var_13)));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_36 [i_11] [12] [i_10 - 1] [i_10 - 2] [i_3] = (((arr_23 [i_10] [i_10 - 1] [i_10] [i_10] [1] [4]) ? (arr_23 [i_3] [i_10 + 3] [i_11] [i_11] [i_11] [i_11]) : var_6));
                        arr_37 [14] [7] [i_9] [i_10] [i_9] = (var_9 ? (arr_20 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_10 - 1] [i_10 + 3] [i_10 + 3]) : (arr_20 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_10 - 2] [i_10 - 1] [i_10 + 2]));
                        var_29 ^= (((arr_12 [i_0 - 1] [i_3] [i_9]) ? var_5 : -var_0));
                        arr_38 [i_0] [i_0] [12] [i_3] [1] [i_10 - 1] [i_11] = var_12;
                    }
                    var_30 = var_11;
                    var_31 -= (arr_1 [i_0 + 1]);
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_32 |= (!107);
                    var_33 = var_8;

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_34 = (~1);
                        arr_45 [1] [i_3] [i_13] [i_12] [i_13 - 1] [i_0 + 3] = ((-46 ? var_13 : 15403));
                        var_35 = (((arr_33 [i_0] [i_3] [i_3] [i_9] [i_9] [i_13]) ? ((4294967295 ? 50133 : (arr_13 [4] [i_3] [14]))) : var_11));
                        arr_46 [i_0] [i_3] [i_9] [i_13] [7] = arr_4 [i_13];
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_36 = ((-var_8 ? var_10 : -var_10));
                        var_37 = (max(var_37, var_10));
                        var_38 = (!15422);
                    }
                }
                for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    arr_53 [i_15] [i_3] [i_3] [i_3] = ((!((var_6 || (arr_27 [i_0 - 1] [i_3] [i_0 - 1] [i_15])))));
                    var_39 = (min(var_39, var_10));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_40 = (arr_41 [i_0] [i_0 - 2] [7] [i_0 - 1] [i_0 - 2]);
                            var_41 = (min(var_41, (((((arr_28 [i_0] [i_0] [i_0]) ^ var_12))))));
                            var_42 = ((-(arr_3 [i_0 - 1] [i_0 + 1])));
                            var_43 = ((1 ? ((var_1 ? 0 : var_11)) : (~112)));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                var_44 = (min(var_44, (((var_13 ? ((var_10 ? 12 : 1)) : (var_8 > 1))))));
                /* LoopNest 2 */
                for (int i_19 = 3; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        {
                            arr_69 [i_18] [i_18] [i_20] [i_19] [i_20] [i_18] [i_0] = var_10;
                            var_45 = (((((var_12 ? var_6 : var_0))) || (((var_6 ? var_4 : 4176204399)))));
                        }
                    }
                }
                arr_70 [i_18] = var_3;
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        {
                            var_46 = ((((((arr_43 [i_3] [i_21] [i_3] [i_3] [i_3]) <= var_10))) % var_6));
                            arr_77 [i_0] [i_0] = 52694;
                            var_47 -= (arr_28 [i_0 + 2] [i_3] [i_3]);
                            arr_78 [i_23] [i_22] [i_21] [14] [i_0] [i_0] = var_0;
                            var_48 = 1374967632198665210;
                        }
                    }
                }
            }
            var_49 = (((((var_5 ? (arr_59 [i_0] [i_3] [i_3] [i_3] [15] [i_3]) : var_12))) && var_3));
        }
    }
    /* LoopNest 2 */
    for (int i_24 = 1; i_24 < 15;i_24 += 1)
    {
        for (int i_25 = 3; i_25 < 14;i_25 += 1)
        {
            {
                arr_85 [i_24] [i_24] [i_24] = (((!15266) ? (((min(61063, var_4)))) : ((0 ? -5972975558217055394 : (arr_83 [i_24 + 2] [i_24 + 1])))));
                /* LoopNest 3 */
                for (int i_26 = 2; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 17;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            {
                                var_50 = ((var_7 ? 14594683404224764120 : (arr_81 [i_26])));
                                var_51 = (max(var_51, var_3));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 17;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 17;i_31 += 1)
                        {
                            {
                                var_52 = ((((2161951488 ? 3001974701 : var_9)) % var_4));
                                var_53 = (min(var_53, ((((((var_13 ? ((var_3 ? 7797004297304489888 : var_7)) : (!13786)))) ? ((((1 ? var_11 : 6)))) : (((var_0 <= (min(var_9, 20))))))))));
                                var_54 = (((!(arr_98 [i_25 + 1] [i_29] [i_29]))));
                                var_55 = (min(var_55, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
