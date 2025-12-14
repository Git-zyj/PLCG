/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 > ((((min(var_2, var_4))) ? 0 : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = max(((~(((arr_7 [i_0] [6]) + (arr_2 [i_2]))))), ((min((arr_0 [i_1]), -982748466))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_16 = (!2147483647);
                            var_17 = (arr_7 [i_1] [i_4]);
                            var_18 = (+(((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_2]))));
                        }
                        var_19 = (((arr_12 [i_0] [i_3 - 2] [i_3 - 1] [i_0]) ^ (max((arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_0]), (min((arr_4 [i_0] [i_1] [i_3]), (arr_11 [i_1] [i_2] [i_1])))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_0] [i_2] [i_0] = ((((((max(var_13, var_2))) ? (arr_13 [i_0] [11]) : (arr_7 [i_0] [14]))) - ((min((arr_9 [i_0]), (arr_9 [i_0]))))));
                        arr_17 [i_0] [i_2] [i_2] &= (min((((arr_15 [i_0] [i_1] [14] [8] [2]) ? (arr_10 [i_0] [i_1] [i_0] [5] [i_5]) : (!78))), ((min((min(111, (arr_15 [i_0] [i_1] [i_1] [6] [i_5]))), (max((arr_0 [i_1]), var_10)))))));
                        var_20 = (175 | -982748479);
                        var_21 = ((max(132, (arr_8 [i_0] [i_0] [i_0]))));
                    }
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_6] [i_2] |= ((((226 >> (110 - 82)))) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_19 [i_0] [i_1] [i_2] [i_6] [i_7]) ^ (arr_3 [i_0] [i_2] [i_6 + 3]))));
                            arr_23 [i_0] = var_5;
                            var_22 = ((121 << (106 - 82)));
                        }
                        var_23 *= ((var_1 ? (min((arr_11 [i_6 - 1] [i_6 - 1] [i_6]), 15)) : (!184)));
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_2] [i_2] = min((min((((arr_20 [i_2] [i_2] [i_1]) ? (arr_11 [i_1] [i_2] [i_8]) : (arr_13 [i_0] [i_0]))), (max(var_4, -475704202)))), ((((max(-475704202, 90))) ? (arr_6 [i_0] [i_1] [i_1]) : -641401349)));
                        var_24 = (arr_14 [12] [i_0] [i_0] [i_8] [i_8] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_29 [i_0] [i_9] [i_2] [i_2] [1] [i_0] = ((((max(7, (max((arr_2 [i_0]), (arr_1 [i_0])))))) | var_10));
                        arr_30 [i_2] |= (((arr_19 [i_0] [i_1] [i_2] [11] [10]) ^ ((min(34, 56)))));
                        arr_31 [11] [i_1] [i_0] = (min((max(-var_4, (arr_14 [i_0] [i_0] [i_0] [4] [i_0] [i_0]))), ((~(arr_1 [i_2])))));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_25 *= ((min(var_2, (arr_1 [i_0]))));
                        arr_34 [i_0] = (((0 == 897513384) ? ((max((arr_25 [i_0] [i_1] [i_2] [i_10]), (arr_25 [i_0] [i_0] [i_0] [i_0])))) : (arr_1 [i_1])));
                        var_26 ^= (max((!860156637), (min((arr_24 [i_0]), (arr_24 [i_2])))));
                        arr_35 [i_0] [i_0] [i_0] [13] = ((((((arr_27 [i_1] [i_10]) == var_6)) || ((((arr_6 [i_0] [i_2] [i_10]) ? 255 : var_5))))));
                    }
                    var_27 += 220;

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_28 |= (max((max((max((arr_33 [i_0] [i_0] [i_2] [i_2]), var_3)), ((196 * (arr_3 [i_0] [i_0] [i_0]))))), -var_5));
                        var_29 = ((!(arr_9 [i_0])));
                        var_30 = (min(var_30, (max((arr_2 [i_2]), (arr_2 [i_2])))));

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_31 = (arr_40 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0]);
                            var_32 += (arr_5 [i_2] [i_2] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_33 = ((106 ? var_0 : 176));
                            var_34 = ((!105) ? (((!((min(1044480, 255)))))) : (arr_6 [i_0] [i_1] [0]));
                            arr_46 [4] [i_2] [i_2] [i_2] [i_2] [i_2] |= arr_11 [i_0] [i_1] [9];
                        }
                    }
                }
            }
        }
    }
    var_35 = var_2;
    var_36 = ((max(((var_11 ? var_0 : 106)), (min(var_11, 252)))));
    #pragma endscop
}
