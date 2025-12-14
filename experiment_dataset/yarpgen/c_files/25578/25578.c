/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_2] [i_1] = (arr_4 [i_0] [i_1] [i_2] [i_1]);
                            var_19 *= (min((min(((max(var_5, var_16))), ((-30759 ? (arr_7 [i_0] [i_0] [i_2] [i_0]) : var_15)))), (((!(arr_1 [i_0]))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((0 != ((+(((arr_8 [i_1] [i_1] [1] [i_3]) & 1))))));
                            var_20 = (min(var_16, (((-105 | (arr_0 [i_3]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_4] [i_1] [i_0] |= 81;

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_22 [i_0] [0] [0] [0] [i_6] |= ((((((((9002801208229888 ? (arr_17 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4]) : 9007199254740991))) ? (arr_19 [i_5 - 2] [i_5] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5]) : (~var_7)))) ? ((~(-2147483647 - 1))) : (((arr_0 [9]) ? (arr_8 [i_5] [i_5 + 1] [i_5] [i_5 + 3]) : var_18))));
                                var_21 = (arr_17 [i_1] [6] [i_4] [i_5 + 2] [i_6] [i_5 + 2]);
                                var_22 = var_2;
                            }
                            for (int i_7 = 2; i_7 < 9;i_7 += 1)
                            {
                                var_23 = ((((((arr_5 [i_0] [i_1] [i_1]) && (((var_13 ? (arr_20 [i_0] [1] [i_4] [i_5] [1] [i_7]) : (arr_17 [i_1] [i_7] [3] [i_1] [3] [i_1]))))))) != ((((min(var_10, var_0)) != (((-9002801208229889 ? 9007199254740975 : var_18))))))));
                                var_24 = ((~(arr_4 [i_5] [i_1] [i_1] [i_0])));
                            }
                            for (int i_8 = 0; i_8 < 10;i_8 += 1)
                            {
                                arr_27 [i_1] [i_1] [5] [i_5] [i_8] = (((((var_1 ? (min(var_13, 17)) : (arr_23 [i_0] [8] [i_4] [i_1] [i_8])))) ? var_12 : ((min((arr_26 [i_0] [i_0] [i_0] [i_5 - 2] [i_5] [i_5] [i_5 + 1]), (arr_26 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 3] [i_5] [i_5 + 1]))))));
                                var_25 += ((-var_14 && ((((arr_21 [i_5 - 1] [i_5 - 1]) + (arr_21 [i_5 + 1] [i_5]))))));
                                var_26 = (max(var_26, (((((min(((((arr_16 [i_0] [i_1]) ? (arr_6 [i_0] [2] [i_8]) : (-127 - 1)))), 9002801208229862))) * (max(var_6, (arr_7 [i_5] [i_5 + 3] [i_5] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_14;
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                var_28 ^= (max(((((arr_30 [i_10]) << (((arr_31 [i_10] [i_10] [i_9 - 1]) - 421496406))))), (min((arr_30 [i_9 - 3]), -9002801208229862))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_29 = (max(var_29, (((+(max(((((arr_38 [i_12] [i_10] [i_12] [i_12 + 3] [i_10]) ? (arr_34 [i_9 + 1]) : (-127 - 1)))), (arr_33 [i_11]))))))));
                            var_30 = (-127 - 1);
                            arr_42 [i_12] = ((1 ? (((-2147483647 - 1) + 53226)) : ((0 ? 7 : (arr_37 [i_10])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
