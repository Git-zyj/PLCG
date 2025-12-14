/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(65535, 4096)))) ? (((!(!var_9)))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_1] [16] = (((((arr_6 [i_2] [i_4] [i_2]) ? (min(var_6, (arr_7 [i_0] [i_0] [0]))) : (arr_7 [i_0] [3] [i_2])))) ? (((arr_10 [i_4] [i_3] [i_0]) & (arr_12 [i_1] [i_3]))) : var_6);
                                var_12 = (((((min((arr_5 [i_1] [i_1]), var_2)))) ? (((max(var_6, var_4)))) : (!var_8)));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_13 = var_3;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_14 = (min(var_14, ((((((var_1 ? (min(var_3, (arr_10 [1] [i_1] [1]))) : var_0))) ? (((arr_1 [i_5 - 1]) ? (arr_1 [i_5 + 1]) : (arr_1 [i_5 - 1]))) : (arr_3 [i_5 - 2]))))));
                        var_15 = (max((54 | 14), ((min((arr_1 [i_5 + 1]), (arr_11 [i_1] [i_1] [i_5 - 2] [i_5 + 1] [i_1] [i_1]))))));
                    }
                    var_16 = (var_8 ? (((((8147 ? var_8 : var_3))) ? -var_1 : (((120230206 ? var_7 : (arr_3 [i_1])))))) : (((arr_19 [i_5] [i_5 + 1] [i_1] [i_1] [i_5]) ? var_9 : var_2)));
                    arr_21 [14] [i_1] [7] = ((min(((((arr_5 [i_1] [i_1]) <= var_5))), (((arr_2 [0]) ^ (arr_2 [i_1]))))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_1] [i_7] [i_7] [i_0] = (((arr_20 [i_7] [i_1] [17] [i_1] [14]) ? 8147 : var_10));
                    var_17 ^= (((max((arr_18 [i_7 - 1] [i_7 + 3] [i_7 + 1]), var_7))) ? (!var_8) : (max(var_1, (arr_18 [i_7 - 1] [i_7 + 3] [i_7 + 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_18 = (((arr_15 [i_0] [i_1] [i_7] [4] [i_9]) ? (((-(min(var_8, var_0))))) : (((((((arr_4 [i_0] [i_0] [i_9]) <= (arr_7 [13] [i_8] [i_9]))))) & (var_1 | var_2)))));
                                arr_31 [i_9] [i_1] [i_7] [i_1] [i_0] = var_4;
                                var_19 ^= (((var_6 | (arr_11 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_0] [i_9 - 2]))));
                                var_20 = (-var_4 ? (max(var_9, (arr_29 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_7 + 2] [i_7 + 1]))) : (min((((arr_6 [0] [23] [i_1]) ? 252 : var_3)), (var_8 ^ var_10))));
                                arr_32 [i_8] [i_8] [18] [i_1] [i_8] = ((var_0 <= ((((((max(var_2, var_2)))) <= (max(2411669905, -563553763816420390)))))));
                            }
                        }
                    }
                    arr_33 [i_0] [i_0] [i_1] [i_7] |= ((~(((arr_27 [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7] [i_7] [i_7 + 3]) : var_2))));
                }
                for (int i_10 = 4; i_10 < 21;i_10 += 1)
                {
                    arr_38 [i_0] [i_1] [i_1] [i_10] = 50086;
                    arr_39 [i_0] [i_0] [i_1] = (arr_17 [i_0]);
                }
                var_21 = (min(var_21, (((-((-(((arr_4 [i_0] [i_1] [i_0]) ? (arr_15 [4] [i_0] [i_0] [i_1] [i_0]) : (arr_12 [i_0] [i_0]))))))))));
                arr_40 [i_1] = ((-116 ? ((54 ? -16627 : 15473)) : 50062));
                var_22 = ((((min(((min(var_2, 57))), -3173278220214651628))) ? (arr_9 [i_0] [i_0] [i_0] [i_1]) : (((max(var_0, (arr_23 [i_0] [i_1] [i_0] [i_0]))) ^ (var_10 | 39363)))));
            }
        }
    }

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_23 ^= (arr_0 [i_11]);

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_24 = ((((-(arr_0 [i_11]))) & (arr_30 [i_11] [i_12] [i_11] [i_12] [i_12] [i_12] [i_11])));
            var_25 = (min((max((arr_15 [i_12] [i_12] [16] [i_11] [i_11]), (arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))), ((((arr_30 [i_12] [i_12] [i_11] [i_11] [i_11] [i_11] [i_11]) | -26)))));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_26 = var_5;
            arr_49 [i_11] [i_11] = min(1428097865, 57);
        }
        arr_50 [1] = ((((var_6 ? (arr_6 [i_11] [i_11] [i_11]) : var_7)) ^ (((arr_29 [1] [i_11] [i_11] [i_11] [i_11] [i_11]) ? var_7 : (arr_29 [i_11] [0] [i_11] [i_11] [i_11] [i_11])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_27 = var_8;
        arr_53 [i_14] [i_14] = (((arr_14 [i_14] [20] [i_14] [20] [i_14]) + 63649));
    }
    #pragma endscop
}
