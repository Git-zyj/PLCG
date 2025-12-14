/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = (min(((((arr_2 [i_2]) - (arr_9 [i_2] [i_1] [i_0] [i_0] [i_4] [i_4])))), (arr_2 [22])));
                                var_10 = (min((arr_1 [7] [i_0]), 2147483635));
                                arr_16 [20] [i_1] [i_0] [i_1] [i_4] = var_4;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_11 = (min(((((((~10) + 2147483647)) << (((arr_13 [i_2] [i_5] [i_2] [i_1] [i_0]) - 4259552144))))), (arr_14 [i_0] [i_0] [20] [i_5] [i_5] [i_6 + 1] [i_6])));
                            arr_23 [i_0] [21] [1] [i_2] [i_0] [i_0] [i_0] = (245 && 31069);
                            var_12 &= (arr_4 [i_6 + 1] [i_1]);
                            var_13 = (max((min((arr_17 [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1]), (arr_22 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))), (arr_10 [i_0] [i_1] [i_0] [i_6])));
                            var_14 = (max(var_14, (arr_17 [18] [i_5] [i_0] [i_0] [i_0])));
                        }

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_15 = ((!(((-31409 - (arr_20 [i_7] [i_5] [i_1] [i_1]))))));
                            var_16 = arr_6 [i_0];
                        }
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            arr_30 [i_0] = (max(0, 1603));
                            var_17 = (min(var_17, ((min((arr_25 [i_0] [i_0] [i_0] [11] [i_0] [17]), ((var_2 / (arr_11 [0] [0] [i_8 + 1] [i_8 - 1] [i_8]))))))));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_18 = ((!((((arr_25 [i_0] [i_0] [i_2] [i_5] [i_9] [i_9]) * (arr_25 [i_0] [i_1] [i_2] [i_5] [20] [i_5]))))));
                            arr_33 [i_9] [i_0] [i_0] [i_0] = (((arr_11 [i_0] [16] [i_2] [i_5] [i_9]) * (((arr_2 [i_0]) << (((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) - 8910253785405241374))))));
                            var_19 = (min(var_19, ((min((arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]), ((min((!var_1), (arr_26 [i_0] [i_1] [i_2] [23] [i_1])))))))));
                            arr_34 [i_0] [i_1] [i_0] [1] [i_9] [1] [13] = (min((arr_11 [4] [i_1] [i_2] [i_0] [i_9]), ((min((arr_7 [i_0] [i_2] [i_0]), (arr_14 [i_9] [i_5] [i_1] [i_2] [i_1] [i_1] [i_0]))))));
                        }

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_20 = (i_0 % 2 == zero) ? ((((arr_4 [i_2] [i_0]) << (((arr_26 [i_0] [12] [12] [i_5] [i_10]) + 9983))))) : ((((((arr_4 [i_2] [i_0]) + 2147483647)) << (((((arr_26 [i_0] [12] [12] [i_5] [i_10]) + 9983)) - 2)))));
                            var_21 = (arr_8 [i_5] [i_1] [i_0]);
                            var_22 = (max(((~(max(2782995226, (arr_3 [i_1] [i_5] [i_10]))))), (((-(arr_13 [23] [i_1] [i_2] [i_5] [i_10]))))));
                            arr_38 [i_0] [i_0] [i_10] = min(((~(arr_0 [i_10]))), var_2);
                        }
                        for (int i_11 = 3; i_11 < 23;i_11 += 1)
                        {
                            var_23 = (((!(((-(arr_24 [i_0] [i_0] [i_0] [0] [i_0])))))) ? ((((-(arr_6 [i_0]))))) : (arr_36 [i_0] [i_0] [i_1] [i_2] [i_5] [i_1] [i_11]));
                            arr_42 [i_0] [i_1] [i_2] [i_2] [i_0] = (arr_17 [1] [i_11 + 2] [i_11 - 1] [i_11] [i_11 + 2]);
                        }
                    }
                    var_24 = (max(var_24, (((!(arr_28 [i_0] [i_1] [i_2] [i_2] [6] [0]))))));
                    var_25 = (!-var_3);
                }
            }
        }
        arr_43 [i_0] [i_0] = (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_44 [14] [14] &= (min(((max((arr_10 [6] [i_0] [i_0] [24]), (arr_10 [i_0] [i_0] [i_0] [5])))), ((((min((arr_10 [i_0] [i_0] [i_0] [i_0]), 1608))) + (~var_3)))));
        var_26 = (max(var_26, (arr_14 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0])));
    }
    var_27 = var_5;
    #pragma endscop
}
