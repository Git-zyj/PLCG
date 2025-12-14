/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = ((((var_13 + 2147483647) << (((((arr_0 [i_0]) + 3398580671258029)) - 26)))) - var_15);
        arr_2 [i_0] = ((1521081089 ? 1 : 65535));
        var_20 = (min(var_20, (((+((-(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 65535)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, 2773886207));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_22 = (max(var_22, (!2773886207)));
                        arr_13 [i_4] [4] [i_2] [5] [5] = (((arr_10 [5] [i_2] [i_3] [i_4]) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4]) : var_6));
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_18 [i_6 - 1] [i_2] [i_2] = (((65535 ? 2773886207 : (arr_1 [6] [6]))));
                            var_23 = (!-1);
                            var_24 = (((arr_14 [0] [i_6] [1] [i_6 - 1] [i_6 - 1]) ? 111 : (arr_14 [8] [8] [8] [i_6 - 1] [i_6 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (((arr_17 [i_7]) + var_8));
                            arr_21 [i_1] [i_2] = (arr_19 [i_1] [9] [i_1] [i_1]);
                        }
                        arr_22 [i_1] [i_3] [i_2] [i_1] = (((arr_4 [i_5 + 1]) ? (arr_4 [i_5 - 1]) : (arr_10 [i_5] [i_5 - 2] [i_5 + 1] [i_5])));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        arr_25 [i_1] [i_2] [i_1] = (((0 ? 2773886208 : -1312959239)));
                        var_26 = (max(var_26, (arr_19 [i_8 - 2] [i_8 + 1] [i_8 + 1] [4])));
                    }
                    arr_26 [0] [i_2] [i_3] = (arr_17 [i_1]);
                }
            }
        }
    }
    var_27 = ((((((8388607 ? -1 : var_6)) ? var_13 : 25))));
    #pragma endscop
}
