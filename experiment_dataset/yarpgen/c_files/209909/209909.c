/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_1 % var_5);
    var_19 = ((~((var_16 ? 1 : 161))));
    var_20 = (max(((max(var_9, var_9))), (((-(max(var_12, 41327)))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (arr_0 [i_0 - 1]);
        arr_5 [i_0] = max((min((arr_1 [i_0 + 2]), var_5)), ((((!(arr_3 [i_0 + 2] [9]))))));
        var_21 = ((!(((24208 ? 35870 : ((112 ? 119 : 41322)))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_22 = (arr_7 [i_1 - 2]);
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_3] [i_1] [i_4 + 1] [i_4] [i_5] = max((min((arr_15 [i_1] [i_1] [i_1 + 2] [i_2 - 2]), (arr_11 [i_1] [i_1]))), ((((arr_15 [i_1] [i_1] [i_1 + 2] [i_2 - 2]) != (arr_17 [1] [i_1] [i_1 + 2] [i_1] [i_3])))));
                                var_23 = (arr_6 [i_1]);
                                arr_19 [i_1] [i_1] [i_3] [i_2] [i_1 - 3] [i_4] = (arr_9 [i_1]);
                                arr_20 [i_4] [i_1] [i_4] [i_1] [i_4 - 2] = (arr_10 [i_1]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_1] = (arr_22 [i_1 - 3] [15] [i_1] [i_1] [i_1 - 1] [i_1 - 2]);
                        arr_24 [i_1] [i_1] = ((~((~(arr_9 [i_1])))));
                    }
                    arr_25 [14] [i_1] [i_2] [14] = (min((arr_15 [i_1] [i_2] [i_1] [i_3]), ((max(1, (arr_21 [i_1] [i_1 - 2] [i_1] [i_2 + 2] [i_2]))))));
                    arr_26 [i_1 - 1] [i_1] [i_1 - 1] = var_16;
                }
            }
        }
    }
    var_24 = (((var_0 & var_16) | var_6));
    #pragma endscop
}
