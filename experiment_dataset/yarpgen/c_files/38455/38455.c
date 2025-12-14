/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) / (arr_0 [i_0])));
        var_14 = (min(var_14, (((((((arr_2 [1]) ? ((((arr_2 [16]) && var_13))) : (arr_1 [i_0] [4])))) ? var_2 : ((var_12 ? (((arr_0 [2]) ? var_12 : var_11)) : var_8)))))));
        var_15 = (min(((((!(arr_1 [i_0] [i_0]))) ? ((var_3 ? (arr_0 [i_0]) : var_9)) : (arr_2 [i_0]))), (min((arr_1 [i_0] [i_0]), ((var_2 ? var_9 : (arr_2 [i_0])))))));
        var_16 = (min(var_16, (((4192256 & ((var_4 ^ (((var_7 ? var_9 : (arr_1 [i_0] [4])))))))))));
        arr_4 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_1]) ? (arr_2 [i_1]) : (arr_0 [i_1])));
        var_18 = var_1;
    }
    var_19 = var_8;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_20 = (min(var_20, (((!(arr_6 [i_2]))))));
        var_21 = (-((var_6 ? var_6 : (arr_10 [8] [8]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] = (((var_10 && 6702) ? (((var_1 || (arr_9 [i_3] [i_3])))) : ((var_5 ? (arr_2 [i_3]) : (arr_0 [i_3])))));
        arr_14 [i_3] = (!-1970119241);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_22 = 32;
                    arr_21 [i_3] [i_3] [i_4] [i_5] = (!var_9);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_24 [i_6] = (((((arr_11 [i_6] [i_6]) | (arr_11 [i_6] [i_6]))) & ((var_1 ^ (arr_11 [i_6] [i_6])))));
        arr_25 [i_6] &= (((((var_5 * (var_6 / var_9)))) ? (((arr_0 [i_6]) * var_10)) : (94 + 0)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_32 [i_6] [i_7] = ((((min(8192, -29))) ? -50 : (((arr_1 [i_6] [i_8]) ? var_9 : var_1))));

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_36 [i_6] [i_6] [1] [i_9] = (max(102, 91));
                        var_23 += var_2;
                        arr_37 [i_9] [i_6] |= ((~(arr_9 [i_6] [i_9])));
                    }
                    var_24 = (max(((((arr_17 [i_6] [i_6] [i_6]) ? var_12 : var_0))), 11));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((max((arr_35 [i_6] [i_8] [i_10] [i_11]), ((((arr_38 [i_6] [i_7] [7] [i_10] [i_11] [i_11]) | 102)))))) ? 123 : (arr_2 [i_10]))))));
                                var_26 += (((arr_35 [i_6] [i_6] [i_6] [i_6]) ? (arr_17 [i_6] [i_7] [i_8]) : (max(var_10, (arr_39 [i_6] [i_7] [i_10] [6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
