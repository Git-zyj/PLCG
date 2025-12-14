/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 |= (((arr_3 [i_0] [i_1]) - var_7));
                var_15 = ((arr_0 [i_1]) ? (arr_0 [i_0]) : ((((arr_0 [i_0]) >= (arr_0 [i_0])))));
                arr_6 [i_0] [i_0] [i_1] |= ((min((arr_3 [i_0] [i_1]), (arr_1 [i_0] [i_1]))));
                arr_7 [i_0] [2] [i_1] = ((!((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_16 = (max(var_16, 66));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (((arr_13 [i_1] [12] [i_3 - 1] [0]) ? var_0 : (((~(arr_13 [i_0] [i_1] [i_2] [i_3 + 2]))))));
                        var_18 = ((var_5 ? (arr_13 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 2]) : (arr_4 [3] [8] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_19 = (1073741792 && -82);
                        var_20 = (arr_17 [i_0] [i_1] [i_2] [i_4]);
                        arr_18 [i_0] [i_2] [9] [i_2] [i_4] = (15 > -1017678394228730990);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 += (!335611286180883736);
                        var_22 |= 18214;
                        arr_21 [i_0] [8] [i_1] [i_2] [i_1] |= ((var_13 ? var_2 : -126));
                        var_23 = var_2;
                        var_24 = var_13;
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_25 = (max((((15 ? (max(var_8, (arr_16 [i_0] [i_0] [10] [i_0] [i_0] [i_0]))) : (min((arr_11 [i_0] [i_0] [i_0] [12] [i_0]), (arr_19 [i_0] [i_1] [i_6] [i_7] [i_7])))))), (max(((((arr_2 [i_7] [i_1]) / (arr_24 [i_0] [i_8])))), (min(61545, (arr_27 [i_0] [i_1] [i_7] [i_8])))))));
                                arr_30 [i_1] [i_6] [i_7] = ((410642735 ? 410009288725157654 : 187));
                                var_26 = (max(var_26, (((min(((-1045597364 ? (arr_27 [1] [11] [i_6] [i_6]) : (arr_2 [i_0] [i_1]))), ((2133 ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : 98))))))));
                                var_27 = (max(var_27, (((-(1 * -5520794330831710830))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_28 = (max(var_1, (((arr_20 [i_1] [i_1] [i_1]) ? (arr_17 [i_0] [i_1] [i_9] [i_0]) : (arr_3 [i_1] [i_10])))));
                                arr_36 [i_0] [i_0] [i_6] [i_9] [i_10] = (arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_7;
    #pragma endscop
}
