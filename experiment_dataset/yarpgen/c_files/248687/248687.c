/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((((arr_1 [i_0]) ? (~var_0) : (((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_4 [1] [i_0] [i_0]) : (arr_3 [i_1] [i_0])))))) ? var_14 : (((arr_2 [i_0] [i_0] [i_0 - 1]) ? ((var_5 ? (arr_3 [i_0 - 1] [1]) : (arr_1 [i_1 - 1]))) : var_17)))))));
                var_21 = (1 > ((min((arr_2 [i_0] [i_0] [i_0 - 1]), (arr_4 [i_0] [1] [i_0 - 1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 += max(1, var_8);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] [i_4] [i_5] = arr_4 [i_2] [1] [1];

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (min(var_23, 1));
                            var_24 = (max(var_24, (((var_7 ? (arr_1 [i_3 + 1]) : 1)))));
                            var_25 -= -var_7;
                            var_26 = arr_8 [i_3 + 1] [i_3 + 1];
                        }
                        var_27 = arr_1 [i_2];
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, var_6));
                        var_29 = ((var_18 ? (var_7 + 1) : (arr_10 [i_2] [i_2] [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_22 [i_2] [i_2] [i_4] [i_8] [i_8] = 1;
                        arr_23 [1] [i_4] [1] = arr_16 [i_2] [i_2] [0] [1] [i_2] [i_2];
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_30 = (min(var_30, (!1)));
                        var_31 = ((((((arr_6 [i_3 + 1] [i_3 + 1]) * (arr_2 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? (arr_14 [1] [i_2] [i_3 + 1] [i_3 + 1] [1]) : 1));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_32 = max((!1), ((!(arr_0 [i_2] [i_3]))));
                            var_33 = var_9;
                            var_34 = ((-(var_2 < 1)));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_35 -= var_18;
                            arr_33 [i_2] = (arr_9 [i_11] [i_11] [i_4] [i_3 + 1]);
                            arr_34 [i_2] [i_2] [i_4] [i_9] [i_2] [i_11] = arr_1 [i_4];
                        }
                    }
                    var_36 = (min(var_36, var_5));
                }
            }
        }
        var_37 = var_1;
        var_38 *= max((arr_17 [i_2] [i_2] [1] [i_2] [i_2]), (arr_11 [i_2] [1] [i_2] [i_2]));
    }
    #pragma endscop
}
