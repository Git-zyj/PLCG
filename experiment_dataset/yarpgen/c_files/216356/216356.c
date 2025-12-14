/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (min(((((arr_3 [i_0 + 1]) ? ((var_11 ? (arr_1 [i_0]) : var_9)) : 255))), ((124 ? ((max((arr_0 [i_0]), var_4))) : ((var_6 ? var_0 : var_14))))));
                var_17 = (max(var_17, ((min(20901, 26295)))));
                var_18 = (max(var_18, ((((min((max(-26291, var_11)), 26306)) - ((((arr_0 [i_0]) != (arr_2 [i_0] [i_1])))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = 44635;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_0] [i_0] = (((arr_3 [i_2 + 3]) << (127 - 101)));
                        var_19 = (max(var_19, ((((arr_9 [i_0] [16] [i_1] [i_3]) == (arr_5 [i_1] [i_1] [i_2] [i_3 - 1]))))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            var_20 ^= (arr_9 [i_0 + 2] [i_0] [i_1] [10]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = 3225324310;
                            arr_18 [i_0] [i_0] [6] [18] [i_0] [i_0] [i_0] = (((16128 > var_0) >> (20900 - 20891)));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_21 -= ((var_6 ? 20893 : var_1));
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = var_11;
                            var_22 = 3712850586;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] [i_6] [i_6] = ((178 / (arr_3 [i_0 - 1])));
                            var_23 = (max(var_23, -4));
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] = var_4;
                            var_24 = (((arr_22 [i_0] [i_3] [i_3] [i_2 + 3] [i_2] [i_1] [i_0]) ? 0 : 20901));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_25 = ((!(arr_22 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_0])));
                            var_26 = (arr_4 [i_0]);
                            arr_29 [i_7] [i_3 - 1] [i_3] [i_0] [21] [21] [i_0] = 143637911;
                        }
                        var_27 = (max(var_27, ((((!var_1) ? 24899 : (arr_19 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0]))))));
                        var_28 += ((-1 ? (arr_27 [i_0 + 2] [i_2 + 2] [i_3 - 1] [i_1] [i_3 - 1] [22] [i_3]) : (arr_10 [i_1] [i_1] [i_1] [i_1] [2])));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = var_5;
                        arr_35 [i_8 - 1] [i_0] [i_0] [i_0 - 1] = var_14;

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_29 = 1;
                            var_30 -= 4204350843257638403;
                        }
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [11] [i_10] = 20865;
                        var_31 += (arr_9 [i_10] [i_1] [i_1] [i_0]);
                    }

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_32 = ((1 ? 13903141592290287916 : (arr_4 [i_0])));
                        var_33 = arr_33 [i_0] [i_0] [i_0];
                    }
                }
                var_34 = (min(var_34, var_1));
            }
        }
    }
    var_35 = ((((-1 ? -var_4 : var_5)) - (-4246260345 + var_1)));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            {
                var_36 = (min(var_36, -127));
                var_37 = (arr_41 [i_12] [i_13] [i_12]);
                var_38 = (min(var_38, ((min((((!(((arr_49 [10] [i_13] [i_13]) && (arr_20 [i_12] [i_12] [21] [i_13] [i_13] [i_13])))))), ((((min((arr_40 [23] [i_13] [23] [i_13]), 1))) ? (((min(var_15, var_1)))) : ((63 ? var_12 : var_8)))))))));
            }
        }
    }
    #pragma endscop
}
