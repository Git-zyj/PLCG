/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((var_2 ? ((((var_3 ^ var_0) | var_12))) : (var_6 ^ var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 ^= (((arr_1 [i_0] [i_0]) ? (arr_0 [5] [2]) : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_23 = (arr_7 [i_1]);
            var_24 += (arr_7 [8]);
            arr_9 [i_2] = (((arr_7 [i_2]) < (arr_7 [1])));
        }

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [6] = var_2;
            arr_14 [i_3] [6] [i_3] = -var_7;
            var_25 += ((~((-1915258640 | (arr_12 [i_1])))));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_4] [i_1] = (((arr_11 [i_1] [i_1]) ? (((arr_16 [9]) * (arr_4 [i_4 + 2]))) : var_16));
            var_26 = ((~(arr_8 [i_4] [4] [i_4])));
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_27 = (((arr_17 [i_5] [i_5 + 3]) / (arr_17 [15] [i_5 + 3])));
            arr_22 [i_5 + 1] [i_1] = var_15;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_28 = ((-(arr_5 [i_1])));
                        arr_27 [i_7 + 1] [i_6] [i_6] [i_1] = (arr_5 [i_1]);
                        arr_28 [i_6] [i_1] [i_5 + 2] [15] [i_6] [i_7 + 1] = (arr_24 [i_6]);

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_31 [i_6] = -1591355143;
                            var_29 = (-(arr_23 [i_8] [i_1]));
                            var_30 = ((!(((var_4 ? (arr_6 [i_6]) : (arr_4 [i_8]))))));
                            arr_32 [i_1] [i_6] = 71;
                        }
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            var_31 = (arr_11 [i_9] [i_5 - 1]);
                            var_32 = (min(var_32, var_18));
                        }
                        arr_35 [i_6] [8] [i_7] [i_5] = (~((var_11 ? -1 : 5)));
                    }
                }
            }
            arr_36 [i_1] [i_1] [i_5 + 3] = (((((var_4 ? (arr_29 [i_5 + 3] [i_1] [3] [i_1] [i_1]) : -15))) + (((arr_30 [i_1] [i_1] [10] [14] [i_5]) / (arr_11 [i_1] [i_1])))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_43 [i_1] [i_10] [i_1] = ((((-(arr_17 [i_10] [i_1]))) * (arr_4 [i_11])));
                    var_33 = ((arr_19 [i_11] [i_1]) ? (arr_20 [i_1] [1] [i_11]) : (arr_19 [i_1] [i_10]));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_49 [i_13] [i_10] [i_11] [i_10] [i_1] = (((arr_1 [i_13 - 1] [i_13 + 2]) == ((((!(arr_17 [i_12 + 1] [i_10])))))));
                                arr_50 [i_10] = (arr_16 [i_13 + 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 15;i_15 += 1)
                        {
                            {
                                arr_56 [i_10] [i_14 - 2] [i_11] [i_10] [i_10] = (((arr_40 [i_15 + 1] [i_15 - 1]) ? 2546092060 : (arr_23 [i_15] [i_15 + 1])));
                                var_34 = 2225575192;
                                var_35 = (((arr_47 [i_11] [i_15 - 1] [i_11] [i_14] [i_1]) ? (arr_17 [i_15] [i_15 + 1]) : 1047542492));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
