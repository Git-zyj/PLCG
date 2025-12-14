/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~var_15)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_17 = (max(var_17, ((-(arr_7 [i_1 - 2] [1] [i_3 - 1] [i_2 - 1])))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_2] [i_1] [7] [i_3 - 1] [i_4] [i_2] [i_1] = ((~(arr_5 [i_4] [i_3 - 2] [i_3] [i_2 + 1])));
                        var_18 = (min(var_18, ((((arr_7 [12] [12] [i_2] [i_2]) < 0)))));
                    }
                    arr_13 [i_0] [1] [i_0] = (4294967295 * 1);
                    arr_14 [i_0] [i_1] [i_2 - 2] [i_3 - 1] = (((arr_10 [i_3] [i_0] [1] [i_3 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_2 - 3]) : (((arr_0 [i_0]) - (arr_2 [i_0])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_0] = ((-(arr_4 [i_5] [i_5])));
                    var_19 -= (arr_5 [i_2 - 2] [i_1 + 1] [0] [i_5]);
                }
                arr_18 [i_1] [i_2 - 2] = ((-((var_0 ? (arr_11 [i_0] [i_0] [12] [i_0] [i_0] [i_0]) : 65527))));
                arr_19 [i_0] [i_0] [i_0] [15] = ((-(arr_15 [i_0] [1] [i_2])));
            }
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                arr_22 [i_0] [i_1] = 26;
                var_20 = (((((-(((arr_3 [i_6 - 1]) - (arr_21 [i_0])))))) ? var_15 : ((max(((max((arr_15 [i_0] [i_1] [i_6 + 1]), (arr_16 [2])))), (arr_21 [i_0]))))));
                arr_23 [i_0] = (((arr_0 [i_0]) ? ((var_3 * ((var_10 ? var_14 : (arr_11 [i_0] [i_1] [i_0] [0] [i_0] [0]))))) : ((((arr_4 [i_1 - 2] [i_1 + 1]) / (arr_8 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1]))))));
            }
            arr_24 [i_0] [i_0] [10] = (max((max((max(var_6, (arr_20 [i_1]))), (arr_4 [i_0] [i_1 - 1]))), (((var_11 - (arr_9 [i_1 + 1] [i_0]))))));
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            arr_27 [10] &= (((arr_3 [i_7 + 1]) > ((-(max(var_2, 4294967293))))));
            var_21 = (max((((arr_15 [i_7 + 1] [i_7 + 1] [i_7]) ? (arr_15 [i_7 + 4] [i_7 + 3] [i_7 - 2]) : (arr_15 [i_7 - 1] [i_7 + 2] [i_7 - 1]))), ((((((arr_3 [i_0]) ? 288230238712758272 : 38956))) ? (3740796193 > 28122084) : 8))));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_22 = ((-((-(arr_11 [7] [10] [i_8] [13] [i_8 + 1] [i_8])))));
                            var_23 += (((arr_21 [i_8 + 1]) && ((var_1 || (arr_21 [i_8 - 1])))));
                            arr_39 [i_8] [i_11] [2] [15] [i_9] [2] [i_8] = (arr_34 [i_8]);
                            var_24 = var_7;
                        }
                    }
                }
            }
            arr_40 [12] [i_8] = ((((max((arr_3 [i_8 - 1]), (arr_11 [i_0] [i_8 - 1] [i_8] [i_0] [i_0] [i_8 - 1])))) ? (((0 ? (arr_37 [7] [i_8] [i_0] [9] [7] [i_8 - 1] [i_8 + 1]) : (arr_37 [i_0] [i_8] [i_8] [7] [i_8 + 1] [i_0] [i_8 - 1])))) : (((arr_3 [i_8 - 1]) ? (arr_37 [i_0] [0] [i_8] [10] [i_0] [9] [i_8 + 1]) : (arr_11 [i_0] [i_8 - 1] [i_0] [i_8] [i_0] [i_8 + 1])))));
            arr_41 [i_0] [i_8 + 1] [i_8] = (min((max((arr_6 [0] [2] [i_8 - 1]), (arr_6 [i_0] [i_0] [i_8 + 1]))), (((max((arr_7 [i_0] [i_0] [0] [i_0]), (arr_10 [i_0] [i_8 + 1] [12] [i_8] [i_0])))))));
        }
        arr_42 [i_0] [i_0] = ((-(((arr_7 [i_0] [i_0] [i_0] [i_0]) << (((arr_33 [i_0]) - 2833833510))))));
    }

    /* vectorizable */
    for (int i_12 = 2; i_12 < 13;i_12 += 1)
    {
        var_25 += (arr_21 [i_12]);
        var_26 = var_1;
        arr_46 [7] = (arr_21 [i_12 - 1]);
    }
    var_27 = (min(((var_9 << ((((0 ? var_9 : var_2)) + 1584788388)))), ((min(var_11, var_7)))));
    var_28 = var_3;
    #pragma endscop
}
