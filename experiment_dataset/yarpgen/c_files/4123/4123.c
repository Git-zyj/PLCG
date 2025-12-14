/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((max(-14095, (((arr_4 [i_2]) ^ -8905)))) >= (((!(arr_0 [i_0])))));
                    var_16 *= ((!((((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) ? var_13 : (arr_7 [i_1] [i_1 - 1] [i_1 + 1]))))));
                    var_17 = -8905;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [3] [2] = ((((((arr_5 [i_0] [i_0] [i_3]) ? (min((arr_7 [i_1 + 1] [i_1 + 1] [i_3]), 32)) : ((((arr_2 [i_0]) == (arr_0 [i_0]))))))) + (max((arr_6 [i_1 + 1] [i_1] [i_1]), (arr_6 [i_1 + 1] [i_0] [i_0])))));
                        var_18 = (((arr_6 [i_0] [i_2] [i_0]) + (arr_0 [i_0])));
                    }
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        var_19 = (min((!0), ((-26435196 ? (arr_7 [i_1 + 1] [i_4 - 1] [i_4 - 2]) : (arr_7 [i_1 + 1] [i_4 - 3] [i_4 - 3])))));
                        var_20 = (max(var_20, ((((arr_4 [i_0]) || (arr_11 [i_2] [i_1] [i_2]))))));
                    }
                    var_21 = (arr_8 [i_2] [1] [i_1] [i_0]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_16 [i_5] = 206;
        var_22 = var_5;
        var_23 += (arr_13 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_24 = (min(var_24, 0));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((max((arr_19 [12] [i_7] [i_6] [i_5]), (arr_18 [i_7] [i_8]))) - ((((arr_23 [i_9]) ? (arr_23 [i_7]) : var_11))))))));
                                arr_26 [i_5] [i_5] = (arr_22 [i_9] [i_6] [i_9] [i_8]);
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_5] = var_0;
    }

    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_26 ^= ((((max((arr_18 [i_10] [i_10]), (arr_22 [i_10] [i_10] [i_10] [i_10])))) && ((max((min((arr_20 [i_10] [i_10] [i_10]), (arr_13 [i_10]))), (arr_13 [i_10]))))));
        arr_30 [i_10] = (arr_14 [i_10]);
        arr_31 [i_10] = 1;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_37 [i_10] [i_10] [i_10] = (arr_28 [i_11]);
                    arr_38 [i_11] = ((((-(arr_21 [i_10] [i_12] [i_11] [i_10]))) - (((arr_21 [i_12] [i_11] [i_11] [i_10]) + (arr_21 [i_10] [i_10] [i_11] [i_12])))));
                }
            }
        }
        arr_39 [i_10] [i_10] = ((((max(135, (((arr_22 [i_10] [i_10] [i_10] [i_10]) & (arr_23 [i_10])))))) ? (((((arr_17 [i_10]) ? (arr_29 [i_10]) : var_5)))) : (arr_29 [i_10])));
    }
    #pragma endscop
}
