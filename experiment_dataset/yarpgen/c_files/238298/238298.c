/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_19 = (((((-4406991817886112004 ? (arr_0 [i_0] [i_1]) : -365))) ? var_0 : ((-4406991817886112023 ? 669846994699530356 : 4406991817886112023))));
                        var_20 = ((10431994130810930950 != (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                        var_21 = (arr_6 [i_2] [i_2 - 1]);
                        var_22 = var_18;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (arr_2 [i_2] [i_2])));
                        var_24 &= (arr_6 [i_0 - 3] [i_1]);
                        arr_13 [11] [i_1] [i_2] [i_4] = (arr_10 [i_1] [i_2]);

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_25 = (min(-4406991817886112003, 8014749942898620668));
                            arr_17 [i_1] [i_1] [i_2 + 2] [i_1] [i_0] = (arr_6 [i_0] [i_0 - 3]);
                            arr_18 [i_0] [i_1] [i_2] [i_4] [i_5] = ((var_2 ? (((arr_11 [i_0 + 1] [i_1] [i_4] [6]) ? 2 : var_17)) : (arr_4 [i_0 - 3] [i_0 - 3] [i_2 + 1])));
                            var_26 = (((!(((61 ? (arr_15 [i_0] [i_1] [i_1] [i_4] [i_5]) : var_14))))));
                            arr_19 [i_0 - 2] [i_1] [i_2] [11] [10] = ((+(((arr_7 [i_0] [2] [i_0 - 1] [2]) ? (arr_7 [i_0 - 4] [i_0] [i_0 - 1] [i_0]) : 225))));
                        }
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_2 + 2] = ((4406991817886112023 ? 12158062622435994017 : 32));
                            arr_24 [i_0 - 2] [0] [i_2] [1] [8] = (arr_4 [i_2] [i_4] [i_6]);
                        }
                        var_27 &= 10447;
                    }
                    arr_25 [i_0] = var_12;
                    arr_26 [i_2] [i_2] [6] [13] = 122;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_28 = ((var_17 ? (((min((arr_21 [i_7] [0] [3] [9] [i_7] [i_7] [0]), (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) : ((-((((arr_10 [i_7] [i_7]) != (arr_1 [i_7]))))))));
        arr_29 [i_7] [i_7] = (arr_10 [i_7] [i_7]);
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_29 = (arr_31 [i_8]);
        arr_32 [i_8] = (-((var_17 ? (arr_30 [i_8] [i_8]) : 163)));
        arr_33 [i_8] = (arr_30 [i_8] [i_8]);
    }
    #pragma endscop
}
