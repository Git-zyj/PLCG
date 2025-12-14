/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-3, var_6));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (min((!-var_4), var_1));
        arr_3 [i_0] [i_0] = (((((var_6 ? var_12 : var_3))) ? (arr_2 [i_0] [i_0]) : 127));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_17 = (arr_6 [i_1 - 1] [i_1 - 1]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_1 - 2] [1] [i_2] = (((234 < 45) ? ((((var_10 < var_11) < ((var_13 % (arr_1 [i_1] [i_2])))))) : (!var_1)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 = (!var_12);
                        var_19 = var_6;
                    }
                }
            }
        }
        arr_18 [i_1 + 1] = (max((((arr_6 [i_1 - 4] [i_1 - 4]) + (arr_6 [i_1] [i_1 - 4]))), (arr_6 [i_1] [i_1 - 4])));
        var_20 = var_5;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_21 = var_13;

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_28 [i_7] [i_6] [i_6] = ((var_4 * (!1)));
                        var_22 = (arr_1 [i_5] [i_7 - 1]);
                    }
                    var_23 = var_4;
                    arr_29 [i_6] [i_7] [i_7] = var_7;

                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_24 = (var_0 ? ((((min((arr_19 [i_7 - 1]), var_10))) ? var_7 : var_8)) : var_5);
                        var_25 = ((-27877 ? 0 : (arr_31 [i_7 + 1] [i_9 + 2] [i_9 + 4] [i_9 + 1])));
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        arr_37 [i_5] [i_10 + 1] [i_5] [i_7] = ((~(arr_31 [i_5] [i_7 - 1] [i_10 + 1] [i_10 + 1])));
                        arr_38 [2] [i_6] [i_7] [i_10 + 1] [12] [i_10 - 2] = (arr_20 [i_5]);
                        arr_39 [i_7] [i_7] [i_6] [i_7] = 55;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_44 [i_5] [i_5] [i_7] [i_11] [16] = ((max(var_4, (arr_36 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]))));
                        var_26 = min((arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1]), (min((arr_35 [i_7 - 1] [i_7 - 1] [i_7 + 1]), var_12)));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_47 [i_5] [1] [i_7] [i_7] = (var_3 >= var_12);
                        arr_48 [i_5] [i_7] [i_7 + 1] [10] = 1;
                        arr_49 [i_5] [i_5] [i_5] [i_7] [i_7] = (min((arr_32 [i_7 - 1] [i_7] [i_7] [i_7]), (((!(arr_32 [i_7 - 1] [i_7] [i_7] [i_7]))))));
                        var_27 = (((arr_27 [i_5] [6] [i_5] [i_5] [i_7] [i_12]) <= (((arr_27 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_12]) ? (arr_2 [i_5] [i_7 - 1]) : var_4))));
                    }
                }
            }
        }
        arr_50 [i_5] = (arr_23 [i_5] [11] [1]);

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_54 [i_5] [11] = var_13;
            var_28 = ((((arr_30 [i_5] [i_13] [i_13] [i_5]) ? (arr_30 [i_13] [i_13] [i_13] [i_5]) : (arr_30 [i_5] [i_5] [i_13] [i_13]))));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_29 = (((~var_10) <= var_8));
            var_30 = (arr_35 [i_14] [i_14] [i_5]);
            var_31 = 12376138081709453947;
            arr_59 [11] [i_5] [1] = var_5;
            arr_60 [i_5] = (arr_26 [i_14] [i_14] [i_14] [i_14]);
        }
        var_32 = ((var_2 ? ((var_13 ? var_6 : (!0))) : ((max(var_9, (arr_2 [13] [i_5]))))));
    }
    for (int i_15 = 1; i_15 < 22;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_66 [8] [i_16] = var_7;
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_76 [i_19] [i_18 + 1] [i_17 - 3] [i_16] [i_15 + 2] [i_15 + 2] = (arr_63 [i_19] [i_15 - 1]);
                            arr_77 [17] [i_16] [i_16] [15] [i_16] = var_2;
                            var_33 = (var_3 && var_6);
                            arr_78 [i_19] [i_18] [i_17 - 1] [1] [i_15] = var_4;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            arr_88 [i_15] [i_20] [i_20] [i_20] [i_15 + 2] = var_6;
                            var_34 = ((((21513 ? 173 : 44035)) >= -18122));
                            arr_89 [i_20] [i_15] [i_16] [13] [18] = var_1;
                        }
                    }
                }
            }
        }
        arr_90 [i_15] = var_0;
    }
    #pragma endscop
}
