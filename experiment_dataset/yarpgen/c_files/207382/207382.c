/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = (((0 ? var_10 : (arr_7 [i_3 + 3] [i_3] [i_3 + 3] [i_3] [i_0 - 1] [i_0 - 1]))));
                        var_15 ^= (((min((arr_7 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]), ((var_12 ? (arr_7 [i_0 + 1] [17] [i_2] [i_3] [i_2] [i_3]) : 7902732775038952573)))) / (((-(arr_8 [i_0] [i_1] [14] [i_3 - 1]))))));
                    }
                }
            }
        }
        arr_10 [1] = (min(var_6, (!var_0)));
        arr_11 [i_0] = (arr_1 [i_0] [i_0 + 2]);
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        arr_14 [i_4] = (max((arr_7 [i_4 + 3] [i_4] [19] [i_4] [i_4] [i_4 + 2]), var_5));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_22 [i_4 + 3] [i_5 - 3] [i_6] [i_7] = ((var_1 ? (((-((var_4 / (arr_6 [i_4 + 2] [i_4 + 2] [i_6])))))) : ((-((977543094631398956 ? -7902732775038952592 : var_0))))));
                        var_16 = var_4;
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_17 |= ((!(arr_9 [i_4] [i_4] [i_4 + 1] [i_4 + 1])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 7;i_10 += 1)
                {
                    {
                        arr_30 [i_4] [i_4] [i_4] [i_8] [i_9] [i_10] = max((((arr_28 [i_10 + 1] [i_4 + 2]) / var_12)), (arr_15 [i_4] [i_4] [i_4]));
                        arr_31 [3] [i_8] = (((-(min(var_4, (arr_18 [i_4] [i_8]))))));
                        var_18 = ((((((var_10 || (arr_9 [i_4] [i_8] [i_9] [i_10]))) ? (arr_24 [i_4]) : (arr_27 [i_4] [i_4] [2]))) & (((max(23708, 23708))))));
                    }
                }
            }
            var_19 += 41827;
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_20 = (min(var_10, (((-7902732775038952574 ? (arr_26 [i_4] [i_11] [i_4]) : var_12)))));
                    var_21 = 26036;
                    var_22 = (max((var_5 && -7902732775038952574), (((!(!8770495342212654561))))));

                    for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_4] [i_4] [i_12] [i_12] [i_12] [i_13 + 2] = ((-((-(arr_38 [i_4 + 3] [i_4 - 1] [i_13 + 1] [i_13])))));
                        var_23 = ((var_7 * (arr_37 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4])));
                        var_24 = var_11;
                    }
                    for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            arr_46 [i_14] [i_11] [i_11] [10] [i_11] = (arr_17 [i_14 + 3] [i_4 - 1] [i_4 - 1] [i_14 + 2]);
                            arr_47 [i_4 + 2] [i_14] [1] [i_14 + 2] [i_15] = ((((max(var_6, (arr_21 [i_4 - 1] [5] [i_4 + 1] [i_4 + 1])))) ? ((~(arr_21 [i_4] [i_11] [i_12] [i_14]))) : (((arr_21 [1] [i_11] [i_12] [i_14 + 3]) ? var_3 : (arr_21 [i_4] [i_11] [i_12] [i_14 + 2])))));
                        }
                        var_25 = (max(var_25, (17340481405451932008 * -1)));
                    }
                }
            }
        }
    }
    var_26 *= 26036;
    #pragma endscop
}
