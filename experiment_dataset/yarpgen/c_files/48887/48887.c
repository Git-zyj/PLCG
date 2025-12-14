/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_12 = (-32767 - 1);
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (min((arr_2 [i_1 + 1]), (min(((var_9 / (arr_4 [i_2] [i_0]))), ((~(arr_7 [i_0] [i_1 - 1] [19])))))));
                        var_13 = (!(((!var_2) >= (min(var_3, (arr_0 [i_0] [1]))))));

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_14 = (!((max(((((arr_1 [i_0]) == var_11))), ((var_6 ? -1334804201473726935 : var_1))))));
                            var_15 = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [6] [i_2 + 3]) : (((arr_5 [i_2 + 3] [i_2] [i_2 + 1]) ? (arr_5 [i_2 - 1] [3] [i_2]) : (arr_8 [i_1 - 1] [i_2 + 3] [i_3] [i_1 - 1])))));
                            arr_13 [i_0] [i_4] [16] [i_0] [i_0] [i_0] [i_0] = 0;
                        }
                        var_16 = (min(((min((arr_3 [i_0] [i_2] [19]), (arr_1 [i_0])))), 7865131594433357992));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [17] [17] [i_5] [i_5] = (((arr_3 [i_1] [i_2] [14]) ? (arr_9 [i_0] [i_0] [i_1 - 1] [6] [i_0]) : (((!(arr_12 [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_5]))))));
                        var_17 = arr_11 [i_2] [10] [i_0];
                        var_18 = (~(min(((min((arr_0 [1] [1]), var_9))), (max(-117, 1377094970)))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [15] [7] [7] [i_5] [i_6] = ((!(arr_3 [i_0] [i_0] [i_6])));
                            var_19 = 6;
                            arr_20 [i_6] [9] [1] [i_0] [i_0] = (((((arr_0 [i_1 - 1] [i_2 + 1]) ? (arr_9 [i_1] [i_1] [i_1 + 1] [i_1] [i_2 + 1]) : (arr_0 [i_1 - 1] [i_2 + 3])))) > 7865131594433357992);
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_20 = -26832;
                            arr_24 [i_0] [i_0] [i_2] [16] [i_7 - 1] [i_7] = (arr_4 [i_0] [21]);
                            arr_25 [i_7] [i_1 + 1] [i_7] [8] [i_1 + 1] [i_7 + 2] = (~-24147);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_21 = arr_26 [i_8] [i_8];
                            arr_28 [i_0] [i_1] [i_8] [i_8] = (var_4 ^ 1);
                            var_22 = (((((var_9 ? (arr_0 [i_1 - 1] [i_2 + 2]) : var_2))) ? ((min((arr_9 [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_2]), (arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2])))) : -9065));
                            var_23 = var_3;
                        }
                    }
                    var_24 = (((arr_12 [i_0] [i_0] [i_0] [8] [8]) ? var_11 : (((!(((var_2 ? (arr_11 [i_0] [i_0] [i_0]) : var_0))))))));
                }
            }
        }
        arr_29 [i_0] = ((~(arr_0 [i_0] [i_0])));
        arr_30 [i_0] [i_0] = ((27482 ? -7865131594433357986 : -128));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_33 [i_9] = (min(((min((!var_9), (max((arr_0 [i_9] [i_9]), var_0))))), (min(((116 % (arr_14 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9]))), ((-7865131594433358010 ? (arr_14 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9]) : (arr_14 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1])))))));
        arr_34 [i_9] [2] = (arr_1 [i_9]);
    }
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                {
                    var_25 = (max(((~(arr_40 [i_10] [i_10] [i_10]))), ((min(var_4, (arr_35 [i_10 + 1] [i_10 + 2]))))));
                    var_26 = (!19216);
                }
            }
        }
        arr_42 [i_10] [i_10] = (max((((!(arr_35 [i_10] [i_10])))), ((~(var_7 == var_10)))));
        var_27 = min((((-111 + 2147483647) >> (arr_38 [i_10 + 3] [i_10 - 1] [8]))), (((!(-16093 == var_1)))));
    }
    var_28 = var_11;
    #pragma endscop
}
