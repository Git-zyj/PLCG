/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((((!(arr_1 [i_0])))) ^ (arr_0 [i_0] [i_0 - 1]))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_0 - 1] [i_0] = (max((((var_2 & var_0) ^ var_8)), (((-(arr_6 [i_1] [i_1] [i_1]))))));

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_16 = (min(var_16, var_9));
                arr_10 [i_0] [i_1] [i_2] [i_0] = (max((((var_12 >> 0) / (arr_8 [i_0 - 1] [i_1] [i_2]))), ((((arr_4 [i_0 + 1] [i_0 - 1]) && -var_14)))));
                var_17 = (arr_9 [i_2 + 1] [i_0]);
                arr_11 [18] [i_0] [i_2] [i_2 + 2] = ((var_11 - (0 < var_10)));
                arr_12 [i_1] [i_0] = (arr_2 [i_2 + 3] [i_0 - 1]);
            }
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                arr_15 [i_0] [i_1] [21] = (min((((((arr_1 [i_0]) + var_12)) + ((max(var_6, var_6))))), (((arr_5 [i_3 + 3]) ? (arr_5 [i_3 - 2]) : var_12))));
                var_18 = (min(var_18, (var_9 % var_5)));
                var_19 = (max(var_19, var_2));
                arr_16 [i_0] [i_1] [i_3] [i_3] = (max((((var_6 ? (arr_1 [i_1]) : (arr_1 [i_0 - 1])))), (((((arr_14 [i_0 + 1] [i_1] [i_0] [i_0]) * var_15)) - ((((arr_8 [i_0 + 1] [i_0] [i_0 + 1]) ? var_8 : var_13)))))));
            }
        }
        arr_17 [i_0] = max(((var_15 ? (((arr_6 [i_0] [i_0] [i_0]) & (arr_14 [i_0] [i_0] [i_0] [i_0 - 1]))) : (arr_13 [6]))), (arr_1 [i_0 - 1]));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_24 [i_4] = (arr_4 [i_4] [i_4]);
                var_20 = (min(var_20, ((((0 / var_13) ? ((var_1 + (arr_0 [i_4] [i_5]))) : ((max((arr_0 [i_4 + 1] [i_5]), (arr_0 [i_4] [i_4 + 2])))))))));
                var_21 += (min((((arr_23 [i_4] [i_5] [i_4 - 2]) ? (arr_23 [i_4] [i_5] [i_4 - 2]) : var_5)), (arr_21 [i_5] [i_4] [i_4 + 2])));
                arr_25 [i_4] = (((arr_5 [i_4]) / var_8));
            }
        }
    }
    var_22 = var_11;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                arr_33 [i_6] [i_7] [i_6] = ((var_14 * ((var_7 / (arr_20 [i_6 + 2])))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {
                        {
                            arr_40 [i_6] [i_6] [9] [i_6] [i_6] [i_6] = (max(((-(max((arr_9 [i_6] [i_6]), var_1)))), ((((((var_5 ? (arr_35 [i_6]) : var_15))) ? ((((arr_27 [i_6]) * var_7))) : (arr_31 [i_6 - 1]))))));
                            arr_41 [i_6] [i_7] [i_8] [i_6] = var_2;
                            arr_42 [i_6] [i_7] [1] [i_9] = (((var_12 && var_7) ? (((-127 - 1) | (arr_35 [i_6 + 2]))) : ((var_0 ? var_4 : (arr_35 [i_8 + 2])))));
                            var_23 = (--0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((max(((((var_14 / (arr_35 [i_6]))) * 2)), (arr_39 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))))));
                            arr_49 [i_6] [i_6] [i_10] [i_11] = -14;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
