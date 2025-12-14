/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_0 [6])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 &= (arr_6 [i_0] [i_1] [i_2] [7]);

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_22 = (min(var_22, (arr_1 [0])));
                            var_23 &= (2649011300750133773 ? 1656853467738755020 : 16789890605970796595);
                            var_24 = ((0 ? 0 : 1964464107));
                            var_25 = ((!(arr_4 [i_0])));
                            arr_13 [i_0] [i_3] [i_1] [i_2] [6] [i_3] [6] |= ((((!(arr_2 [i_2]))) ? var_16 : (((arr_6 [i_3] [i_2] [i_1] [i_0]) ? var_8 : var_18))));
                        }
                        var_26 = ((!(arr_1 [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] = 2758098614;
                        var_27 = var_19;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (arr_5 [i_7] [i_8])));
                            arr_29 [i_0] [i_0] [18] [i_8] [i_7] [i_0] |= (((arr_20 [i_7]) ? 1656853467738755020 : ((((!(arr_27 [17] [i_1] [i_1] [i_1] [i_1])))))));
                            var_29 = (min(var_29, (16789890605970796595 && 1656853467738755020)));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_30 -= (!5);
                            var_31 += ((((((arr_16 [i_0] [i_1] [i_0] [i_0]) ? 2928649792 : (arr_10 [i_7] [i_7] [i_7] [1])))) ? var_15 : var_9));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_32 |= (arr_32 [i_0] [i_1] [i_0] [i_11] [i_11]);
                            arr_34 [i_0] = ((!((((arr_30 [i_7] [i_7]) ? (arr_33 [i_0] [i_0] [i_7] [i_7]) : var_8)))));
                        }
                        var_33 = (((((4294967286 ? var_3 : -11902))) ? ((5189418134872041728 ? 16789890605970796595 : 1656853467738754999)) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_34 = (((arr_11 [i_12 - 1] [i_12 + 2] [i_12 - 1]) < (arr_11 [i_12] [i_0] [i_0])));
                var_35 = (((var_15 ? var_13 : 1656853467738755020)));
                var_36 |= (arr_24 [10] [10] [i_12 - 1]);
            }
            for (int i_13 = 3; i_13 < 16;i_13 += 1)
            {
                var_37 = (min(var_37, (arr_38 [i_13] [i_1] [17] [17])));
                var_38 |= var_0;
                var_39 &= (arr_23 [i_0] [i_0] [10] [6] [i_0]);
                var_40 = ((!(arr_18 [i_13 - 1] [7] [i_0] [i_13])));
            }
        }
    }
    var_41 += (max(((!(((2758098614 ? 2100893043 : var_17))))), var_19));
    var_42 = (!var_5);
    var_43 = ((var_1 ? (max((var_9 == var_10), (max(18446744073709551597, var_4)))) : ((((((981999438 ? var_17 : 1))) | (max(127, -1)))))));
    #pragma endscop
}
