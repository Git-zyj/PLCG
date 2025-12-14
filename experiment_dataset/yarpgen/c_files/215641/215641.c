/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (((!var_1) ^ (arr_0 [i_0 - 2] [i_0 - 2])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_12 = 0;
                    var_13 = (min(var_13, (((3 ? (arr_10 [i_0 + 1] [i_3 + 2] [i_2 - 2]) : (arr_0 [i_0 + 1] [i_3 + 2]))))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_12 [i_1] [i_3] [i_1] [i_1]) << ((((var_0 ? var_4 : 24)) - 25737))));
                        var_14 = var_4;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_15 = (min(var_15, (((~(~252))))));
                        var_16 = (((arr_10 [4] [i_2] [i_2 - 2]) ? (arr_11 [i_0] [i_0] [i_2 + 2] [i_3 - 2] [i_0]) : (arr_11 [i_0 + 3] [i_0 + 1] [i_1] [i_1] [i_1])));
                    }
                }
                for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_6] [i_2] [i_1] [i_0] |= var_8;
                    var_17 = ((-(var_8 / var_10)));
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    var_18 = ((!((3 && (arr_10 [i_0] [i_0] [1])))));
                    var_19 = ((!(((var_2 ? var_5 : (arr_6 [i_0] [i_1] [i_2] [i_7 - 1]))))));
                    var_20 = (arr_5 [6] [8]);
                }
                arr_21 [i_0 + 3] [i_0 + 3] [i_2] [i_0 - 1] = var_4;

                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0 + 1] [i_8] [i_0 + 3] [i_0 - 2] [9] [i_0] = (arr_12 [i_0] [i_1] [i_0] [i_8]);
                    arr_25 [i_0] [i_0] [i_8] [i_8] [8] [i_1] = ((arr_7 [i_0] [i_0] [i_0 + 1]) - (arr_1 [i_0] [i_1]));
                    var_21 = ((((((arr_5 [i_0] [i_1]) ? 252 : 252))) ? (arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] [i_8]) : (arr_16 [5] [i_2 + 2] [i_2])));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_22 = (min(var_22, ((((((arr_4 [i_2] [i_9] [0]) ? 248 : 248)) << (((arr_12 [i_0] [i_1] [i_0] [i_9]) - 784003936)))))));
                        var_23 = ((~(arr_17 [i_2 - 2] [i_0 + 2] [i_0 - 1] [1])));
                        var_24 &= ((!(var_3 / 247)));
                        var_25 &= (arr_12 [2] [i_1] [2] [i_1]);
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_26 &= var_9;
                        var_27 = (max(var_27, (~var_9)));
                        var_28 = ((var_11 ^ ((var_11 << (var_5 - 1737408659)))));
                    }
                    var_29 = (~var_2);

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_30 &= var_8;
                        var_31 &= (((arr_15 [i_2 - 1] [i_1] [i_2] [i_9] [i_12] [i_12] [1]) + (arr_15 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_12] [i_12] [i_0])));
                        var_32 = (247 ^ 3);
                    }
                    var_33 = ((~(6 | var_2)));
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    arr_40 [i_0 + 1] [i_1] [i_1] [i_13] [10] = (~var_9);
                    var_34 = (min(var_34, 8));
                }
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    var_35 -= (arr_8 [i_0] [0] [i_2] [i_14 - 1]);
                    var_36 = (~3);
                    var_37 = (~(arr_34 [i_0] [i_1] [2] [i_14] [2] [i_0]));
                    var_38 = var_11;
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_39 = var_5;
                            var_40 -= (!var_3);
                        }
                    }
                }
            }
            arr_50 [i_0] [i_1] = ((var_10 > (arr_42 [7] [7] [7] [i_0] [i_1])));
            arr_51 [i_0] [i_1] = (((arr_41 [i_1] [i_0] [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_42 [10] [10] [i_0] [10] [10]) : (arr_20 [i_0] [i_0] [i_0] [i_1]))) : (arr_5 [i_0] [i_1])));
        }

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            arr_56 [i_0] [0] = var_1;
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    {
                        arr_63 [i_20] [i_0] [i_18] [i_0] = ((!(~0)));
                        var_41 = var_9;
                        var_42 = (min(var_42, var_6));
                    }
                }
            }
            arr_64 [i_18] [i_0] &= (((((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [2] [i_18] [i_18] [i_18] [i_18] [i_18]) : (arr_29 [i_0] [i_0] [i_0] [2] [8] [i_18]))) / (arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_18])));
        }
        for (int i_21 = 4; i_21 < 8;i_21 += 1)
        {
            arr_67 [i_0 - 2] = (((252 | 250) ? ((~(arr_49 [i_0] [i_0] [i_0] [4] [i_0 + 2] [4]))) : (arr_57 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 3])));
            arr_68 [i_0 + 1] = (arr_27 [i_0 - 1] [i_0 + 2] [i_21 - 1] [i_21 + 1] [i_21 + 3] [i_21 - 4]);
            var_43 = (min(var_43, ((((arr_27 [i_0] [i_21] [i_21] [i_21] [i_21] [i_21]) == (arr_65 [i_0] [i_21] [i_0 - 2]))))));
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            var_44 = var_6;
            var_45 *= (~8);
        }
        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            var_46 = (arr_1 [i_0 - 2] [i_0 + 2]);
            var_47 -= (arr_31 [i_0] [i_0] [i_0] [9] [9] [i_23] [i_0]);
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 9;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 10;i_25 += 1)
                {
                    {
                        var_48 |= 245;
                        var_49 = (max(var_49, (((var_7 ^ ((((!(arr_59 [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                }
            }
            arr_77 [i_23] [i_23] [i_0] = arr_60 [i_0] [i_0] [i_23] [i_0] [i_0];
            var_50 = (!var_10);
        }
    }
    var_51 = var_10;
    var_52 += 244;
    var_53 = (!var_7);
    #pragma endscop
}
