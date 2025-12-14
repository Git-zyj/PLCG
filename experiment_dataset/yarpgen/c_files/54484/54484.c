/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((var_1 ? ((var_7 ? var_4 : var_1)) : var_11))), var_5));
    var_16 += ((-((var_12 ? var_3 : ((var_6 ? var_5 : 32542))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 |= (((122 < -118) / ((min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = ((511 == (arr_4 [i_1] [i_0])));
            arr_6 [i_0] [i_1] [i_1] = -1;
            var_18 = (122 | (-32767 - 1));
            arr_7 [0] = (((arr_2 [1] [i_1]) ? (((!(!18446744073709551611)))) : (arr_1 [11] [17])));
        }
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 24;i_2 += 1)
    {
        arr_12 [i_2] &= ((-((((arr_11 [i_2]) || (arr_9 [3]))))));
        var_19 += (arr_9 [i_2 - 4]);

        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_17 [i_2] = (arr_8 [i_3 + 1] [i_3 + 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_20 = (((arr_22 [i_2] [i_3 + 1] [i_4] [i_4]) || (arr_8 [i_2 - 1] [i_5])));
                            var_21 = ((-(arr_18 [i_2 - 1] [i_2 - 2] [i_4])));
                            arr_26 [i_4] [i_4 + 1] [i_6 - 1] = ((-((var_14 ? (arr_22 [i_4] [i_5] [i_4] [i_4]) : (arr_15 [2] [i_2])))));
                        }
                        var_22 = (max(var_22, (arr_20 [i_2 + 1] [i_2] [18])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_34 [17] [i_2 - 4] [i_7] [i_8] [i_7] [i_9] = ((13950 ? ((((!(arr_9 [i_2]))))) : ((1 ? -13950 : 1019357430))));
                    var_23 &= (((arr_25 [i_2] [i_2 - 3] [i_2 - 4] [i_2] [i_2 - 4]) ? (arr_24 [i_2 - 4] [i_2 - 2] [i_9] [i_9] [i_2 - 4] [i_2 - 4]) : (arr_24 [i_2 - 1] [i_2 + 1] [i_7] [i_7] [i_2 - 1] [i_2 - 2])));
                }
                arr_35 [i_2 - 4] [i_7] [i_8] = (((arr_9 [i_2]) ? (((-(arr_29 [i_7] [i_7])))) : (arr_30 [i_2 - 4] [0] [i_2 - 3])));
                var_24 = (arr_11 [i_2]);
                arr_36 [i_8] [4] [i_7] [i_2] = ((+(((arr_27 [9]) ? (arr_24 [i_2] [2] [i_8] [i_8] [i_7] [i_8]) : var_8))));
            }
            arr_37 [i_7] [i_2] = ((101 ? (((arr_25 [i_2] [i_2] [i_2] [22] [10]) ? (arr_21 [i_2] [i_7] [i_7] [i_7]) : var_3)) : (arr_22 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_7])));
            arr_38 [i_7] [i_2] = (arr_28 [i_2] [i_7]);
        }
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            arr_41 [i_2 - 2] [15] = (arr_39 [i_2 - 1] [i_10 - 1] [i_2]);
            var_25 &= (((arr_39 [i_2] [i_10 + 1] [i_10 + 3]) >= ((((arr_16 [9] [i_10] [i_10]) - 0)))));
            var_26 = (((arr_16 [i_2 - 1] [i_10 + 3] [i_10 - 2]) ? ((((arr_27 [23]) ? 2995401989 : (arr_8 [i_2] [i_10 - 3])))) : (arr_21 [i_2 + 1] [i_2] [4] [i_10])));
        }
        var_27 = (((arr_8 [i_2 - 4] [i_2 - 4]) ? (arr_18 [i_2] [i_2 - 4] [i_2]) : (arr_8 [i_2] [i_2])));
    }
    #pragma endscop
}
