/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1315408418;
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = (max(1, (~var_14)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = (((arr_7 [i_0] [i_0] [i_2]) * 1));
                    arr_10 [i_0] [i_1] [i_1] = -491510775;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (arr_5 [5] [i_1 - 3] [i_3]);
                    var_21 = (min(var_21, (arr_0 [i_3])));
                    var_22 ^= (((~491510760) ? (arr_2 [i_1 - 3] [i_1 + 1]) : (var_8 - var_0)));
                    arr_13 [8] [i_0] [i_1 - 2] [i_0] = (((((var_12 / (arr_12 [9] [i_1 + 2] [9] [5])))) ? var_12 : (arr_12 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1])));
                }
                arr_14 [7] [1] = var_3;

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_23 = (min(var_23, 31222));
                    arr_19 [i_0] [i_0] [i_0] [4] |= ((((min((arr_2 [i_1] [i_1]), 2147483520))) ? ((((arr_8 [i_0] [i_1] [i_1]) < ((((-1282114953 + 2147483647) << (((arr_12 [1] [2] [i_4] [9]) - 13466)))))))) : ((var_7 << (((((arr_2 [0] [i_1]) ? var_1 : (arr_5 [i_0] [i_1] [i_1 + 2]))) - 703674098))))));
                    var_24 = ((((((((arr_12 [i_1] [i_1] [i_1] [i_1]) ? var_9 : var_2)) & ((var_9 ? var_11 : var_15))))) ? (((arr_18 [i_1 + 2]) ? (arr_15 [i_0] [i_1 + 1] [i_4]) : ((3803456518 ? 18852 : -18853)))) : -18848));
                    var_25 = (min(var_25, (((-(arr_1 [i_1 - 1] [i_1 + 1]))))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_22 [i_5] [i_5] [i_1 - 3] [7] = ((-1282114955 ? ((min(1, (arr_5 [1] [i_1] [i_1 + 1])))) : (arr_1 [i_1] [i_1])));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_26 = ((var_12 & (arr_1 [i_0] [i_0])));

                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            var_27 = ((-8398 ? (arr_1 [i_7 - 2] [i_1 - 2]) : (arr_1 [i_7 - 1] [i_1 - 2])));
                            var_28 = (((arr_21 [i_0] [1] [1]) ? (arr_5 [i_1] [9] [i_6]) : ((14178 / (arr_24 [6] [6] [6] [1] [3])))));
                            arr_28 [1] [i_6] [i_5] [1] [i_7] = -122;
                            var_29 = ((arr_0 [i_7 + 2]) ? ((1 ? 491510755 : (arr_11 [i_7] [3]))) : (arr_18 [i_5]));
                            arr_29 [1] [i_6] [i_6] [1] [0] [i_0] [i_7] = ((43 ? -32740 : (((arr_7 [3] [1] [i_6]) ? (arr_2 [i_0] [1]) : (arr_15 [i_7] [i_7] [i_7])))));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_30 = (((arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1]) ? (arr_24 [8] [i_1 + 2] [i_5] [i_5] [2]) : (248652441 >= var_17)));
                            arr_32 [8] [9] [i_1] [0] [i_6] = (((arr_2 [i_1 + 1] [2]) / (arr_30 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_6] [7] [i_8 - 1])));
                            arr_33 [i_6] [i_0] [i_6] [i_6] [i_6] = (arr_25 [i_5] [0] [i_5] [i_8 - 1] [i_8] [i_6]);
                            arr_34 [i_0] [4] [i_0] [i_6] [1] = (arr_31 [i_8] [i_6] [i_5] [i_1 - 2] [i_6] [i_0]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_37 [i_5] [i_6] [i_5] [i_5] [i_9] [i_5] [i_6] = ((((3839033012241696889 ? (arr_4 [i_0]) : (arr_30 [6] [1] [9] [i_5] [i_6] [1] [i_9]))) < (arr_18 [i_1 - 2])));
                            var_31 ^= ((9904 != (arr_18 [i_9])));
                        }
                    }
                    var_32 = 1;
                    var_33 = (min(var_33, 4294967295));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_34 = (~-61);
                        arr_40 [i_0] [i_0] [i_0] [i_0] = ((-(arr_2 [i_1 + 1] [i_1 - 3])));
                        var_35 ^= 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
