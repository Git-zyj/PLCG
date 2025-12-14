/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (arr_5 [i_0] [i_1] [i_2]);
                        arr_12 [1] [1] = (((arr_1 [i_0]) <= (!-428615939)));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (max(((min(1, (!3853599735582534005)))), 0));
                        arr_14 [i_0] [i_1] = ((~(arr_6 [i_0] [1] [i_2] [i_3 - 1])));
                    }
                }
            }
        }
        var_10 = (max(((max(1017494511, -1017494530))), (((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        var_11 = arr_4 [i_4] [i_4 + 1] [i_4];

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_12 = (arr_18 [i_4] [i_4 + 1]);

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_29 [i_4 + 1] [i_4 + 1] [21] [i_8] = arr_22 [i_4] [i_6] [i_6] [i_6] [i_8] [i_5];
                            arr_30 [i_4 + 1] [i_5] [i_7] [i_6] [i_5] = ((1 ? -23 : 1017494516));
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4] |= ((-(arr_26 [i_4] [i_4] [i_6] [i_6] [i_4] [i_9])));
                            arr_34 [i_9] [1] [i_6] [i_5] [i_4] = (((((arr_8 [i_9 + 3] [1] [i_4]) ? (arr_19 [i_5] [1]) : (arr_31 [8])))) ? ((1 ? (arr_7 [1] [i_4] [17] [17]) : (arr_28 [i_4] [i_5] [i_6] [i_7] [i_5]))) : 1);
                            var_13 = ((3481956989 ? (arr_28 [i_9 + 2] [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_9]) : 1));
                            arr_35 [i_4 + 1] [i_5] [i_6] [3] [i_9 + 3] = (((arr_23 [21]) ? (arr_21 [i_5] [i_5]) : ((((arr_6 [i_6] [i_6] [i_5] [1]) / (arr_25 [1] [i_5]))))));
                            var_14 = (arr_27 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_40 [i_10] [i_7] [i_6] [i_5] [1] [i_4] = (arr_20 [i_10] [i_4] [7] [i_4]);
                            var_15 = (arr_27 [i_5] [i_5] [i_6] [i_5] [i_5] [i_6] [i_10]);
                            arr_41 [i_10] [i_7] [i_6] [i_5] [i_6] [i_5] [17] = (arr_1 [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_46 [i_4] = var_9;
                            arr_47 [i_11] [1] [i_7] [i_6] [i_6] [i_5] [i_4] = (arr_23 [i_4 + 1]);
                            var_16 = (max(var_16, ((((arr_31 [i_4 + 1]) ? 1 : (arr_2 [13] [i_6] [i_11]))))));
                            arr_48 [i_4 + 1] [i_4 + 1] [i_4] [2] [i_4 + 1] = 67882599759729542;
                        }
                        var_17 = -3780144058;
                    }
                }
            }
            arr_49 [i_4] = (arr_10 [i_4 + 1]);
            arr_50 [i_4] [3] = ((arr_27 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5] [i_5] [20] [i_5]) ? (arr_23 [i_4 + 1]) : (arr_27 [i_4 + 1] [i_4 + 1] [i_4 + 1] [17] [i_4 + 1] [i_4 + 1] [i_4 + 1]));
            arr_51 [i_4] = (arr_15 [i_4 + 1] [i_4]);
        }
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            var_18 = (max(var_18, 3283838401));
            var_19 = (((arr_28 [i_4] [i_12 + 2] [22] [i_12] [i_4]) ? (arr_10 [i_12]) : (arr_28 [i_4 + 1] [i_4] [6] [i_4] [17])));
            var_20 += (((arr_10 [i_4 + 1]) ? (arr_10 [i_4 + 1]) : (arr_10 [i_4 + 1])));
            var_21 = ((((-2654683359446374773 ? (arr_42 [i_4 + 1]) : var_1)) ^ (arr_26 [i_12] [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2] [1])));
        }
        arr_54 [i_4] = (arr_20 [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
    {
        var_22 = (!1017494513);
        var_23 = (min(var_23, ((((!(((1 / (arr_27 [i_13] [i_13] [18] [18] [i_13] [i_13] [18]))))))))));
        var_24 = (min(var_24, (arr_22 [i_13 + 1] [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_25 = ((+(min(1017494558, (max((arr_38 [8] [i_13 + 1] [i_13] [1] [i_13] [i_13] [i_13]), (arr_3 [i_13] [21])))))));
    }
    var_26 = (min(var_6, 28850));
    var_27 = (min(var_27, var_1));
    var_28 = var_0;
    #pragma endscop
}
