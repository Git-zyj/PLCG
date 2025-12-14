/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] [i_2] [i_1] = (((arr_1 [i_2 + 2]) && (arr_5 [i_2] [i_1] [i_2 + 2] [i_0])));
                    var_14 = (min(var_14, (((!(arr_2 [i_0 - 2]))))));
                    var_15 = (arr_5 [i_2 - 1] [i_2] [i_2] [i_2]);
                    var_16 ^= ((~(arr_4 [i_0 + 1] [4] [i_1 - 1] [i_2 + 1])));
                }
            }
        }
        var_17 = ((~(((arr_3 [6]) + (arr_3 [0])))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        arr_11 [4] = (min(((max((arr_8 [i_3 + 2] [i_3 - 2]), (arr_8 [i_3 + 2] [i_3 - 2])))), ((var_13 + (arr_8 [i_3 + 2] [i_3 - 2])))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_16 [i_3] = (min((arr_13 [20] [i_4]), (max(540544491, -540544505))));
            arr_17 [i_3 + 1] [i_4] = ((~((((arr_14 [i_3] [i_3 + 1] [i_3 - 1]) && (arr_14 [i_3] [i_3 - 1] [i_3 + 1]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_24 [i_5] = (((arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2]) * (((arr_22 [i_3] [i_5] [i_5]) | ((max((arr_21 [i_6] [i_5] [7] [7]), -30)))))));
                        arr_25 [i_5] [8] [i_5] [i_5] = (((~(-49 <= 3198035335))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_4] [i_7] = 2222119823;
                            arr_29 [i_5] [i_4] [i_5] [i_6] [i_7] = ((((min((arr_18 [i_3] [i_4]), ((5460 ? (arr_7 [i_3]) : -1))))) || (((((arr_27 [i_3] [i_6] [i_5] [18] [i_7] [i_3] [i_6]) && (arr_14 [i_4] [i_6] [i_6])))))));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_18 = (34122464 | -106);
                            var_19 &= arr_26 [i_3] [2] [i_5] [i_6] [9];
                        }
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            var_20 = (((((arr_26 [i_3 - 1] [i_9 + 1] [i_9 + 1] [i_6] [i_9 + 1]) - (arr_26 [i_3 - 1] [i_9 - 2] [i_3] [i_5] [i_9 - 2]))) + (arr_26 [i_3 - 2] [i_9 + 1] [i_5] [i_6] [i_9])));
                            var_21 = 13772296838241136499;
                            arr_35 [i_5] [i_6] [i_6] [i_6] [i_5] [i_4] [i_5] = ((!((((arr_26 [i_9] [i_6] [i_3] [i_3] [i_3]) + 2222119805)))));
                            var_22 = var_0;
                        }
                    }
                }
            }
            var_23 = ((arr_12 [i_3] [i_3 + 2] [i_4]) >= (arr_12 [i_4] [i_3 + 2] [18]));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_39 [i_10] [i_10] [i_3] = ((-((var_9 - (arr_8 [i_3 + 1] [i_3 - 2])))));
            arr_40 [i_10] [i_10] = -540544522;
            var_24 = (min(var_24, -660608945));
        }
        var_25 = var_5;
    }
    var_26 = var_2;
    #pragma endscop
}
