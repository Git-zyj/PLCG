/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_17 ? var_6 : var_15))) ? ((4541161549797446244 ? var_10 : var_1)) : var_10)) > var_9));
    var_19 = 2066435988;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (((!(arr_3 [i_1] [i_2] [i_1]))) ? (((var_7 ? 152 : var_2))) : (((!2181000235) ? var_3 : (arr_5 [i_0] [i_1] [i_1]))));
                            arr_10 [i_1] [i_2] [7] [i_1] [i_1] [i_1] = 103;
                        }
                    }
                }
                var_21 = (min(var_21, var_12));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_13 [i_0] [i_1] [i_1] [6] = ((0 || (arr_8 [i_1])));
                    var_22 |= ((((104 >= (arr_6 [8] [8] [i_0]))) ? (((arr_11 [i_0] [i_1] [i_4 + 1]) ? 152 : 85)) : ((var_17 ? var_11 : var_0))));
                    var_23 = (((-98 + 2147483647) << (((((arr_7 [i_0] [i_4 + 4] [i_0] [2]) + 47)) - 5))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_24 = 663861172537545586;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_25 = ((var_16 ? (arr_24 [i_5] [i_6] [14] [i_7] [14] [i_5]) : ((((((arr_14 [i_7]) ? (arr_22 [i_5] [i_5] [i_5] [1] [i_9]) : 116))) ? 104 : (var_5 + 105)))));
                                var_26 -= (-((var_15 ? ((110 ? 0 : var_7)) : (var_17 | var_13))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (min(var_27, ((((min(((var_12 ? var_16 : var_8)), (arr_18 [i_5] [i_5]))) * var_4)))));
        var_28 = (min(((~(arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (((arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ^ (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_29 = (((min((arr_22 [i_5] [i_5] [i_5] [11] [i_5]), (arr_22 [i_5] [i_5] [14] [i_5] [i_5]))) / (min((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_22 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_30 = var_9;
                    var_31 = max((arr_14 [4]), (69 & var_5));
                    var_32 += arr_21 [i_11] [i_10 + 1] [i_5] [i_11];
                }
            }
        }
    }
    #pragma endscop
}
