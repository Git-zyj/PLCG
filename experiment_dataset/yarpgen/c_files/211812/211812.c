/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 -= ((!(arr_1 [i_1])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_13 *= ((!((!(arr_1 [i_0])))));
                        var_14 = ((-((((!(arr_5 [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_15 = (arr_1 [i_1]);

                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0]);
                            var_16 = (arr_11 [i_0] [i_1] [i_2] [i_0]);
                            arr_15 [i_0] = ((~(arr_3 [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [10] [i_0] [i_4] [10] [6] [i_6] = ((((!(arr_6 [i_0] [i_0] [i_2])))));
                            arr_20 [i_0] = (arr_1 [i_6]);
                            var_17 ^= (arr_17 [i_0] [i_1] [i_1] [i_1] [i_4] [11] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_4] [i_0] [i_1] [i_0] = ((-((-(arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_7])))));
                            arr_24 [i_7] [i_4] [i_0] [i_2] [i_0] [i_1] [i_0 - 2] = ((~(((!(arr_1 [i_2]))))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_18 = arr_17 [i_0] [i_1] [8] [i_2] [i_4] [i_1] [i_8];
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0] = ((!(((~(arr_12 [3] [1] [3] [i_1] [8]))))));
                        }
                        arr_28 [i_0] [i_2] [i_4] &= ((~(arr_12 [i_0 - 1] [i_0] [i_0 - 1] [5] [9])));
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = (((-(arr_6 [i_0] [i_1] [i_4]))));
                        var_19 = ((~((~(arr_6 [1] [i_1] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_20 *= (((~(arr_25 [i_0 + 1] [i_0 + 1] [7] [i_2] [i_2] [6] [i_9]))));
                        arr_34 [i_0] [i_0] [i_0] [11] = (arr_16 [1] [i_0 + 1] [i_0] [i_0] [i_2] [i_9] [i_9]);
                        arr_35 [i_0] [10] [i_0] [i_1] [i_0] [4] |= ((~(!31625)));
                    }
                    arr_36 [i_0] [i_0] [i_0] = ((-(arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 1])));
                    arr_37 [i_0] [i_0] [i_2] = ((-((~(arr_0 [i_1])))));
                }
            }
        }
    }
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                var_22 ^= ((-(((!(((-(arr_39 [i_11])))))))));
                var_23 = 0;
            }
        }
    }
    #pragma endscop
}
