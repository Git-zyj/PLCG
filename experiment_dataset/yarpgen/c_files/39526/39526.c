/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    var_17 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 *= (var_7 * var_8);
                                var_19 = (max((((arr_2 [i_2 - 4]) ? (arr_0 [i_2 - 4]) : (arr_0 [i_2 - 3]))), (arr_9 [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1])));
                                var_20 = (((-(min((arr_7 [i_0] [i_1]), -4789891185574462834)))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_1] [2] = ((((4789891185574462833 || (arr_9 [9] [i_2 - 2] [i_2 - 3] [i_0]))) && (((((arr_3 [i_0]) && (arr_1 [i_0]))) || var_0))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_21 = (max(var_21, var_5));

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_22 = (arr_0 [i_6]);
                        arr_20 [i_1] = (((((((((arr_17 [i_0] [3] [i_5] [i_6] [i_6]) ? var_5 : var_2))) ? (arr_15 [i_1]) : 241))) && var_5));
                        arr_21 [i_1] = ((((max((arr_4 [i_0]), (arr_10 [i_0] [1] [i_5] [i_6] [i_6])))) && ((((arr_4 [i_6]) ? var_5 : 14)))));
                    }
                    arr_22 [i_1] [i_1] [1] [i_1] = (((8446109636076989108 - -4789891185574462834) ? (((arr_13 [7] [i_0] [5] [i_5]) ? (((-10131 ? 86 : 14))) : (min(var_3, (arr_3 [i_0]))))) : var_10));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] = (82 >= 250);
                        var_23 = (((var_0 ? (arr_11 [i_0] [4] [i_0] [i_1] [i_1] [i_1] [i_7]) : -4789891185574462834)));
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_24 ^= (min(((((!(arr_18 [i_0] [i_0] [i_0] [0]))) && (((var_10 ? var_11 : var_14))))), (4789891185574462833 == var_14)));
                    arr_31 [i_0] [i_1] [i_8] = ((var_9 && (((var_10 * (arr_18 [i_0] [i_1] [i_1] [i_8]))))));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_25 = (((((((138 ? 992238774460630792 : 170))) ? ((-1862939357 ? var_2 : 6521230756096256697)) : 1841915582)) * 3429910610));
                    arr_34 [4] [i_1] = ((-1883276588 ? 1059777623 : (-2147483647 - 1)));
                    var_26 = (((((var_15 ? (arr_16 [i_1] [i_1] [8] [i_1]) : var_13))) >= (var_2 + 6521230756096256697)));
                    var_27 = (((!(arr_18 [i_0] [9] [4] [i_0]))) ? ((var_4 ? (arr_19 [i_9] [i_9] [i_1] [i_0] [1]) : var_5)) : (!var_5));
                }
                var_28 ^= (min((-2394287084038825896 >= 18229), (arr_17 [i_0] [8] [i_1] [3] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    arr_42 [i_12] [16] [i_10] = (-((var_2 ? ((var_4 ? var_12 : 47383)) : (((arr_38 [i_10]) & var_6)))));
                    var_29 = ((3074833937 ? (!170) : ((max(241, 34)))));
                    var_30 = (((((-1841915582 - var_7) / 59)) * (var_11 / 1841915582)));
                }
            }
        }
    }
    #pragma endscop
}
