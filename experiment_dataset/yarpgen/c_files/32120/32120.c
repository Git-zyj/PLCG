/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [10] = 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_12 = ((-(((arr_8 [i_2 - 1] [i_2 + 4] [i_2]) | var_9))));
            var_13 = arr_3 [i_1];
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_4 + 2] [i_3 + 2] [i_5] = ((((((arr_7 [i_3] [i_4]) ? 0 : var_3))) ? var_1 : 29814));
                        var_14 = (var_9 / -13872);
                    }
                }
            }
            arr_18 [i_3] = (((!(arr_9 [i_1] [i_3 - 1]))));
            arr_19 [1] [i_1] [9] = (!var_0);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_24 [i_1] [i_3 - 1] [i_6] = (((arr_14 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_7 - 1]) | (arr_8 [i_1] [i_3] [i_3])));
                        arr_25 [11] = (arr_23 [i_1] [7] [i_6] [i_7]);
                        var_15 = (((arr_16 [i_3 + 4] [i_3 + 2]) ? (arr_11 [i_3 + 1] [i_7 - 3]) : 0));
                        var_16 = (arr_5 [i_3]);
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
        {
            var_17 = (((min((arr_20 [i_1] [i_1] [i_8 - 1] [i_8]), 4294967295)) | (((max((arr_20 [i_1] [i_8 - 2] [i_8 + 1] [i_1]), (arr_20 [i_1] [i_1] [i_8 - 2] [i_8])))))));

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_18 -= -1;
                            var_19 &= arr_7 [i_1] [i_8];
                        }
                    }
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_20 = ((!(((-2426601827606439598 ? (arr_35 [i_1] [i_8] [i_12]) : (arr_9 [i_9] [i_8 + 2]))))));
                    arr_36 [7] [i_1] [i_1] [i_1] [i_9] [7] = ((var_1 ? (!4747933496225632137) : var_4));
                    arr_37 [i_12] [i_8 - 2] [i_9] [i_8 - 2] = 9223372036854775786;
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_41 [i_1] [i_13] [i_13] [i_8] [i_1] [i_1] = ((((!(arr_34 [i_8] [i_9 - 1] [i_13] [i_13] [11])))));
                    var_21 = ((!(arr_16 [i_1] [i_9 + 2])));

                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_22 = (max(var_22, (((((((arr_43 [i_1] [i_8 + 4] [i_1] [i_13] [i_8] [i_14 + 1] [i_1]) ? (((max(var_10, 1)))) : (min((arr_43 [i_1] [i_8 + 2] [i_9 - 1] [i_14] [i_8] [4] [i_13]), (arr_3 [i_8])))))) && (arr_1 [15] [i_14]))))));
                        arr_46 [i_1] [i_8 - 2] [i_8] [i_9 - 1] [i_13] [i_14] [i_14] = ((-(((arr_44 [i_8 + 1] [i_8 + 1]) ? (arr_44 [i_8 - 1] [i_8 + 1]) : (arr_44 [i_8] [i_8 + 2])))));
                        var_23 = (max(var_23, (((((arr_34 [i_1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) || (arr_34 [i_1] [i_8 + 3] [i_9 + 2] [i_13] [i_1])))))));
                    }
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        arr_50 [i_1] [i_8] [i_9 + 3] [i_9 + 3] [i_15 + 1] = (max((((arr_3 [i_8 - 2]) ? 1 : (arr_3 [i_8 + 4]))), ((((((-43 ? -1 : (arr_10 [5] [i_8] [i_9 + 2])))) < 5561273184695548561)))));
                        var_24 = -7;
                    }
                    arr_51 [i_1] [i_8 - 2] [i_8 - 2] [i_13] &= (-1 >= 11202030666672637468);
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_54 [i_1] [i_8 + 2] [i_9] [i_16] [i_16] [i_8] = var_1;
                    arr_55 [i_16] [i_9] [i_16] [i_16] = (((12935367318835600195 * (arr_31 [i_1]))));
                }
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    arr_58 [i_17] [i_17] [i_17] [i_1] = (arr_10 [i_17 + 1] [i_8 + 2] [i_1]);
                    var_25 = (min(var_25, ((((((~(arr_14 [i_17 + 2] [i_17 - 1] [i_1] [1])))) ? (((arr_56 [i_8]) * (max(12935367318835600184, var_6)))) : ((((arr_49 [i_1] [i_8 + 1] [i_9 + 3] [i_17 + 1] [i_8 + 1]) ? (!var_0) : (((arr_16 [i_8 + 1] [1]) ? (arr_28 [i_1] [i_1]) : var_1))))))))));
                }
            }
        }
        var_26 ^= ((~((-83 ? (arr_43 [i_1] [i_1] [i_1] [i_1] [0] [i_1] [4]) : var_6))));
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        var_27 = (arr_59 [i_18] [i_18]);
        arr_61 [1] = ((arr_59 [i_18] [i_18]) > (max((arr_59 [i_18] [i_18]), (arr_60 [i_18]))));
        var_28 = var_0;
    }
    var_29 = var_4;
    #pragma endscop
}
