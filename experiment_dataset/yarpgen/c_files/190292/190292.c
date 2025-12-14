/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (var_11 % var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_20 = (arr_7 [i_2] [i_1]);
                        var_21 = ((-(~-21)));
                        arr_10 [i_3] = var_13;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [i_4] [i_1] [i_1] [i_4] = ((var_2 / ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_2] [i_0] [i_0]) : (arr_4 [i_0] [i_2] [i_4]))))));
                        arr_14 [i_0] [i_0] [i_4] [i_0] [i_4] = (((((min((arr_4 [i_0] [i_1] [i_4]), var_14)) * (!0))) | 7));
                        var_22 = 0;
                        var_23 = (min(((var_1 ? ((((arr_0 [i_1]) ? (arr_6 [i_2]) : 3))) : (arr_9 [i_1]))), -7842124577808772694));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_24 -= -65526;
                            arr_21 [i_2] = (((arr_8 [i_5] [i_6] [i_6 - 2] [i_6] [i_6 - 1] [i_5]) ? (var_15 & var_16) : 7323157743475963251));
                            var_25 = (max(var_25, (((~(arr_15 [3] [3] [i_2] [i_6 - 1] [i_6] [i_6 - 2]))))));
                            arr_22 [i_0] [5] [i_0] [i_0] [i_0] [i_0] = (!var_5);
                        }
                        var_26 = var_4;
                        var_27 = ((!(arr_0 [i_0])));
                    }
                    arr_23 [i_0] [i_0] [i_0] = ((!(!18446744073709551611)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_28 = (((((3488040301 | 1) == var_12)) ? -29991 : var_2));
                                var_29 += 18446744073709551611;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 += var_8;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_35 [i_9] [i_9] = var_11;
                arr_36 [i_9] = ((-((10604619495900778921 ? 30 : 10604619495900778921))));
                arr_37 [i_9] = ((-((~(arr_8 [i_9] [i_9] [17] [10] [i_10] [i_9])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_31 += (-77 ? (min(((max((arr_31 [8]), var_13))), (var_11 * var_18))) : var_2);
                            var_32 -= (max((min((!var_15), var_16)), ((((arr_28 [i_10] [i_12] [i_10] [i_10] [i_12 + 2] [i_12 + 1] [i_12 - 2]) ? ((((-2147483647 - 1) ? 96 : var_1))) : ((var_13 ? (arr_7 [i_9] [i_9]) : var_9)))))));
                            var_33 = (min(var_33, ((((~(max(var_18, 65535))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
