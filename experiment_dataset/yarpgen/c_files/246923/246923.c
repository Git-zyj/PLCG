/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = (-((var_7 ? var_0 : 5248)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] = ((-5264 ? (arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_1] [i_1]) : (arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_0] [i_0])));
                                var_10 = ((((9223372036853727232 ? var_2 : (arr_5 [i_0] [8] [i_2]))) != (arr_10 [i_1 + 1] [i_1 - 2] [i_2] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 + 3])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_14 [i_5] = var_1;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_11 = ((~(arr_20 [i_0] [i_5] [i_6] [i_7])));
                        arr_21 [i_0] [i_0] [i_0] [15] [i_5] = (((arr_17 [i_0] [i_5] [i_5] [i_7]) > (arr_0 [i_5])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_12 = (((arr_17 [i_0] [i_5] [i_5] [i_0]) ? 90 : (arr_17 [i_0] [i_5] [i_5] [i_9])));
                        arr_27 [i_5] [i_5] = (((166 * var_3) > (arr_22 [i_0] [i_5] [i_8])));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_9] [i_5] = var_6;
                        var_13 = (((~var_3) ? (arr_22 [i_0] [i_8] [i_9]) : (((var_9 ? (arr_18 [i_0] [i_5] [i_8] [i_9]) : 90)))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] [i_10] [i_10] = ((((((arr_2 [i_0]) ? (arr_24 [16] [6]) : var_5))) ? (arr_5 [22] [i_10] [22]) : (((!(arr_12 [16] [i_10]))))));
            arr_33 [i_10] [i_10] = (((arr_9 [i_10] [i_0] [i_0]) >> (arr_9 [i_0] [i_0] [i_0])));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_14 = (-(((arr_12 [i_11] [i_11]) % 1)));
            arr_37 [i_11] = (arr_35 [i_0] [i_11] [i_11]);
        }
    }
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        arr_41 [i_12] |= (((((min(5264, -6327185913762745035)) / ((var_8 ? (-9223372036854775807 - 1) : 5266)))) | (((-((((arr_29 [i_12]) == var_2))))))));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_15 = (max(var_15, (((+((-(((arr_12 [i_12] [i_13]) ? (arr_39 [1] [i_13 + 1]) : 1)))))))));
                        arr_51 [i_13] [i_13] [i_14 + 1] [i_15] = (-(arr_35 [i_12] [i_13 + 1] [i_14 - 1]));
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, -4294967295));
    var_17 = var_2;
    #pragma endscop
}
