/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max(((((arr_2 [i_1 - 2] [i_3]) ? ((((!(arr_0 [i_2 + 1] [i_3]))))) : (((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_1 [i_0])))))), var_1)))));
                        var_17 = arr_0 [i_3] [i_0 + 2];
                    }
                }
            }
        }
        var_18 = (min(var_18, (((~((((((arr_3 [17] [i_0]) ? var_4 : (arr_5 [i_0] [i_0] [i_0])))) ? (max(var_2, var_6)) : (((arr_3 [i_0 + 2] [i_0 - 1]) ? -1052549463 : var_7)))))))));
        var_19 = (max(((((arr_3 [i_0 + 3] [i_0 + 3]) > (arr_3 [8] [i_0 + 2])))), var_1));

        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            arr_11 [i_4] = var_2;
            var_20 = (min((arr_0 [i_0 + 3] [4]), var_6));
            arr_12 [i_4] [i_4] = (arr_9 [18] [i_4]);
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_21 = var_12;
            arr_16 [23] [i_5] [i_5] = ((((((((-59 ? var_7 : var_11))) ? var_4 : (~var_13)))) ? var_3 : (((min(var_2, (arr_9 [8] [8]))) ^ (~var_14)))));
            var_22 = (((max((arr_2 [i_0] [i_0]), 76))) ? ((2176574924216913171 ? 972425689 : -1052549463)) : ((max((((!(arr_14 [i_0 - 2] [i_5] [i_0 - 2])))), (arr_4 [i_0] [i_0 + 2] [i_0])))));
            var_23 += (((arr_8 [i_0] [0]) ? (arr_7 [4]) : (((arr_4 [8] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_5]) : (arr_3 [11] [23])))));
            arr_17 [i_0] = (((((((max(var_13, (arr_7 [18])))) ? (((var_0 != (arr_7 [8])))) : (arr_3 [i_0 - 1] [i_0 + 1])))) ? (((arr_3 [21] [i_0 - 1]) ? (min(var_3, (arr_7 [18]))) : ((var_8 ? (arr_15 [i_0]) : (arr_7 [22]))))) : (arr_10 [10] [i_5])));
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = arr_10 [i_6] [i_6];
        var_25 = var_9;
        var_26 = min((max((arr_3 [i_6] [i_6]), (min((arr_4 [i_6] [i_6] [2]), 2401736427441502591)))), (((arr_14 [i_6] [i_6] [i_6]) ? (arr_14 [i_6] [i_6] [i_6]) : (arr_14 [i_6] [i_6] [18]))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_27 = var_11;
                        arr_29 [i_6] [i_8] [i_7] [i_6] = ((-(arr_14 [i_8 + 3] [i_8] [3])));
                        var_28 += (min((((arr_6 [2]) ? var_6 : (arr_9 [18] [i_8 - 1]))), (((115 ? -1 : -32606)))));
                        arr_30 [i_7] [i_6] = max((((((-(arr_9 [i_6] [5])))) ? (max((arr_24 [i_6] [i_6]), (arr_6 [i_6]))) : (arr_6 [i_6]))), ((max(((-(arr_27 [i_6] [i_7] [i_6]))), var_4))));
                        arr_31 [i_6] [i_7] [2] [i_6] = ((max((((var_13 >= (arr_23 [i_9] [i_8] [i_6] [i_6])))), (((arr_25 [i_6] [i_6] [i_6]) ? (arr_3 [i_6] [18]) : (arr_27 [i_6] [4] [i_9]))))));
                    }
                }
            }
        }
    }
    var_29 = (max(var_0, var_1));
    #pragma endscop
}
