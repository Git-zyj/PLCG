/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-67 + 2147483647) << (11630 - 11630)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= (-11631 % -11630);
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0 - 1]);
        arr_5 [i_0] = (((arr_2 [i_0 + 4]) << (((var_8 + 7223734634632900247) - 43))));
        var_16 = (arr_2 [i_0 + 2]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_17 [i_1] = (var_1 ? (((arr_13 [i_1 - 1] [i_1 + 3]) ^ var_13)) : (!var_14));
                        var_17 = -6854235798038141432;

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_21 [i_4] [i_4] [i_3 - 3] [i_1] = ((var_12 - (arr_10 [i_1] [i_2 + 3])));
                            var_18 = (((arr_14 [i_1] [i_1]) == -38103));
                            var_19 = ((((-(arr_11 [i_1] [i_3 + 1] [i_3] [i_3]))) - (((1716886185 ? (arr_1 [3] [1]) : (arr_18 [i_1] [i_2] [i_3 - 2] [i_3 - 2] [9] [i_5]))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1 + 4] [i_1 + 3] [i_1] [i_1] = ((var_14 - (arr_6 [i_6])));
                            var_20 = var_4;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_21 = (1320376067 == 946887303);
                            var_22 = (!var_5);
                            arr_28 [i_4] [i_2] [i_1] [i_4] [i_7] [i_1] = (((arr_20 [i_1 - 1] [i_2 + 4] [i_3 - 2] [i_1] [i_7]) ? var_11 : 1));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_23 |= ((arr_10 [i_1] [i_4]) ? 88 : (((arr_18 [i_1 - 1] [i_2 - 1] [i_3] [i_3] [i_4] [i_8]) ? 10773444033105255939 : (arr_23 [i_3] [i_8]))));
                            arr_31 [i_1] [i_4] [i_2 + 3] [i_2 + 3] [i_1] = (arr_8 [4] [i_1 - 1] [i_1 - 1]);
                        }
                        var_24 = var_0;

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            arr_34 [i_1] [1] [1] [i_1 + 1] [i_9] = (arr_9 [i_1]);
                            arr_35 [3] [i_1] [3] [i_1] [i_9] [i_1] [i_4] = (((((-32767 - 1) ? var_7 : var_14)) ^ ((((var_4 <= (arr_13 [i_1 + 4] [i_1])))))));
                        }
                    }
                }
            }
        }
        arr_36 [i_1] = ((((var_10 ? var_14 : -7498)) | ((((arr_19 [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 3]) ? (arr_29 [i_1] [i_1] [i_1] [6] [6]) : var_9)))));
        var_25 = var_10;
        arr_37 [2] |= (((arr_13 [i_1 + 2] [i_1 + 4]) / (arr_13 [i_1] [i_1 + 3])));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                arr_42 [i_10] [i_10] |= ((!((((((2125480027595728729 ? var_9 : var_13))) ? (arr_7 [i_10]) : (((arr_10 [i_10] [3]) ? var_4 : var_1)))))));
                arr_43 [i_11] = (((max((max(var_12, var_4)), (arr_32 [0] [i_11] [i_11] [i_10] [i_11]))) <= ((((arr_13 [i_10] [i_11]) ? (arr_0 [i_11] [i_10]) : (var_5 || var_8))))));
            }
        }
    }
    #pragma endscop
}
