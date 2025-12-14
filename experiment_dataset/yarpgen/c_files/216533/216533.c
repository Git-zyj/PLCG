/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_8 & -var_15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = ((-(arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] = ((59603 ? 43 : 59598));
                    arr_8 [i_2] [i_1] [i_0] = var_11;
                }
                arr_9 [i_0] = (min((max((((var_5 <= (arr_1 [i_0] [i_1])))), (((arr_6 [i_0]) ? (arr_2 [9] [i_1] [i_0]) : (arr_6 [i_0]))))), ((((arr_2 [i_0] [i_0] [i_0 - 1]) ? (arr_2 [i_0] [i_1] [i_0 - 2]) : (arr_2 [i_0] [i_0] [i_0 - 2]))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] = -8828230228542537554;
                    var_20 = (arr_6 [4]);
                    var_21 = ((arr_4 [i_0] [i_1] [i_1] [i_0 - 2]) ? (arr_0 [i_0 + 1]) : var_10);
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_22 = ((43 ? (!4589318242988969664) : ((~(5938 && var_9)))));
                    var_23 = (min(var_23, ((min(((((arr_3 [i_0 - 1] [i_1] [i_4]) >= 2484614432251505453))), 5955)))));
                    var_24 = (arr_6 [i_0]);
                    var_25 = var_11;

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_26 = (((arr_0 [i_5 - 3]) == var_8));
                        var_27 = (arr_19 [18] [i_0 + 1] [i_5 - 1] [i_5 - 1]);
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] &= ((((2570 ? var_11 : (arr_4 [i_0 - 2] [i_1] [i_4] [i_5 + 1])))) ? ((var_17 ? var_13 : 57)) : (arr_14 [i_0] [i_1]));
                    }
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        var_28 = (max((arr_1 [1] [i_6 + 1]), -var_2));
                        var_29 = (arr_12 [i_0] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_30 = ((~(arr_5 [i_4] [i_1] [i_4] [i_7 - 2])));
                        var_31 = (((arr_17 [i_0 - 1]) ? (arr_3 [i_7 + 2] [i_0] [i_0 - 1]) : (arr_25 [i_7 - 2] [i_0 - 2] [i_0 + 1])));
                        var_32 = 59598;
                        var_33 = (~59592);
                        arr_27 [i_1] [i_1] [i_0 + 1] [i_7 + 1] = (((~var_5) | ((1 ? -9413 : (arr_12 [i_0] [13] [i_4])))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_34 = (~var_3);
                        var_35 = -var_0;
                        var_36 = (min(var_36, ((max((max((min((arr_23 [i_8] [3] [i_1] [i_0]), var_7)), 5941)), (arr_23 [i_8] [i_4] [i_0] [i_0]))))));
                        arr_31 [16] = ((((arr_15 [i_0 - 1] [i_1] [i_4]) + (arr_22 [i_0 - 2] [24] [i_4] [i_8] [2] [i_1]))));
                    }
                }
            }
        }
    }
    var_37 += (max((((var_9 > 5935) ? (~var_4) : -1948677564566862887)), 8252017931183982424));
    var_38 = ((var_1 ? var_16 : (!var_5)));
    #pragma endscop
}
