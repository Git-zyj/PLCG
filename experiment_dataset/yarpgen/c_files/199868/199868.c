/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_9));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 - 1] = max((-2147483647 - 1), 255);
        var_20 *= (((!120) ^ (var_1 || 255)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_5 [12] [12] = (arr_1 [i_1 + 1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (min(var_21, (((~((~(arr_0 [i_1] [i_2]))))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1] [18] [i_3] |= arr_7 [i_3];
                arr_13 [i_2] [i_2] [i_1 - 1] [i_2] = -var_5;

                for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (((!(((arr_0 [i_3] [i_4]) || (arr_7 [i_4 - 2]))))))));
                    arr_16 [i_1] [i_2] [12] [i_4 + 2] [i_1] = ((-(arr_3 [i_1 + 1])));
                    arr_17 [i_1 + 1] [i_2] [i_3] [i_2] = (((arr_3 [16]) ? (((arr_6 [i_2]) ? (arr_10 [i_2]) : (arr_6 [i_2]))) : (arr_3 [i_1 + 1])));
                    var_23 = (min(var_23, ((((arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4]) ^ (arr_11 [i_4 + 2] [i_4 + 1] [i_3] [i_1 - 1]))))));
                }
                for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_24 = ((((-(arr_9 [16] [i_2] [i_2] [i_2])))) ? -var_1 : -60);

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_2] [i_3] [i_2] = var_1;
                        arr_24 [i_2] = (((((~(arr_1 [i_2])))) || (arr_3 [i_1])));
                        var_25 = (max(var_25, (((~(arr_7 [i_6]))))));
                        var_26 = ((~(arr_4 [i_5 + 2])));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_28 [i_1] [i_2] [17] [i_5] [i_2] = (arr_21 [i_1] [18] [i_3] [i_5] [i_7 - 1]);
                        arr_29 [i_2] [i_2] [i_7] = (arr_26 [i_7] [i_5] [2] [i_2] [i_1]);
                    }

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_32 [i_8] [i_2] [i_8 + 2] = (((arr_6 [i_2]) <= (arr_14 [i_1 - 1] [i_8 - 1] [i_8] [i_8])));
                        var_27 = (max(var_27, (((!(arr_22 [0] [i_2] [i_5 + 1] [i_8 + 1]))))));
                        arr_33 [i_2] = ((~(((!(arr_7 [i_8 + 1]))))));
                        var_28 = ((((var_1 ? (arr_9 [i_2] [12] [i_3] [i_3]) : (arr_14 [i_1] [i_2] [i_5] [i_8]))) <= (!65525)));
                    }
                }
                arr_34 [i_2] [i_2] [i_2] [i_3] = (((arr_9 [i_2] [i_2] [i_1 - 1] [i_2]) || (((arr_10 [i_2]) == (arr_21 [i_2] [i_2] [i_1] [i_1 - 1] [i_1])))));
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                arr_39 [i_1] [i_1] [i_2] [i_1 - 1] = var_3;
                arr_40 [i_1] [i_2] [i_2] [i_1] = ((~(arr_8 [i_9 + 4] [i_1 + 1] [i_1 - 1])));
                arr_41 [i_1] [5] [i_2] = (((arr_31 [i_9] [i_9 - 1] [i_2] [i_1 + 1] [i_1]) ? (arr_25 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1]) : (((~(arr_3 [i_1]))))));
            }
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_29 = (min(var_29, (arr_26 [i_1 - 1] [i_2] [i_10] [18] [i_10])));
                            var_30 = ((-(arr_9 [i_12] [i_10] [i_10 - 1] [i_10])));
                            var_31 -= ((((((arr_20 [1] [i_11] [i_2] [1]) ? (arr_21 [i_10] [i_2] [i_12] [i_11] [i_2]) : (arr_36 [i_1] [i_1] [i_1])))) ? -var_13 : (arr_10 [i_12])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
