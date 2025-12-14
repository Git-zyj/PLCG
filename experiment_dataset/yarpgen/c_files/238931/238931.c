/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_0)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (min(var_4, (~899098450)));
        arr_2 [5] [5] = var_9;

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((max((arr_3 [i_0] [i_0] [i_1 - 2]), (arr_3 [i_0] [i_0] [i_0]))));
            arr_7 [i_0] [i_1] = (arr_3 [i_1 - 1] [i_1] [i_1 - 2]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 = (arr_15 [9]);
                        var_18 *= var_4;
                    }
                }
            }
            var_19 = (min(var_19, (arr_13 [i_0] [i_0] [i_0])));
            var_20 = (((arr_8 [i_0] [i_2]) / (((arr_15 [i_2]) / var_11))));
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_21 = (min(var_21, (((((-(arr_18 [i_5]))) % (((((arr_18 [i_5]) && ((((arr_18 [i_5]) ? var_8 : var_6))))))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_7] |= (max((arr_20 [i_5] [i_5] [i_5]), var_12));
                    arr_25 [i_5] [i_6] [i_6] [i_7] = (arr_23 [i_7]);

                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_6] [i_6] [i_7] [i_6] = 1110998117;

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_5] [i_6] = ((((max((arr_31 [i_6 + 1] [i_7 + 2]), (arr_20 [i_5] [i_8] [i_8])))) == (((!var_12) ? ((((arr_30 [i_7 + 1]) == (arr_32 [i_7])))) : var_10))));
                            var_22 = (~((~(arr_30 [i_7 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_6] = ((var_7 % ((~(arr_36 [i_5] [i_5] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 2])))));
                        arr_38 [11] [i_6] [i_10] = (((arr_20 [i_6 + 1] [i_6 - 1] [i_7]) && (arr_20 [i_6 + 1] [i_6 - 1] [i_6])));
                        arr_39 [i_5] [i_5] [i_6] = (((arr_21 [i_6 + 1] [i_6 - 1]) >= var_8));
                    }
                    arr_40 [i_6] [i_7 + 2] = (arr_26 [i_5] [i_6] [i_6] [i_5]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    arr_45 [i_5] = (arr_35 [i_5] [i_5] [i_5] [i_11] [i_11 + 1]);
                    var_23 -= -115511870;
                }
            }
        }
    }
    var_24 = (((var_3 == 39901) ? var_11 : (13840893075459769831 == 1)));
    #pragma endscop
}
