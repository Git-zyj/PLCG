/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((max(7, (min((max(var_8, 0)), 65535)))))));
        arr_2 [i_0] [i_0] = var_1;
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_5 [i_1]) * 109));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_1] = (((25762 & 0) & var_7));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_4 - 1] [i_1] = (~37710);
                            var_19 = (max(var_19, var_0));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_20 *= -1;
                            var_21 = ((183 ? var_10 : 22312));
                        }
                        var_22 = (min(var_22, 65535));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [8] [i_1] [8] [i_1] [i_1] = (arr_24 [i_1] [i_8] [i_2 + 1] [i_7]);
                            arr_31 [i_1] [i_1] [i_2] [i_3] [i_7] [i_1] [i_1] = ((((var_12 & (arr_12 [i_1] [i_8] [i_3]))) & ((52 ? var_10 : 62))));
                            var_23 -= var_3;
                            var_24 = (!243);
                            var_25 = (((arr_25 [i_1] [i_2] [i_3] [i_8]) ? 109 : 15));
                        }

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_26 = (min(var_26, var_4));
                            var_27 = (((((var_7 ? var_2 : var_14))) ? 253 : ((65535 ? 114 : (arr_11 [i_1] [i_9] [1] [7])))));
                            arr_34 [i_9] [i_1] [i_3] [i_1] [i_1] = (!-77);
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_28 = (((62 ? 77 : var_12)));
                            var_29 = var_13;
                            var_30 = (65535 ^ var_12);
                        }
                        var_31 = ((-(~-111)));
                        var_32 = 61;
                    }
                    var_33 += ((!(arr_11 [i_3] [i_2] [i_2 - 1] [10])));
                    arr_39 [i_1] [i_1] [i_2] [i_3] = 0;

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_34 = (arr_40 [i_1] [2] [i_11]);
                        arr_42 [i_11] [i_1] [i_1] [i_1] = (((arr_27 [i_2 + 1]) ^ (arr_22 [i_1] [12] [3] [i_11] [i_3] [i_3] [i_3])));
                        arr_43 [i_1] [i_1] [i_1] [i_1] = (arr_28 [i_1] [i_2] [i_2] [i_2 - 1] [i_2]);
                        var_35 = (arr_35 [i_2] [i_2] [7] [i_2] [i_2] [i_2 + 1] [i_2 + 1]);
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_36 = 0;
                        var_37 = ((-(arr_24 [i_1] [i_1] [i_2 + 1] [i_2 + 1])));
                        var_38 = (min(var_38, (((+((var_12 ? (arr_36 [i_3] [i_3] [i_3]) : (arr_33 [i_1] [i_2] [i_3] [i_12] [i_12] [i_12]))))))));
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_39 = (!205);
                            var_40 = (~-9);
                        }
                        var_41 = (arr_20 [i_1] [i_2 + 1] [i_2 + 1] [i_1]);
                    }
                }
            }
        }
    }
    var_42 = (((!9) & ((((~97) > 169)))));
    var_43 = var_11;
    #pragma endscop
}
