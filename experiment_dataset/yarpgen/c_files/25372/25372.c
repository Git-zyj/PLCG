/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 + (-15241 * -86)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 += (((((((max(var_6, var_7))) * var_11))) ? var_1 : var_11));
                var_14 = (((((arr_4 [i_1 + 3] [i_1 + 3]) % -89)) < ((min((arr_4 [i_1 + 2] [i_1]), (arr_4 [i_1 + 2] [i_1 + 4]))))));
                arr_5 [i_0] [i_1] = (((arr_0 [i_1 + 2] [i_1 + 2]) * (!6585)));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 = (min(var_15, (((-(((-86 <= (var_6 == -6379548079335307731)))))))));
                    var_16 -= 118;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((-(arr_0 [i_1 + 3] [i_1 - 1])));
                        var_17 += ((+((var_5 ? (arr_9 [i_1]) : (arr_4 [i_1] [i_2])))));
                        var_18 += 0;
                    }
                    arr_12 [1] [i_2] [i_2] = var_9;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_19 = (min(var_19, (arr_10 [i_0] [i_1] [i_1] [i_0] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((arr_16 [i_0]) ^ var_4)))));
                                var_21 = (max(var_21, (arr_18 [i_1 + 2] [i_5 - 1])));
                                var_22 -= arr_18 [i_0] [i_1];
                                arr_21 [i_0] [i_1 + 1] [i_5] [i_5] = var_4;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_24 [i_7] [i_7] [i_1] [i_7] = ((-(((arr_0 [i_0] [i_1]) / var_7))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((-(arr_4 [i_7 - 2] [i_7 - 2]))))));
                                arr_30 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_24 = (((arr_28 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_7 + 1]) + var_5));
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_25 = (min(var_25, 1));
                                var_26 = (max(var_26, (((var_2 ^ (arr_25 [i_10] [i_10 + 2] [i_10 - 2]))))));
                            }
                        }
                    }
                    arr_37 [i_10] &= (arr_3 [i_0] [i_1 + 2] [i_1 + 2]);
                    arr_38 [i_0] [i_0] [i_0] [i_1] = var_11;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_27 += (((((var_11 < (arr_43 [i_13 + 1] [i_1] [i_13 + 1] [i_14 - 1] [i_13] [i_13])))) >> ((((arr_43 [i_13 + 1] [i_13 + 1] [i_14] [i_14 + 2] [i_1] [i_13 + 1]) > (arr_43 [i_13 + 1] [i_13 + 1] [i_0] [i_14 + 1] [i_0] [i_14]))))));
                            var_28 = (min(var_28, (5860 % 3488449959)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
