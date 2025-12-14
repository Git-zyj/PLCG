/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [15] [i_0] [i_1] = ((-(((((var_7 ? (arr_6 [i_2] [18] [i_0] [i_0]) : var_8))) ? var_18 : ((min(var_1, 4)))))));
                    var_20 *= ((32767 ? -32746 : 252));
                }
            }
        }
        var_21 = arr_6 [5] [i_0] [5] [i_0 - 1];
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_22 = ((((((var_14 > 9) ? 22 : ((4 ? var_4 : (arr_10 [i_3])))))) ? ((~(arr_11 [i_3 + 4] [i_3]))) : (((~((max(255, 56940))))))));
        arr_12 [i_3 + 4] = (((var_10 ? (max((arr_9 [i_3]), var_3)) : (((min(252, 4)))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_23 [i_5] = (arr_9 [i_5]);

                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        var_23 = (arr_3 [i_6] [i_5 + 3]);
                        arr_27 [i_4] [i_5] [i_4] = (((arr_5 [i_5]) / (arr_15 [i_5 + 2] [i_7 + 2])));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_24 -= (((((min((arr_3 [i_6] [i_6]), (arr_6 [i_4] [i_4] [i_4] [i_4])))) / ((127 ? var_15 : 63297)))));
                        var_25 = ((((((241 - 252) ? var_6 : -32767))) ? 34599 : ((-(min(var_6, var_2))))));
                        var_26 = (min((arr_3 [i_5 + 3] [19]), (min((arr_3 [i_5 + 3] [i_5 + 3]), (arr_3 [i_5 + 3] [6])))));
                        var_27 = 255;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_28 |= (arr_25 [i_5 + 1] [i_5 + 3] [i_5 + 1]);
                        var_29 = ((((((arr_15 [i_5 - 1] [i_4]) ? (arr_15 [i_5 - 1] [i_5]) : 2771691118))) ? (((arr_25 [i_4] [10] [i_5 + 3]) - (arr_25 [i_5] [8] [i_5 - 2]))) : var_2));
                        var_30 -= (arr_26 [i_9] [i_4] [i_5 - 1] [i_9]);
                        var_31 *= 120;
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        arr_35 [4] [i_6] [i_6] [4] &= ((((((arr_18 [i_5 + 1] [12]) | (2147483647 / var_13)))) ? var_4 : (min((arr_21 [i_10] [i_4] [i_10 - 2]), var_15))));
                        var_32 = (min((max(255, var_10)), (((var_13 >> (34594 - 34565))))));
                    }
                }
            }
        }
    }
    var_33 = var_14;
    #pragma endscop
}
