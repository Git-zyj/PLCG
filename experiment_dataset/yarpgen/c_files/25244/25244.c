/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = ((((((((-1013775574 ? var_9 : var_8))) ? var_2 : var_2))) ? var_10 : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = 9223372036854775806;
        arr_3 [i_0] = (arr_1 [19]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = ((((((arr_6 [i_1 - 1]) / (arr_6 [i_1 + 1])))) ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 - 1])));
        var_15 = (arr_4 [i_1]);
    }

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_19 [i_5] = ((-2015929167 ? (-127 - 1) : 0));
                        arr_20 [i_5] [i_4] [i_3] [i_5] = (arr_13 [i_2]);
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_16 = (1013775571 ^ 0);

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_17 = (arr_21 [i_6] [i_7]);

                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_18 = (max(0, (((arr_24 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_7]) ? var_8 : var_1))));
                    var_19 = (((arr_8 [i_2 + 1]) % (arr_25 [i_2 + 1])));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_20 = (((((max(1013775565, 2025890313)))) ? (arr_18 [i_2] [i_7] [i_2 - 1] [i_2 - 1]) : (((((min(var_8, -1656694786))) && ((min(1013775571, 0))))))));

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_21 = ((-1030299804 & var_8) ^ 121);
                        var_22 = (arr_30 [i_2 - 1] [i_6] [i_7] [i_9]);
                    }
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    arr_36 [i_11] [i_7] = (max(((926270660640940191 | (((~(arr_7 [1])))))), var_9));
                    var_23 = (min((arr_32 [i_2] [i_6] [i_6] [i_7] [i_7] [i_11] [10]), var_7));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_40 [i_2] [i_7] = 1013775571;
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = 1;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_24 = ((arr_12 [i_2] [2] [i_2]) ? (arr_12 [i_2] [i_13] [i_13]) : 1121560066);
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_48 [i_2] [i_13] [i_14] [i_15] = (max((((945590815 ? 41150 : 189))), (arr_30 [i_14] [i_14 + 1] [i_14] [i_15 + 2])));
                        arr_49 [i_14] [i_14 + 1] [i_14] = ((var_9 ? ((var_10 / (arr_14 [i_2]))) : (arr_25 [i_2])));
                        arr_50 [i_2 + 1] [i_13] [i_14] [i_14 + 2] [i_15 - 1] = (arr_22 [i_2 - 1] [i_13] [i_15]);
                        var_25 = ((arr_35 [i_2 - 1] [i_13] [i_13] [i_13] [i_13] [i_2]) ? (arr_28 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_34 [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_2 + 1] [i_2]));
                    }
                }
            }
            arr_51 [i_13] [i_2 - 1] = 1;

            /* vectorizable */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_26 = 249;
                arr_55 [i_16] = var_0;
            }
            for (int i_17 = 2; i_17 < 20;i_17 += 1)
            {
                arr_60 [i_2 + 1] [i_2 - 1] = ((-(arr_16 [i_2 - 1] [i_17] [i_17])));
                arr_61 [i_17] = (max((((-(arr_13 [i_2])))), var_1));
                var_27 = (((((~(arr_27 [i_2 - 1] [i_2 - 1] [i_2] [i_13] [i_2 + 1] [i_2 - 1])))) && (~var_4)));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_28 = arr_9 [i_2 - 1] [i_2 - 1];
                            var_29 = (arr_29 [i_18] [i_18] [i_18]);
                            arr_70 [i_19] [i_19] [11] [i_18] = var_7;
                        }
                    }
                }
                var_30 = (arr_18 [i_18] [i_18] [i_18] [i_2]);
                arr_71 [i_2 - 1] [i_13] [i_13] [i_18] = (-((228 ? var_2 : 945590815)));
                arr_72 [i_18] [i_13] [i_18] [i_18] = ((((var_10 ? var_2 : (arr_67 [i_2] [i_13] [i_13] [i_18] [i_18]))) != var_5));
            }
            for (int i_21 = 3; i_21 < 21;i_21 += 1)
            {
                var_31 = var_7;
                var_32 = (((arr_59 [i_2] [i_2 + 1] [i_21] [i_21 + 1]) ? 0 : -3135050350));
                arr_77 [i_21] = (max((((min(var_3, (arr_62 [i_2] [i_13]))) - (arr_27 [i_2] [i_13] [i_21] [i_13] [i_21 - 2] [i_2]))), var_3));
            }
        }
        for (int i_22 = 1; i_22 < 20;i_22 += 1)
        {
            arr_81 [i_22] [i_22] [i_22] = (max(189, 13500475736226692175));
            /* LoopNest 2 */
            for (int i_23 = 4; i_23 < 19;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    {
                        var_33 = ((min(var_8, (arr_34 [i_2] [i_2 - 1] [i_22] [i_22] [i_22]))) - ((var_6 + (arr_43 [i_22 + 1] [i_2]))));
                        arr_88 [i_22] [i_22] [i_23] [i_24] = (((-106 ? ((max((arr_22 [i_22] [i_22 - 1] [i_23 + 2]), -1))) : ((min(47, 56938))))));
                        var_34 = (((((arr_42 [i_2 + 1] [i_23] [i_23]) ? (arr_42 [i_2 + 1] [i_24] [i_24]) : (arr_42 [i_2 - 1] [i_2] [i_24]))) <= var_1));
                        arr_89 [i_24] [i_22] [1] = ((!(((~(max(255, var_5)))))));
                    }
                }
            }
            var_35 = (arr_27 [i_2] [i_2] [i_2 - 1] [i_22] [i_2] [i_22 + 1]);
        }
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            /* LoopNest 3 */
            for (int i_26 = 2; i_26 < 19;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 22;i_28 += 1)
                    {
                        {
                            arr_99 [i_27] = var_0;
                            var_36 = 29;
                        }
                    }
                }
            }
            var_37 = (((min((~234), (-1 != var_10)))) ? var_1 : ((((arr_64 [12] [i_2] [i_25] [i_25] [i_25]) | var_4))));
        }
    }
    var_38 = var_2;
    #pragma endscop
}
