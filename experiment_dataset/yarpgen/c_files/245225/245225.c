/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1890328941;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_18 = (((((var_1 != (arr_1 [i_0] [0])) ? ((var_10 ? var_7 : (arr_10 [i_0] [i_0 - 2] [i_1 - 2] [i_2 - 1] [i_3 + 1] [i_0]))) : (((arr_10 [i_3] [i_2 - 3] [i_1 + 3] [i_0 - 1] [i_0] [i_0]) ? (arr_0 [i_3]) : -911174795))))));
                        arr_11 [1] [i_3] [i_0] [1] = ((((-1890328942 - -12) ? (min((arr_4 [i_0]), (arr_4 [i_2 - 1]))) : (max(-1890328951, var_4)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        arr_14 [i_0 - 3] [1] [i_0] [i_0] = var_15;
                        arr_15 [i_0] [i_1 + 2] [i_1 + 2] [i_2] [i_4] [i_4] = (((((var_10 ? var_16 : var_15))) ? 0 : var_0));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            var_19 = ((1890328941 ? 911174811 : -1890328941));
                            var_20 = (max(((((arr_1 [i_0] [i_1 + 3]) ^ ((var_7 ? -1890328937 : (arr_19 [i_0] [i_1] [i_0] [2] [i_5] [i_6])))))), (~var_0)));
                            arr_21 [i_6] [i_0] [i_0] [i_0] [i_0] = (((max(1, -1890328937))) ? (((arr_17 [i_6] [i_5] [i_2 - 3] [i_1]) ? (arr_17 [5] [i_1 + 2] [i_2 - 2] [i_5]) : (arr_6 [i_0 - 4] [i_5] [i_0 - 4]))) : (arr_13 [i_0 - 1] [i_1 + 2] [i_2 - 3] [i_5]));
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6 + 2] = (arr_7 [i_0] [i_2] [i_2] [i_6]);
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            var_21 = (var_1 > var_10);
                            var_22 = (min(var_22, var_2));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_30 [i_0] [i_2] [i_2 - 3] = ((1 || (arr_29 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 3])));
                            arr_31 [i_0] [i_5] [i_2] [i_1] [i_1] [i_0] = ((((1 ? 1890328932 : (arr_29 [i_0 - 3] [i_2 + 1] [i_0] [i_8]))) > (911174801 >= var_6)));
                            arr_32 [i_8 - 2] [i_5] [i_0] [i_0] [i_1 + 3] [i_0] = -21;
                            var_23 = -1890328937;
                        }
                        var_24 += ((var_8 ? (arr_13 [3] [i_0] [i_1] [i_0]) : (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                        var_25 = (min(var_25, (((-var_4 ? var_7 : ((13 ? var_9 : (arr_28 [i_1] [0] [i_2] [i_5] [i_5] [i_5]))))))));
                        var_26 = var_6;
                        arr_33 [i_0] = (max((max((arr_6 [6] [i_1 - 2] [i_2 - 1]), var_13)), (arr_1 [i_0] [i_0])));
                    }
                    arr_34 [i_0] [8] [i_0] = var_16;
                }
            }
        }
    }
    #pragma endscop
}
