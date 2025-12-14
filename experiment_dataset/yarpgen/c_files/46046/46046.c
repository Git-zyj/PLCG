/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(min((60 <= 1), (~var_10)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((!((((var_3 ? var_3 : var_4))))));
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((-var_6 ? (((max(var_7, var_3)))) : ((~((var_15 ? var_5 : var_11))))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_19 = -60;
            var_20 = (!var_13);
            var_21 = -var_11;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_17 [18] [18] = max(((((min(var_5, var_14))))), (max((min(var_16, var_9)), (((var_14 ? var_9 : var_1))))));
            var_22 = (min(var_22, ((max(-var_3, ((min(((max(var_5, var_6))), (max(var_14, var_14))))))))));
        }
        arr_18 [i_0] &= ((((max(242, 66))) ? (!var_3) : (var_14 | var_9)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_23 = (~var_13);

            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_24 = (!var_11);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_25 = (min(var_25, var_5));
                            arr_31 [i_6] [i_7] [i_6] [i_6] = -var_6;
                            arr_32 [22] [i_5] [i_7] [i_8] [i_9] [2] &= (~var_8);
                            var_26 += var_9;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_27 = (((((var_2 ? var_3 : var_2))) ? var_8 : ((var_6 ? var_3 : var_9))));
                    var_28 = (var_1 / var_11);

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_39 [1] [1] [i_6] [i_6] [1] [1] = ((-(var_1 ^ var_2)));
                        arr_40 [i_5] [i_6] [9] [i_11] [i_12] [i_12] [i_6] = var_14;
                        arr_41 [i_12] [i_6] [i_5] [i_10] [i_6] [i_5] = ((var_0 ? var_7 : var_15));
                        arr_42 [0] [i_12] |= ((var_5 ? var_7 : var_13));
                    }
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_29 = (min(var_29, var_7));
                    arr_46 [i_6] [6] = -var_13;
                }
                for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                {
                    var_30 = (~var_11);
                    var_31 = var_12;
                }
                for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
                {
                    arr_51 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] = var_1;
                    var_32 -= var_2;
                    var_33 = (max(var_33, (!var_10)));
                    arr_52 [i_5] [i_6] [i_6] [22] [i_5] [i_15] = (~var_6);
                    arr_53 [i_6] [i_15] [i_10] [i_6] [i_6] = var_7;
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_34 &= (!var_14);
                            arr_58 [i_5] [i_6] [i_10] [i_6] [i_17] = var_8;
                            var_35 = var_4;
                        }
                    }
                }
                arr_59 [i_5] [i_6] [i_10] = (!var_8);
            }
            for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
            {
                var_36 = var_13;
                var_37 = ((var_16 ? var_2 : var_15));
                var_38 = var_1;
            }
            for (int i_19 = 2; i_19 < 22;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_70 [i_5] [i_20] [i_6] [i_6] [i_21 + 3] = var_10;
                            var_39 = var_13;
                            arr_71 [i_5] [i_6] [i_6] [i_6] [i_20] [1] [i_21] = (((var_2 < var_10) * var_11));
                        }
                    }
                }
                arr_72 [i_5] [i_5] [i_19] |= ((var_8 ? var_8 : var_2));
            }
            var_40 = var_3;
        }
        var_41 &= -var_6;
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    {
                        arr_79 [i_22] [12] [i_22] [i_24] [i_22] = ((-var_15 ? var_8 : (var_13 || var_13)));
                        var_42 = (~var_2);
                    }
                }
            }
        }

        for (int i_25 = 3; i_25 < 22;i_25 += 1)
        {
            var_43 += var_12;
            arr_84 [i_25] = ((14 ? -2673 : -1));
            var_44 += (!var_0);
        }
        var_45 = var_3;
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 15;i_26 += 1)
    {
        var_46 = (var_13 & var_14);
        var_47 += (~var_7);
        arr_89 [i_26] [i_26] = -var_16;
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 15;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 14;i_28 += 1)
            {
                {
                    var_48 = (max(var_48, (var_15 || var_12)));
                    var_49 = ((!(((var_10 ? var_2 : var_6)))));
                }
            }
        }

        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            /* LoopNest 3 */
            for (int i_30 = 2; i_30 < 14;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        {
                            arr_106 [10] [10] [i_30] [i_32] [0] = ((var_9 ? var_4 : var_13));
                            var_50 = ((14 ? 36 : 2665));
                        }
                    }
                }
            }
            arr_107 [i_29] [i_26] = ((-(var_9 != var_3)));
        }
    }
    /* vectorizable */
    for (int i_33 = 0; i_33 < 10;i_33 += 1)
    {
        var_51 = -var_5;
        arr_110 [i_33] = var_15;
        arr_111 [i_33] = ((var_2 ? var_15 : var_0));
        /* LoopNest 3 */
        for (int i_34 = 0; i_34 < 10;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 10;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 10;i_36 += 1)
                {
                    {
                        arr_119 [i_36] [i_34] [i_34] [i_33] = ((var_9 ? var_6 : var_9));
                        arr_120 [i_35] [1] [1] [i_33] &= (-var_16 + -var_14);
                        arr_121 [i_33] [i_34] [i_34] [i_36] = -var_15;
                    }
                }
            }
        }
        var_52 = ((var_10 << (var_7 + 10369)));
    }
    #pragma endscop
}
