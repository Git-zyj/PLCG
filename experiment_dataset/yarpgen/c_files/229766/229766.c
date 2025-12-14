/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_2;
    var_21 = var_17;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = 63;

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_23 = var_17;
                        var_24 = (((((!(21 != var_11)))) ^ var_1));
                    }
                }
            }
            var_25 = (~var_8);
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_26 = ((((var_18 + (arr_13 [i_0] [i_4]))) << (var_0 && var_19)));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    arr_19 [7] [7] [7] [i_5] [i_4] = var_11;
                    var_27 += ((-(var_11 && 4062279893)));
                    var_28 *= ((32736286 * (min(var_16, var_2))));
                }
                var_29 = var_19;
                var_30 |= (((((arr_11 [8]) << var_3)) | ((-(arr_11 [4])))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_27 [i_0] [i_4] [i_7] [i_9 - 1] [i_4] [i_8] = ((((((arr_14 [i_0] [i_4]) - (arr_12 [i_4])))) * var_17));
                            arr_28 [8] [i_0] [i_4] [2] [8] [i_4] [i_0] = (arr_12 [i_4]);
                        }
                    }
                }
                var_31 = (-(arr_16 [i_4] [i_4]));
            }
            var_32 = (arr_6 [i_0] [12]);
            var_33 = (max(var_33, (arr_6 [i_0] [i_4])));
            var_34 = ((((var_16 == (!var_8))) ? (arr_8 [i_0] [i_0] [3] [i_4] [i_4]) : ((max((arr_23 [i_0] [i_4] [i_4]), 56839)))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        var_35 = var_18;
                        arr_38 [i_0] [i_10] [i_11] [i_12] [i_12] = var_4;
                        arr_39 [i_0] [i_10] [i_11 - 1] [i_12 + 2] = ((var_3 ? (arr_21 [i_0] [i_10] [i_11]) : (arr_12 [i_10])));
                    }
                }
            }
            var_36 += (arr_11 [1]);
        }
        var_37 = var_3;
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        arr_42 [i_13] [i_13] = var_4;
        var_38 = (max(var_38, ((!((((-1300791671039664542 - var_19) ? (((arr_41 [i_13] [i_13]) * 53224031)) : var_8)))))));
        arr_43 [i_13] = ((((var_15 ? (arr_40 [i_13] [2]) : (arr_40 [i_13] [i_13]))) | (arr_40 [i_13] [i_13])));
        var_39 = (((var_3 * (arr_41 [i_13] [i_13]))));
        arr_44 [i_13] [i_13] = var_0;
    }
    for (int i_14 = 3; i_14 < 18;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_40 = ((!((((arr_48 [i_14 - 1]) ? var_1 : (arr_48 [i_14 + 1]))))));
            var_41 = ((!((var_15 && (arr_49 [i_14])))));
            arr_50 [i_14] = (~var_8);
        }
        arr_51 [i_14] = -var_19;
    }
    #pragma endscop
}
