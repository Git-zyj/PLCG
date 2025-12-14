/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 |= (max(-1890808206, 97));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (~-18446744073709551615);
                    var_14 = (((!var_4) ? ((0 ? 0 : -4)) : (min(((-(arr_8 [i_0] [3] [i_2]))), (arr_8 [0] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((-((((min(0, -25914))) ? ((((0 <= (arr_1 [i_0] [i_1]))))) : (var_6 + var_5))))))));
                                var_16 = ((((~(arr_7 [i_0]))) / var_2));
                                var_17 = (max(var_17, (((arr_4 [i_0] [i_0] [i_3]) % ((var_8 ? -153806044 : (var_6 == var_5)))))));
                            }
                        }
                    }
                    arr_13 [i_2] = (arr_5 [i_0]);
                    var_18 -= -30;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    arr_18 [i_5] [i_5 + 2] [i_6] [i_6] = (min(3, 12681350949559669505));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_19 &= (((arr_11 [i_0] [i_5 + 3] [i_6]) ? var_0 : (((max(-259673854, var_6))))));
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 = -9223372036854775777;
        var_21 = (((arr_26 [i_9] [i_9]) & var_9));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_31 [i_10] = var_8;
        arr_32 [i_10] = var_6;
    }

    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    var_22 = ((-(((259673854 == var_7) ? (var_9 != 5362272924977236475) : (arr_6 [i_12 - 3] [i_12 - 2] [i_13] [i_13])))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_23 = (((((arr_17 [i_11] [i_12 - 3]) ? var_5 : 12681350949559669505)) & 3553256660318911409));
                                arr_45 [i_14] [i_14] [i_13] [i_13] [i_13] = ((!((((arr_29 [i_11]) ? (min(-259673854, (arr_2 [i_12]))) : ((-64 ? var_10 : (arr_20 [i_15] [0] [i_13] [i_11] [i_11]))))))));
                                var_24 -= (arr_42 [i_13]);
                            }
                        }
                    }
                }
            }
        }
        arr_46 [i_11] [i_11] = (arr_12 [i_11] [i_11]);
        var_25 = (arr_16 [i_11] [i_11]);
    }
    #pragma endscop
}
