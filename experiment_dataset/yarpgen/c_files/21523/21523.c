/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((2676663225978128908 - 0) + var_10));
                    var_14 -= (arr_5 [i_1] [i_0]);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 *= (((((((max((arr_9 [9] [i_1] [i_1] [i_2] [i_3] [i_3]), var_4))) + (((arr_2 [i_1]) + var_8))))) && ((max((arr_3 [i_1] [i_1] [9]), var_4)))));
                        var_16 = (arr_3 [i_0] [i_0] [i_2]);
                        arr_11 [i_3] [i_1] [i_2] [i_3] [i_0] [i_0] = (arr_3 [i_0] [i_3] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_16 [1] [i_4] [i_4] [i_2] [6] [i_0] [i_0] = ((arr_15 [i_0] [i_0] [i_2] [i_4] [i_5] [i_2] [i_1]) ? (arr_10 [i_5] [i_2] [i_1] [i_0]) : (arr_15 [i_0] [i_0] [i_2] [7] [i_5] [i_4] [i_5]));
                            arr_17 [i_5] [i_0] [i_0] [i_0] = (((arr_12 [i_2] [7]) ? var_9 : (arr_9 [i_0] [i_1] [i_2] [i_4] [i_4] [i_2])));
                            var_17 &= (1484881878 > 1463712363);
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_18 = (((arr_13 [10] [i_2] [i_4] [i_6]) * (max(var_5, var_4))));
                            var_19 = (((!((((arr_10 [i_0] [i_1] [i_2] [i_1]) ? var_4 : var_7))))));
                            arr_20 [i_4] [i_1] [0] [i_4] [7] [i_0] [i_6] = (-57 + 5);
                            var_20 = var_6;
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_21 = (max((max((((var_0 > (arr_0 [i_7])))), (min(var_3, var_5)))), (arr_19 [i_7] [i_7] [i_7] [i_7 - 1])));
                            var_22 = (max((arr_1 [i_1] [i_4]), (((max((arr_2 [i_2]), (arr_12 [i_0] [8])))))));
                        }
                        arr_23 [i_4] [i_2] [i_2] [i_1] [i_1] [1] |= (var_5 >= ((((arr_12 [i_0] [i_1]) ? var_2 : (!1)))));
                        var_23 = (((max(((((-127 - 1) - -1724781867))), (~var_10))) >> (((min((~var_3), (var_7 + var_8))) - 517662634))));
                    }
                    arr_24 [i_0] [i_1] [i_2] = (arr_9 [i_0] [7] [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_24 = ((max((var_1 || 15), ((-18232 ? -8127833891245603975 : 1484881878)))));
    var_25 = var_4;
    #pragma endscop
}
