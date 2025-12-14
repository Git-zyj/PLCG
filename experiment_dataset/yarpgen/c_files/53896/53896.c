/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0] [i_0]) - var_14));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (!var_3) : ((0 ? 1 : 0))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((-((-(arr_3 [i_1])))));
        var_17 = ((1 ? (((var_11 != (arr_3 [i_1])))) : (!1)));
        arr_7 [i_1] [1] = var_6;
        arr_8 [i_1] [0] = ((+(((1 + 1) ? var_4 : ((max(var_0, var_3)))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((-(((arr_4 [i_2]) ? var_12 : var_1))))) ? ((-var_1 ? (arr_9 [i_2] [i_2]) : -0)) : ((min((((arr_3 [i_2]) <= 1)), (((arr_9 [i_2] [i_2]) > var_10)))))));
        arr_12 [i_2] = (!(~var_3));
        var_18 = arr_4 [i_2];

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_19 = (((((-(!1)))) ? (((!(((~(arr_13 [i_2] [i_2]))))))) : ((((1 ? 1 : var_0)) + (((arr_14 [i_2] [i_2] [1]) ? (arr_3 [i_3]) : (arr_15 [i_2] [i_3 - 1])))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_24 [i_2] [i_2] [i_3] [i_3 - 1] [i_2] [i_5] = var_0;
                        arr_25 [i_4] [i_2] = ((~var_4) >= (((!1) ? (arr_16 [i_2]) : ((max(var_4, 1))))));
                        arr_26 [i_5] [i_2] [i_2] = (max(((-(arr_20 [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 1] [i_3 - 1]))), ((((1 ? var_10 : var_14))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_20 = ((-(1 & var_2)));
            var_21 = var_2;
            arr_29 [i_2] [i_6] = var_13;
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_43 [i_7] [1] [i_9] = ((-(arr_35 [i_8] [i_10])));
                        var_22 = ((var_3 ? ((1 ? 0 : 1)) : (arr_42 [1] [i_8] [i_9] [i_10])));
                        var_23 = (!var_12);
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_47 [i_11] [i_7] [i_11] = ((-((var_2 ? (arr_3 [i_7]) : var_9))));
            var_24 = (((arr_32 [i_7]) | var_14));
            arr_48 [i_7] [i_11] = var_3;
            var_25 = ((~(((arr_34 [1]) ? var_7 : 1))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_51 [i_12] [i_12] = -1;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_26 = (((arr_28 [i_7] [i_12]) ? var_4 : (arr_39 [i_14])));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_27 = (!var_7);
                            arr_62 [i_7] [i_14] [i_13] [i_14] [i_14] = ((0 | ((var_11 * (arr_33 [i_7] [i_7])))));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_65 [i_7] [i_12] [i_14] [i_14] [i_16] [0] = (((var_4 ? 1 : 1)) != ((-(arr_57 [i_14] [i_12] [i_13] [i_14]))));
                            arr_66 [i_7] [i_7] [1] [i_14] [i_7] [i_14] = ((-(arr_1 [i_7])));
                            var_28 = ((1 ? 1 : 1));
                            var_29 = ((var_11 ? ((var_4 | (arr_49 [i_7] [i_7]))) : (((arr_56 [i_13] [i_13] [i_16]) | (arr_4 [i_7])))));
                        }
                        var_30 = (((arr_64 [i_7] [i_12] [i_13] [i_12] [i_7] [i_7]) ? var_10 : var_11));
                        arr_67 [i_14] [i_14] [i_12] [i_12] [i_12] [i_14] = arr_58 [i_7];
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_74 [i_7] [i_7] [i_18] [i_7] [i_7] = (((arr_4 [i_7]) >> (arr_4 [i_7])));
                            arr_75 [i_12] [1] [i_18] = (var_11 + var_0);
                        }
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
        {
            arr_78 [1] = 0;
            arr_79 [i_7] [i_20] [i_20] = (((((var_11 ? var_5 : var_2))) ? var_14 : (arr_0 [i_7] [0])));
            var_31 = (((1 ? 1 : 1)) >= var_9);
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
        {
            arr_83 [i_7] [1] = var_11;
            var_32 = (((arr_18 [i_7] [i_21] [1]) ? (arr_18 [i_7] [i_7] [1]) : (arr_18 [i_7] [i_7] [1])));
        }
        var_33 = arr_3 [i_7];
    }
    #pragma endscop
}
