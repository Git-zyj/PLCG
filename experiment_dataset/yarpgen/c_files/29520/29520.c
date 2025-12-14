/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(32562, 4211928909));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            arr_12 [22] [i_1 - 2] [i_1] [i_2] [i_1 - 2] [i_4] = (((arr_5 [i_0] [0] [i_3]) ? (arr_10 [i_1] [i_1] [i_1] [i_1 - 2] [i_4]) : var_10));
                            var_14 = (min(var_14, ((((((35160 ? var_12 : var_10))) ? 32562 : 14582)))));
                            arr_13 [i_4] [i_1 - 2] [i_2] [i_1 - 2] [i_0] = -51983;
                            var_15 = ((((arr_10 [i_0] [22] [i_0] [i_3] [i_4]) ? (arr_5 [i_3] [i_2] [i_1]) : 54064)));
                        }
                    }
                }
            }
            arr_14 [i_0] [i_0] = 35160;
            arr_15 [i_0] [i_1 + 3] = ((54064 ? (arr_10 [i_0] [i_1] [i_0] [i_1 + 2] [i_0]) : (arr_10 [i_0] [15] [i_1] [i_1 + 2] [i_1])));
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_5 + 3] [i_6] [i_7] [i_5 + 3] [6] = (arr_22 [i_0] [i_5] [i_0] [i_7] [i_8] [i_0]);
                            arr_26 [i_0] = ((11471 && ((!(arr_19 [17])))));
                            var_16 = ((((((arr_0 [i_5 + 1] [i_5 + 3]) ? 12 : (arr_0 [i_5 + 1] [i_5 + 1])))) ? (min(11469, (arr_20 [i_5 + 1] [i_5 + 2]))) : ((min((arr_6 [i_5 + 4]), 32973)))));
                        }
                    }
                }
            }
            var_17 = (((arr_3 [i_0] [i_5 + 4] [i_5 + 1]) * ((((min(var_4, var_9))) * 18446744073709551603))));
            arr_27 [15] [i_5 + 2] = (max(((min((arr_1 [i_5 + 4] [i_5 - 2]), (arr_1 [i_5 - 2] [i_5 + 2])))), ((1492137305575146474 - (arr_1 [i_5 + 4] [i_5 + 3])))));
        }
        arr_28 [i_0] [i_0] = (6433612233157777007 / ((max(var_1, 2038925595))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((~((~(arr_4 [i_9]))))))));
        arr_31 [i_9] [16] = (arr_16 [i_9]);
        var_19 = (min(var_19, -1822847523));
        arr_32 [i_9] [i_9] = ((var_3 ? (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : ((((arr_21 [i_9] [i_9] [i_9] [6] [i_9] [i_9]) == (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_20 = (arr_34 [i_9] [i_9] [i_9]);

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_9] [i_10] [i_10] [i_11] = (((arr_8 [i_9] [i_10] [17] [i_12]) ? (arr_8 [i_12] [i_10] [i_11] [i_12]) : var_1));
                        arr_44 [i_9] [i_11] [i_9] = var_3;
                        var_21 = (min(var_21, (~-var_0)));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (arr_6 [i_9])));
                        arr_47 [i_9] [i_10] [i_11] [i_13] [i_13] [i_13] = ((((max((arr_45 [i_13] [i_11] [i_11] [i_11] [i_9] [i_9]), ((var_3 ? var_7 : 3355782071))))) ? ((((arr_16 [i_9]) / var_3))) : (arr_0 [i_11] [i_11])));
                    }
                    var_23 = (min((max(-var_2, (((arr_4 [i_9]) / 11320)))), 11471));
                    arr_48 [i_10] [i_10] [i_11] = (-32381 - 127);
                    var_24 += (min((((arr_9 [i_9] [i_9] [i_11] [10] [10]) ? (arr_7 [i_9]) : (arr_6 [i_9]))), (arr_9 [i_11] [i_10] [i_11] [i_10] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
