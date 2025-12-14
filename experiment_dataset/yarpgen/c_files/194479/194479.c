/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((max(1, (arr_0 [i_0]))));
        arr_3 [i_0] [15] = ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_17 = (max(var_17, ((max(((min((arr_5 [i_1 + 2]), 1))), ((1 ? -13431 : -8890734506590130398)))))));
            arr_8 [10] = 1;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_11 [i_3] [6] = (min((arr_4 [i_1]), var_11));
            var_18 = var_5;
        }
        var_19 = (min((min(2095598757, (min(var_1, (arr_5 [19]))))), 1));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_14 [13] [13] = (((((min((arr_4 [i_1]), var_5)) + (arr_5 [i_1 - 1])))) ? ((15 ? (arr_4 [i_1 + 2]) : (min(1627114724244049697, 473128101)))) : (~-482174995917309368));
            var_20 = ((((((1 / (arr_6 [2] [i_4])))) ? (((var_7 ? var_10 : 31))) : ((~(arr_5 [i_1 + 1]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        var_21 = (min((arr_6 [i_1 + 2] [i_1 + 2]), (max((arr_6 [i_1 + 2] [i_4]), (arr_6 [i_1 + 1] [i_4])))));
                        var_22 = (min(var_22, ((((((-((-(arr_12 [i_5])))))) ? ((var_12 ? var_10 : (max(var_9, (arr_4 [i_1]))))) : (arr_18 [i_1 - 1] [i_1]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            var_23 = ((var_3 / ((var_7 ? (arr_18 [1] [i_7]) : (arr_7 [i_1] [i_1])))));
            var_24 = (((((arr_16 [i_1] [i_7]) ? (arr_22 [i_1]) : 16819629349465501918)) < (var_13 ^ 268369920)));
            var_25 = (((((arr_15 [i_1]) + var_9)) - (arr_20 [i_7] [i_1] [i_1])));
            var_26 &= ((~(arr_16 [i_1] [i_7 - 2])));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 = (max(var_27, (((-1033780375701923112 ? var_6 : ((8 ? -5698572358412140097 : (arr_22 [i_1 + 2]))))))));
            var_28 = (arr_22 [i_8]);
            arr_27 [i_1 + 2] = (((arr_18 [i_1 - 1] [i_1]) ? var_8 : (arr_21 [i_1] [6] [i_1 - 1])));
        }
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_36 [i_1] [i_1 + 2] [i_9] = ((var_4 ? (((arr_25 [i_1] [i_1 + 1] [i_9 - 1]) ? (arr_5 [i_1 + 2]) : var_0)) : (((((var_8 | var_4) >= (((arr_25 [i_1] [i_9] [i_11]) ? 1 : var_1))))))));
                        var_29 = (((-((1 ? 1 : 47974)))) + (!-13430));
                        arr_37 [i_10] [i_10] [i_10] [8] [i_10] [i_10] |= ((min((arr_9 [i_9 + 3] [i_9 + 1]), (arr_29 [14] [i_9 - 1]))));
                    }
                }
            }
            var_30 = 7910306917198601196;
            var_31 += ((((((arr_13 [i_1] [i_9]) ? var_8 : 10955))) ? (~var_13) : var_6));
            arr_38 [i_9] = arr_18 [i_1] [0];
            var_32 = (min(var_32, ((max(((min((((arr_7 [i_1] [i_9]) * (arr_21 [i_1] [i_9 + 3] [i_1]))), (arr_21 [i_1] [i_1] [i_1])))), ((~(max(var_4, (arr_10 [i_1] [i_9] [i_9 + 3]))))))))));
        }
        var_33 = ((!((((arr_35 [1] [i_1] [1] [i_1] [i_1 + 1]) ? (arr_19 [i_1 + 2] [i_1 + 1] [11] [i_1 + 2] [i_1] [i_1 + 2]) : (arr_17 [i_1 - 1] [i_1 + 2]))))));
    }
    var_34 = (max(((max(var_5, var_5))), (((!(((var_11 ? var_14 : var_6))))))));
    var_35 = ((109 ? -10961 : 30786325577728));
    var_36 = (((!((max(-13434, var_11))))));
    #pragma endscop
}
