/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-var_4 ? var_19 : (min(var_10, var_17))))) ? var_1 : var_11);
    var_21 = ((~(var_13 / var_8)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = (((((~(~var_5)))) ? (((~(max(var_12, var_0))))) : (((arr_2 [i_0] [i_0]) - ((-(arr_2 [i_0] [i_0])))))));
        var_23 += (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_24 -= (min((((11276521372553398108 ? (arr_8 [10] [i_1 + 1] [1] [10]) : -32324))), (max(1610738813, (arr_7 [i_1 + 1] [i_1 + 1] [1])))));
                        var_25 = (min((min(((((arr_6 [i_2] [i_1] [6]) > var_17))), ((var_0 ? var_10 : var_11)))), (((var_16 && (2684228481 / 9660766506569886142))))));
                        var_26 = (max(var_26, ((min((((max(var_3, (arr_4 [i_3]))) + (((min(var_8, var_18)))))), var_7)))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] [i_1] = (~131071);
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = min((min(((var_12 ? (arr_11 [i_1] [i_1] [1] [i_1 + 1]) : var_17)), ((((arr_9 [i_1 - 1] [i_1] [i_1] [4]) / var_15))))), var_13);

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_27 = (min(var_27, var_17));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_24 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [7] = ((~((max((arr_21 [i_1]), (arr_6 [i_1] [i_1] [i_6 - 1]))))));
                            arr_25 [i_1 + 1] [i_1 + 1] [i_1] = ((((((min((arr_4 [6]), (arr_8 [i_1] [i_6 - 1] [i_5] [i_1])))) ? (arr_10 [i_6 + 1] [i_1 + 1] [i_1] [i_6 + 1]) : (arr_3 [i_1]))) / ((-(max(var_12, (arr_21 [i_1])))))));
                            arr_26 [i_1] [i_1] [i_6] = (min((((arr_17 [i_1] [i_1 - 1] [8] [i_1]) ? var_7 : var_16)), ((var_14 ? ((min((arr_10 [i_1] [i_1] [i_1] [i_7]), var_8))) : (!var_1)))));
                            arr_27 [i_1] [i_5] [i_1] [i_7] [i_8] = (((arr_22 [i_7] [i_1] [i_6] [i_8] [i_5] [i_1 - 1] [i_5]) ? (min(1500658402, 2684228483)) : (min(var_16, ((var_11 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : var_3))))));
                        }
                    }
                }
            }
            var_28 = (min((((min(var_11, var_7)) ? var_19 : (!var_11))), ((-((min(var_15, var_7)))))));

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                arr_30 [i_1 - 1] [i_1] [i_9] = (arr_3 [i_1]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_29 = ((!(((+((min((arr_15 [i_1]), var_19))))))));
                            arr_36 [i_1] [3] [i_1] = ((!((!(var_11 && var_1)))));
                            var_30 |= (((~2794308902) > var_1));
                            var_31 = (max(var_31, ((min(((~(~var_19))), (arr_3 [i_9]))))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_32 = (min(var_13, (arr_3 [i_1])));

            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                arr_44 [i_1] [i_1] [1] [i_12] = ((((min((arr_34 [i_1 - 1] [8] [8] [i_1] [i_1]), (arr_11 [3] [i_1] [i_13 - 1] [i_1 - 1])))) < (((var_9 ? var_13 : var_16)))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_50 [5] [9] [6] [i_14] [i_15] [2] [i_1] = (min((min(((((arr_15 [i_1]) < (arr_37 [i_1] [i_1])))), (var_12 & var_6))), ((-(var_6 / var_18)))));
                            var_33 = (min(var_33, (((~(min(((var_3 ? var_12 : var_2)), ((min(var_11, var_2))))))))));
                        }
                    }
                }
                arr_51 [i_1] [i_1] [i_1] [i_13] = var_18;
                var_34 = (max(var_1, (max(var_10, (arr_32 [i_1] [i_1] [i_1] [i_1])))));
            }
        }
    }
    for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] [i_16] = (~(max((((arr_53 [13] [i_16]) ? var_0 : (arr_52 [i_16]))), (((arr_52 [i_16]) & (arr_53 [i_16] [i_16]))))));
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {
                        var_35 = (min(var_35, ((min((arr_59 [i_18]), -var_0)))));
                        var_36 = (min(var_36, (((((max((arr_62 [i_17 + 2] [i_19] [i_17] [i_19] [i_17]), (arr_62 [i_17 - 2] [i_18] [i_17] [i_18] [i_17])))) ? (min((min((arr_58 [i_16 + 1] [i_19] [6] [i_19]), var_3)), ((max((arr_61 [4] [i_19]), (arr_60 [i_16] [i_17 - 2] [i_19] [i_19])))))) : ((min((arr_61 [i_19] [i_19]), ((var_14 ? var_2 : var_12))))))))));
                        var_37 = (max(var_37, (((+(((((min((arr_55 [i_19]), var_11))) || ((var_1 || (arr_60 [i_16] [i_16] [i_18] [i_16])))))))))));
                    }
                }
            }
        }
        var_38 = (min(var_38, (((0 / 233) != (min(((var_3 ? var_11 : var_0)), var_19))))));
    }
    /* vectorizable */
    for (int i_20 = 2; i_20 < 13;i_20 += 1) /* same iter space */
    {
        var_39 = ((arr_60 [i_20] [i_20 + 1] [i_20] [2]) ? (arr_60 [i_20 - 2] [i_20 - 1] [i_20] [i_20 - 2]) : var_14);
        var_40 = (-954009606 / 3661);
    }
    var_41 |= ((!((var_0 && (!var_8)))));
    #pragma endscop
}
