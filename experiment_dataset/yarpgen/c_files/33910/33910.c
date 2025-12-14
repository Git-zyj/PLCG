/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((~(((!((min(var_4, var_13))))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [21] = (max(((((((arr_1 [i_0 - 3] [i_0 - 3]) ? (arr_1 [i_0 + 1] [i_0]) : var_9))) ? -var_10 : (((arr_0 [i_0] [i_0]) ? var_3 : (arr_0 [i_0] [i_0 - 3]))))), ((~(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [7]) : var_9))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 -= var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 += ((-(arr_1 [i_0] [i_0 + 3])));
                                var_17 = ((((max(var_12, ((min(var_8, var_6)))))) ? ((((min(var_10, (arr_3 [i_1])))) ? ((max(var_7, var_9))) : (((arr_8 [i_0 + 3] [i_1] [i_2] [i_3] [14] [i_1]) ? var_9 : (arr_1 [i_2] [i_2]))))) : var_0));
                                var_18 ^= (((!(arr_0 [i_0] [i_1]))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] = (~(((-(arr_10 [i_1] [i_4 - 1] [12])))));
                                var_19 = ((-(min((arr_3 [i_0 - 1]), var_0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = (((arr_1 [i_0] [i_0 - 4]) ? (((arr_17 [i_6] [i_1] [11] [i_5] [11]) ? -var_4 : var_1)) : ((((((~(arr_12 [i_6] [i_1] [i_0] [i_5])))) ? (arr_17 [i_1] [i_2] [i_1] [i_1] [i_6]) : ((var_10 ? (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_7)))))));
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = (-((((((arr_0 [i_0] [i_1]) ? (arr_3 [i_0]) : var_12))) ? ((var_6 ? var_4 : var_3)) : var_11)));
                                arr_19 [i_0] [0] [i_2] [i_5] [i_6] = var_6;
                            }
                        }
                    }
                    var_21 = (max((((((((arr_10 [i_0] [i_1] [i_2]) ? var_3 : (arr_10 [i_1] [i_1] [i_1])))) ? (arr_17 [i_0] [24] [i_0] [i_2] [i_0]) : var_7))), (arr_0 [i_0] [i_0])));
                    var_22 = (arr_10 [i_0 + 3] [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_22 [i_7] = var_5;
        var_23 = (((arr_3 [4]) ? (max((arr_3 [23]), (arr_7 [i_7] [i_7] [i_7] [i_7]))) : (((arr_6 [i_7] [i_7] [i_7] [i_7]) ? (arr_6 [i_7] [i_7] [i_7] [i_7]) : (arr_6 [i_7] [i_7] [i_7] [i_7])))));
        var_24 ^= ((((((arr_1 [i_7] [i_7]) ? (((-(arr_4 [i_7] [i_7] [i_7])))) : var_3))) / ((-((var_11 ? (arr_4 [i_7] [i_7] [16]) : var_1))))));
        var_25 = ((-((-((-(arr_15 [i_7] [17] [i_7] [i_7] [17] [i_7] [i_7])))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_26 = ((-(min((arr_3 [i_8 + 1]), (arr_3 [i_8])))));
                    arr_30 [i_9] = ((((((arr_16 [i_8] [i_8] [i_8]) ? (((arr_4 [i_8] [i_8] [i_10]) ? (arr_12 [i_8] [i_9] [5] [11]) : var_12)) : (((!(arr_7 [i_8 - 1] [i_9] [i_9] [i_10]))))))) ? (((min(var_9, var_7)))) : (((arr_23 [i_8 - 1]) ? (arr_25 [i_8 - 1]) : (arr_23 [i_8 + 1])))));
                    arr_31 [i_9] [i_8] [i_8] = (max(((((!(arr_14 [i_8] [i_9] [i_8]))))), (var_13 == var_12)));
                }
            }
        }
    }
    var_27 = (max((((var_3 ? -var_7 : var_3))), (min(-var_5, (var_13 * var_2)))));
    #pragma endscop
}
