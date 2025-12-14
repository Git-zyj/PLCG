/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((min(-27766, 98)))));
    var_18 = var_11;
    var_19 = ((((!(var_10 ^ 858796011)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) <= 104))) == ((262418994 << (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (((min(0, var_0)) >= (122 >= 3419757586074379193)));
        arr_4 [i_0] = ((var_2 / (916883986 / var_13)));
        arr_5 [i_0] [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_5 - (arr_6 [i_1])));
        arr_9 [2] = (((18446744073709551587 == var_15) ? var_16 : (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_21 [i_5] [i_4] [i_2] [i_3] [i_2] = (((var_5 && var_16) & 0));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_25 [i_2] [i_4] [i_2] [i_2] [i_6] [i_5] [i_5] = (arr_15 [i_2] [i_4] [i_5]);
                            arr_26 [i_4] [i_3] [i_2] [i_5] = (var_15 + 127);
                            arr_27 [i_2] [i_5] [3] [1] [i_3] [1] [i_2] = (((0 ^ 252) ? (var_15 | var_10) : var_15));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_30 [i_2] = (((arr_17 [i_7] [i_2]) ^ 16583073580023583564));
                            arr_31 [i_7] [i_3] [i_3] [12] [12] |= (((var_2 && var_14) ? (arr_24 [i_3] [i_7]) : var_11));
                            arr_32 [i_2] [i_3] [i_2] [i_5] [i_2] = -0;
                            arr_33 [i_7] [i_5] [i_5] [i_2] [5] [i_3] [i_2] = ((!(arr_16 [i_2] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_38 [i_8] [4] [4] [i_2] [i_3] [i_2] [i_2] = (((arr_11 [i_2]) * (var_13 <= var_8)));
                            arr_39 [i_2] [i_3] [i_2] [i_4] [i_2] = ((~((-(arr_13 [i_2] [i_4] [6])))));
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_3;
                        }
                    }
                }
            }
            arr_41 [i_2] [i_2] = ((~0) ? (var_6 / var_16) : (var_10 && var_7));
        }
        arr_42 [i_2] = -var_0;
        arr_43 [i_2] [i_2] = ((!(var_14 & var_15)));
        arr_44 [14] [i_2] = (((((18446744073709551610 ? var_8 : var_7))) >= ((22294 ? 604904026 : 18446744073709551615))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                {
                    arr_49 [i_2] [i_2] [i_2] = ((var_1 ? (-447195293 == var_16) : (((arr_20 [13] [i_2] [i_2] [13]) - var_4))));
                    arr_50 [i_2] [i_2] [i_2] = ((-(var_8 & var_10)));
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
