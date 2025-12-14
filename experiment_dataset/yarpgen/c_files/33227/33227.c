/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_6 ? var_2 : ((var_4 ? ((max(var_3, var_0))) : (min(var_1, 26)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [19] [i_1] [i_2] [i_0] [22] [20] [i_0] = var_6;
                            var_16 = var_14;
                            var_17 = var_11;
                            arr_13 [4] [i_0] [12] = ((((((arr_1 [i_0] [i_0]) ? (arr_4 [i_2] [i_2] [i_4]) : (arr_9 [1] [17] [1] [1])))) - (((arr_10 [1]) * (arr_1 [i_3] [i_4])))));
                        }
                        var_18 = (((((((var_8 & (arr_9 [i_0] [7] [7] [20]))) * (max(var_2, (arr_0 [12] [i_0])))))) % ((-(arr_7 [1] [i_1 + 1] [i_2])))));
                        arr_14 [i_0] [i_1] [i_2] [1] = ((min((arr_6 [i_0] [i_1 + 1] [i_3]), (max((arr_6 [i_0] [i_1] [i_1]), var_5)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [1] [13] [16] [1] = 2147483647;

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [13] [i_1] [13] [i_0] [i_1] [i_1] = ((var_14 ? var_2 : 0));
                            arr_22 [i_0] [16] [i_2] [i_5] [9] = (arr_1 [i_1 - 2] [i_1 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_1] [2] [9] [i_1] = (!var_0);
                            var_19 = var_3;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_20 = (min(var_20, (arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1])));
                            arr_29 [i_0] [i_1] [i_1] [i_0] [i_8] = ((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]));
                            var_21 = (var_12 % var_1);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_22 *= (var_11 | var_2);
                            arr_33 [i_0] [i_0] [i_0] [11] [i_0] [1] = -1824805373;
                        }
                        var_23 = (arr_0 [i_1 + 1] [i_0]);
                        arr_34 [13] [i_0] [13] [i_0] [i_0] = (((arr_20 [i_1] [i_1 + 2]) - (arr_4 [i_1 - 2] [i_1] [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_1] = (arr_6 [i_0] [i_1] [14]);
                                arr_41 [i_0] = (((~((10671008535620180728 ? (arr_20 [i_0] [i_0]) : var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
