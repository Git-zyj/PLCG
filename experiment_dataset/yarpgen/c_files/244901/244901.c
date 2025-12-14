/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_8;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (min((~234), ((((arr_0 [i_0]) ? 7933675335979277598 : 0)))));
        arr_3 [0] = min((((-(arr_1 [i_0] [i_0])))), (((!var_1) ? (min(-358730656, 7933675335979277577)) : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_14 = ((((min((arr_10 [i_1]), (arr_14 [i_4] [5] [5] [12])))) ? ((1 ? -8260094023522330519 : 25975)) : ((((((arr_5 [i_1]) ? var_11 : 2513))) ? (arr_13 [i_1] [i_2] [16]) : (((arr_13 [i_1] [i_2] [i_2]) ? 0 : (arr_10 [i_4])))))));
                        arr_16 [i_1] [i_2] [i_3] = (((max(17592169267200, 7160945080488246688)) - ((((!(arr_13 [i_1] [10] [i_3 + 1])))))));
                        arr_17 [i_1] [i_1] [i_3] [i_4] = ((!((min(((-1 ? var_7 : var_8)), (arr_8 [i_1]))))));
                    }
                }
            }
        }
        var_15 = (max(var_15, 147585559));
    }
    for (int i_5 = 4; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] = (((arr_18 [i_5]) * ((((min(562843514, 1))) ? ((-189252468361153695 ? -29039 : -1763979221)) : (arr_9 [i_5 + 1] [i_5] [i_5 - 4])))));

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_16 += -8349653084866262385;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_17 = ((((((arr_5 [i_5 - 3]) ? (arr_14 [i_6 - 2] [i_8] [i_9] [i_9]) : (arr_5 [i_5 + 1])))) ? (((max((arr_14 [i_6 - 2] [23] [i_6 - 2] [i_6 + 1]), (arr_23 [i_6 - 1] [i_5] [i_6 - 1]))))) : ((var_10 ? (arr_14 [i_6 - 1] [7] [0] [6]) : var_11))));
                            var_18 = (min((arr_26 [i_5]), ((-1292689730 ? 1271678148 : -1))));
                            var_19 = min((max(var_9, (arr_19 [9] [i_7 + 3]))), var_10);
                            arr_31 [5] [i_5] [5] [i_8 + 1] [i_8] [i_8] = (min(((min(796466165, 0))), var_4));
                        }
                        arr_32 [i_5] [i_6] [i_7 + 3] [i_8] = (-29814 - 17606384817080013856);
                    }
                }
            }
            var_20 = (((arr_23 [i_5 - 3] [i_5] [i_6 - 1]) ? (arr_24 [i_5] [i_6 + 1] [i_5 - 4] [i_5]) : var_0));
            arr_33 [i_5] [i_5] = (min((arr_5 [i_5 + 2]), 159));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_21 = (((((min((arr_27 [i_5] [i_5] [i_5] [i_11]), 3704116636)))) ? ((((!(((arr_35 [i_10] [i_5] [3]) && (arr_6 [i_5]))))))) : (((arr_23 [i_10] [i_5] [i_10]) ? (arr_24 [i_5] [i_5] [i_6 - 1] [i_10]) : (min((arr_27 [i_5] [i_6] [i_6] [i_11]), (arr_23 [i_5] [i_5] [i_5])))))));
                            arr_41 [i_5] [i_6] [i_11] [i_11] = (arr_8 [i_6]);
                            arr_42 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] = ((((((arr_38 [i_5] [i_6 + 1]) & (arr_38 [i_5] [i_6 - 1])))) ? (((arr_38 [i_5] [i_6 - 1]) & (arr_38 [i_5] [i_6 - 2]))) : ((min((arr_38 [i_5] [i_6 - 2]), (arr_38 [i_5] [i_6 - 2]))))));
                        }
                    }
                }
            }
        }
        var_22 = (min(var_22, (((((((max(2943180862, (arr_9 [i_5 - 3] [14] [i_5])))) ? ((min(var_8, var_6))) : var_9)) - (arr_18 [i_5]))))));
    }
    var_23 = (max(var_23, var_3));
    var_24 = var_4;
    var_25 = var_9;
    #pragma endscop
}
