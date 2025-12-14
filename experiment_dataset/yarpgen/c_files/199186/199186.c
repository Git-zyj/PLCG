/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (((((arr_1 [i_0]) && (arr_1 [i_0]))) ? ((min(-860101628, (-2147483647 - 1)))) : (max(var_9, (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((+((((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [4]))))));
        var_13 = (((arr_0 [1] [i_0]) + ((((arr_0 [i_0] [i_0]) ? ((var_10 ? (arr_0 [i_0] [i_0]) : var_6)) : (min(860101627, var_8)))))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_14 = ((-860101648 ? (arr_4 [i_0] [i_1]) : ((max(((-860101638 ? (arr_0 [i_0] [i_1]) : (-2147483647 - 1))), (max(860101638, -860101628)))))));
            var_15 = (max(var_15, (arr_5 [i_0] [i_0])));
            var_16 = (((860101627 != 1) ? 371059261 : -1));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [9] [i_3 - 1] [4] [i_4] = (((arr_14 [i_0] [i_3 + 2] [i_3 + 2]) ? (arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1]) : (((arr_14 [i_0] [i_2] [i_0]) ? 32765 : var_5))));
                        var_17 -= (((~1265102137) ? (((arr_7 [i_0] [i_2] [i_4]) & (arr_4 [i_0] [7]))) : (5505 || 5)));
                        arr_16 [i_0] [i_0] [i_0] = (((arr_14 [i_3 + 2] [i_2] [i_3]) % (arr_14 [i_3 + 2] [i_2] [i_4])));
                    }
                }
            }
            var_18 = (max(var_18, ((((arr_7 [1] [i_2] [i_2]) ? (arr_14 [1] [i_2] [i_2]) : (arr_13 [i_0] [i_2] [i_2] [i_2] [i_0]))))));
            arr_17 [i_0] = (-2147483647 - 1);
            arr_18 [i_0] = (((arr_14 [i_0] [i_0] [i_2]) + var_1));
            var_19 |= ((-27 ? (arr_5 [i_0] [i_2]) : (arr_5 [i_0] [i_2])));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 = (min((min(-480794358, (arr_12 [i_0] [i_6]))), (37055 != -5518)));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 = var_6;
                                var_22 = ((((((max(2147483647, (arr_14 [i_5] [i_5] [i_5])))) ? ((((-2147483647 - 1) >= 0))) : ((((arr_21 [i_5] [i_5]) == 2147483647))))) & (((arr_26 [i_7 - 2] [i_7 - 2] [i_6] [i_7 - 1] [i_8]) ? (arr_22 [i_7 - 1] [7] [i_7 + 1] [i_7 + 1]) : (arr_26 [i_7 - 4] [1] [i_6] [i_7 - 1] [i_8])))));
                                var_23 &= ((((arr_13 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 + 1]) ? (arr_13 [i_0] [i_6] [i_6] [i_7 + 1] [i_7 - 2]) : (arr_13 [i_0] [11] [i_5] [i_7 - 2] [i_7 + 1]))) >> ((((max((arr_13 [i_6] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 2]), (arr_13 [i_6] [i_7] [i_7] [i_7 - 3] [i_7 - 3])))) - 30337)));
                            }
                        }
                    }
                    var_24 = (min(var_24, 7));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_25 = ((!(arr_30 [i_9 - 1])));
            var_26 = (arr_28 [i_9 - 1] [i_9 - 1]);
            arr_33 [i_9] [3] = var_11;
        }
        var_27 = (((arr_29 [i_9 - 1]) || (arr_29 [i_9 + 1])));
    }
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        arr_36 [i_11] = (max(var_5, ((((var_0 != -1265102138) ? (arr_28 [13] [i_11 - 3]) : ((var_1 ? 344920569 : 7)))))));
        var_28 = (arr_28 [i_11] [i_11]);
    }
    var_29 = (~1371488431);
    #pragma endscop
}
