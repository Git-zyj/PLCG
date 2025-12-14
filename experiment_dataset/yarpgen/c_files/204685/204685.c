/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((var_12 < (max(var_14, var_13)))) ? (max(var_6, ((var_3 ? var_16 : var_2)))) : var_3));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_18 |= ((var_4 ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 1])));
        var_19 = (arr_0 [i_0 + 2]);
        var_20 = (arr_0 [i_0]);
        var_21 = ((-1319710498 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_22 = (min(var_22, 8));
        var_23 += ((34683 ? 7 : (arr_1 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_24 = (((var_2 == var_5) ^ (var_6 || 524287)));
                                var_25 = (arr_8 [i_1] [i_1] [i_1] [i_3 + 1]);
                            }
                        }
                    }
                    var_26 = (min(var_26, (((1 ? var_12 : var_1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_27 = ((52493 * (arr_21 [i_3] [i_3] [i_3])));
                                var_28 += (arr_13 [i_1 + 2] [i_6 - 1] [i_1 + 2] [i_6 - 3]);
                                arr_22 [i_1 + 4] [i_1] [i_1] [4] [i_1] [i_1 - 2] [i_1] = ((!(var_4 * var_7)));
                                var_29 *= var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_30 = ((106 ? 232 : (arr_28 [i_1 - 2] [i_1 - 2] [2] [i_8 - 1])));
                                arr_29 [i_1] [i_2] [i_3] [i_1] [i_9] = ((((arr_23 [i_1] [i_2] [12] [i_1]) * var_3)));
                            }
                        }
                    }
                    var_31 = (((arr_20 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 4] [i_1] [i_3]) / var_6));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 7;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            {
                arr_34 [i_10] [i_11] [i_11] = ((!(((min(var_10, (arr_32 [i_10] [i_10 + 1] [i_10 + 4])))))));
                var_32 = ((1 ? 137 : 13031));

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_33 += 1;
                    arr_38 [i_10] [i_10 - 1] [i_11] [i_12] = (max(((var_8 & (arr_21 [i_10 + 3] [i_10 + 4] [i_11]))), (max((arr_21 [i_10] [i_10 - 2] [i_12]), (arr_36 [i_11 - 1] [i_11 + 1] [i_11] [i_11 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
