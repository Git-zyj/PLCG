/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-((5 ? 58935 : 0)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 6601));
                                var_22 = (arr_12 [i_0] [i_1] [i_0] [i_3] [i_4]);
                            }
                        }
                    }
                    arr_13 [13] [i_1] [i_0] = (((arr_6 [i_0] [i_1] [i_2]) ? var_7 : ((-11 ? var_0 : -var_5))));
                    var_23 = (((arr_2 [i_0] [i_0] [i_2]) ? var_18 : var_12));
                    arr_14 [i_0] [i_1] [i_2] [i_0] = var_13;
                }
            }
        }
        arr_15 [i_0] [i_0] = ((!(((~(~var_19))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_24 ^= var_13;
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_3 != (arr_4 [i_5] [i_5] [i_8] [i_9])));
                            }
                        }
                    }
                    var_25 = (14803472580881444603 ? 58935 : 4150295097);
                    arr_29 [i_5] [i_6] [i_5] = ((((((arr_0 [i_5]) ? var_15 : var_10))) ? (10962802066984792105 >> 16) : var_7));
                }
            }
        }
        arr_30 [i_5] = (arr_12 [1] [i_5] [i_5] [i_5] [i_5]);
        arr_31 [i_5] = var_1;
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_26 = (min(var_26, ((((41321 ? 0 : 47103))))));
            arr_36 [i_11] [i_11] [8] = ((~(!var_1)));
            arr_37 [i_11] = (~6594);
        }
        arr_38 [i_10] = var_16;
        var_27 += ((136 ? (min((arr_20 [i_10] [i_10] [i_10]), (~-21))) : 58935));
        var_28 = ((9406 ? (((min(65526, (arr_0 [i_10]))))) : ((1 ? 4378915523946913280 : (620610988 && 4192256)))));
    }
    #pragma endscop
}
