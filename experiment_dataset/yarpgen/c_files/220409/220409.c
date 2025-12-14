/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [3] = ((((((arr_10 [i_3] [i_0] [13] [i_1] [i_0] [i_0]) ? (arr_1 [i_0]) : ((max((arr_1 [i_0]), (arr_1 [i_0]))))))) ? ((var_2 ? (arr_4 [i_0] [i_3]) : var_8)) : ((-(!var_1)))));
                            var_10 = (((~14604831567425028503) ? ((((arr_0 [5] [i_2]) || (-32767 - 1)))) : (max((((arr_9 [i_0] [3] [i_0] [i_3]) * 32767)), ((var_2 ? (arr_8 [i_0] [i_2] [i_0] [i_0] [1] [i_0]) : (arr_3 [i_0] [i_1] [i_0])))))));
                            var_11 = (min((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_2] [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_1] [i_0]))), (arr_7 [i_0] [i_1] [i_2] [i_0])));
                        }
                    }
                }
                arr_12 [0] [0] [i_0] = (((arr_4 [2] [i_1]) * (max((((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_5 [i_0] [i_0] [7] [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_12 ^= ((((((arr_19 [i_5] [i_5] [i_5]) ? (arr_8 [i_5] [i_1] [i_5] [i_5] [i_1] [i_0]) : (min(8532381562539446292, -1))))) || ((!(((var_4 - (arr_7 [i_0] [i_0] [10] [i_5]))))))));
                            var_13 = (arr_9 [i_0] [i_4] [i_1] [i_0]);
                        }
                    }
                }
                arr_20 [i_0] [i_0] = ((~(((((arr_4 [i_1] [i_0]) ? 1 : (arr_3 [i_0] [i_0] [i_0]))) << (var_0 - 10948280031532356716)))));
                var_14 = (i_0 % 2 == zero) ? ((((min((((arr_9 [i_0] [i_1] [1] [i_0]) + (arr_18 [i_1] [i_1] [i_0] [i_0]))), ((23610 << (((arr_6 [i_0] [i_0] [i_1] [i_1]) + 13920)))))) / (((min(var_7, (arr_4 [3] [1])))))))) : ((((min((((arr_9 [i_0] [i_1] [1] [i_0]) + (arr_18 [i_1] [i_1] [i_0] [i_0]))), ((23610 << (((((arr_6 [i_0] [i_0] [i_1] [i_1]) + 13920)) - 35120)))))) / (((min(var_7, (arr_4 [3] [1]))))))));
            }
        }
    }
    var_15 = (!var_6);
    var_16 = (((var_3 + 127) * ((var_5 ? (var_8 / var_4) : var_5))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            {
                var_17 &= ((var_0 ? (arr_25 [i_7 - 3] [i_6]) : (((arr_24 [i_7]) ? (arr_26 [i_7 - 1] [i_7] [i_7 + 1]) : (-32767 - 1)))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_35 [i_7] [i_7] = (min(9279, (((arr_30 [i_7 + 2] [5] [0] [i_7] [i_10]) ? (arr_28 [i_7 + 2] [i_7]) : (arr_33 [i_7 + 2] [i_10] [i_7] [i_7 + 2] [i_10] [i_10])))));
                                var_18 = var_6;
                            }
                        }
                    }
                }
                arr_36 [i_7] [i_7] = ((max((arr_24 [i_7 + 2]), (arr_24 [i_7 + 1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    var_19 ^= (((((!(arr_45 [i_13 - 1] [i_13 + 1] [4])))) ^ (((arr_45 [i_13 - 1] [i_13 + 1] [16]) / (arr_45 [i_13 - 1] [i_13 + 1] [14])))));
                    var_20 = ((-1 ? 54 : (arr_43 [i_11] [i_11])));
                    var_21 = (arr_43 [i_11] [i_11]);
                }
            }
        }
    }
    #pragma endscop
}
