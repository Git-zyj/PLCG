/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(var_4, var_6))) ? var_5 : -4258524905575060032)));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = ((arr_1 [i_0 + 1]) / ((((arr_1 [i_0 - 2]) / (arr_1 [i_0 - 2])))));
        arr_2 [i_0] = -4258524905575060045;
        var_12 = var_2;
        arr_3 [i_0] = arr_0 [i_0 - 2];
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_13 = (min(var_13, var_4));
        var_14 = 0;
        arr_7 [i_1] = (((arr_5 [i_1 - 2]) & (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (min((arr_8 [i_1] [11]), (arr_5 [i_2])));
            arr_10 [18] [i_2] = (min(var_1, (arr_9 [5])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_16 = (min(var_16, (((((var_5 > (((arr_16 [i_1] [i_1] [i_1] [i_5]) * (arr_19 [i_1] [i_1] [i_1] [i_4 - 1] [i_4] [i_5]))))) ? 1 : (arr_14 [i_3 + 1] [i_4 - 1] [i_5]))))));
                            var_17 = (arr_9 [i_4]);
                            var_18 = (((arr_15 [i_1] [i_1] [i_3] [2] [i_5]) ? var_6 : ((((!(arr_16 [i_3 + 3] [i_3 + 1] [i_3 - 1] [i_3 - 1])))))));
                            arr_20 [i_5] [i_5] = var_9;
                            var_19 |= (min((max((arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_3]), ((1 ? 4258524905575060031 : var_4)))), 1));
                        }
                        var_20 = (arr_15 [i_4] [9] [i_2] [i_2] [9]);
                        arr_21 [i_1] [i_2] [i_3] [i_4] [i_3] [i_3] = 754327173;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 = (min(var_21, var_7));
            var_22 = (min(var_22, 816435329));
            var_23 = (-32767 - 1);
        }
        var_24 = max((arr_13 [14] [i_1] [i_1 - 2] [i_1 - 2]), var_5);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_25 = (max(var_25, (((((9223372036854775807 ? (arr_26 [i_7] [i_7]) : var_7)) & (((arr_26 [i_7] [i_7]) ? (arr_26 [i_7] [i_7]) : 1)))))));

        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            var_26 = ((max(((((arr_27 [i_7] [i_7] [i_7]) & (arr_29 [i_7] [i_7])))), (arr_26 [i_7] [i_8 - 1]))));

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_27 = (min(var_27, ((min(var_3, (max(-754327174, (arr_33 [i_8 + 1] [i_8] [i_8 - 1]))))))));
                var_28 |= 754327169;
                arr_34 [i_7] [i_7] [i_7] = (32767 == 4258524905575060028);
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_29 -= var_8;
            arr_38 [i_7] = -113040588;
            var_30 = (-12398 ? (arr_30 [i_10] [i_7]) : (arr_30 [i_7] [i_10]));
            var_31 = (((arr_35 [i_7] [i_7] [i_7]) <= (arr_35 [i_10] [i_10] [i_7])));
            var_32 = var_7;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_33 = (arr_43 [i_7] [i_13]);
                    arr_49 [i_7] [i_7] [i_11] [i_11] [i_13] [i_13] = (((arr_33 [i_12] [i_12] [i_12]) / (~var_2)));
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_34 = (max(var_34, var_0));
                    var_35 = 2147483647;
                }
                for (int i_15 = 2; i_15 < 22;i_15 += 1)
                {
                    var_36 = (min(var_36, var_6));

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_59 [18] [i_7] [i_7] = var_7;
                        var_37 = 1;
                        var_38 *= 3906156706993537703;
                    }
                    arr_60 [i_7] [i_11] [i_7] [i_15] = var_7;
                    var_39 = ((626645701 ? 32766 : 1));
                    arr_61 [i_7] [i_11] [i_11] [i_7] = 27677;
                }
                arr_62 [i_7] [i_11] [i_7] = (((((1 >> (((arr_47 [i_7]) + 1153303037))))) ? -1646799487 : (!3954811287577096196)));
                var_40 = (32011 ? (((arr_27 [i_7] [i_11] [11]) - (arr_35 [i_7] [i_11] [i_12]))) : (arr_36 [i_7] [i_11] [i_12]));
            }
            arr_63 [i_7] [i_7] [i_11] = (((arr_57 [i_7] [i_7] [i_7] [i_7] [i_7]) | (arr_31 [i_11] [i_7])));
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {

            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                arr_69 [i_7] [i_7] [16] = var_3;
                arr_70 [i_17] [i_7] [i_18 + 2] [i_7] = (max((max(var_5, var_6)), ((min(3954811287577096217, -7555605449426951505)))));
            }
            var_41 = (min(var_41, ((max(8388606, (!-754327174))))));
        }
    }
    var_42 &= var_4;
    #pragma endscop
}
