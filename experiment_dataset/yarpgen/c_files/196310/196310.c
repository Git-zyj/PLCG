/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_0] &= (((min((min(var_11, (arr_3 [i_0]))), (max(var_2, var_8)))) * var_1));
                        var_13 -= (max((min((arr_9 [i_2] [i_2] [i_0 - 2] [i_0 - 1] [i_0]), (arr_0 [i_1] [8]))), (min(3142536387, (arr_0 [i_0 + 1] [i_0 - 2])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_0] [6] [i_0] [i_0] [i_1] [6] |= ((!(arr_7 [i_3])));
                            var_14 -= (((arr_6 [i_0]) ? (arr_6 [i_4]) : var_9));
                            var_15 = ((109 ? 3142536389 : (arr_0 [i_0 - 1] [i_2])));
                            arr_15 [i_0] [i_2] [2] [6] [i_3] [i_4] = ((arr_13 [i_0] [i_0] [i_0] [i_2] [i_0 + 1] [i_0] [i_0]) ? 18446744073709551615 : (var_11 + var_4));
                            var_16 += (((arr_7 [i_3]) ? var_5 : (arr_7 [i_3])));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_17 = ((var_6 ? (((arr_17 [i_0 - 2] [i_0] [i_2] [i_2] [i_5] [i_2] [i_0 + 1]) | var_1)) : var_8));
                            var_18 = ((min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_2]), var_6)));
                            arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] [2] = (((arr_4 [i_0]) ? (min(((var_5 ? (arr_16 [i_2] [i_2] [i_3] [i_2] [i_1] [i_0]) : var_8)), (arr_2 [i_1] [i_0 - 1]))) : (arr_19 [i_1] [i_3] [9] [i_1] [i_2] [5])));
                        }
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 = 4676416687027833398;
                            var_20 &= (max((min(var_1, var_2)), (max((arr_2 [i_6 - 1] [i_6 + 2]), (arr_2 [i_6 - 1] [i_6 + 2])))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_21 -= ((~(arr_23 [i_2] [i_2] [i_2] [i_0] [i_2])));
                            arr_31 [10] [i_1] [i_2] [i_6 - 1] [i_2] = (max(var_7, (min(-var_1, var_9))));
                            arr_32 [8] [i_1] &= (max((max(1152430908, 1769632963)), (max((arr_22 [9] [9] [9]), (arr_13 [i_8] [0] [i_1] [i_0] [i_0] [i_1] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_36 [i_0] [i_2] [i_2] [2] [i_0] [i_0] [4] = (((arr_0 [i_0 - 2] [i_0 - 2]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_9] [10]) : (arr_11 [i_6] [i_6] [i_6] [i_6] [4])));
                            var_22 = 13770327386681718217;
                            var_23 -= ((!(arr_8 [i_0] [i_0 - 1] [i_1] [i_6 - 1] [i_0 - 1])));
                            var_24 = ((((((arr_34 [i_0] [i_0] [i_2] [i_6 + 2] [i_9]) ? (arr_34 [i_0] [i_0] [i_2] [i_0] [i_2]) : (arr_0 [i_0] [i_0])))) ? var_9 : (arr_18 [i_0 - 1] [i_0 - 1] [i_9] [i_9] [i_6 - 1] [i_2])));
                        }
                        arr_37 [i_2] [i_2] = (arr_25 [i_2] [i_2]);
                    }
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_2] = ((~(var_2 % var_5)));
                        var_25 = ((((((((4676416687027833402 ? var_10 : 4676416687027833398))) ? 3142536389 : (arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [9])))) ? var_10 : ((var_7 ? (arr_2 [i_0 - 1] [i_0 + 1]) : 1152430908))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_44 [i_1] [i_1] [i_2] = -22;
                        var_26 = (((arr_29 [i_0] [i_1] [i_0 - 2] [i_11] [i_0]) ? (arr_29 [i_2] [6] [i_0 - 2] [i_11] [i_0 - 2]) : (arr_29 [i_0 - 1] [0] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        arr_45 [2] [i_2] = ((!(arr_6 [i_2])));
                    }
                    arr_46 [i_2] [i_1] = (min(3142536387, (arr_23 [i_2] [i_2] [i_1] [i_2] [i_0 - 1])));
                    arr_47 [i_2] [10] [i_2] = var_6;
                }
            }
        }
    }
    var_27 = (min(var_8, (((~var_8) ? (max(var_9, var_12)) : var_2))));
    var_28 = var_3;
    var_29 |= ((((min(var_4, (var_8 || var_10)))) ? ((min(var_1, var_3))) : var_0));
    #pragma endscop
}
