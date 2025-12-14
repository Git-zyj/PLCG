/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, (var_0 >= var_12)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [14] [i_1] [i_0] = ((var_13 ? var_13 : var_7));
                    var_16 = (min(var_16, (!var_11)));
                    arr_7 [i_1] [i_2] [10] [4] &= ((var_5 ? var_12 : var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [9] [9] [14] [1] [i_0] [i_3] [5] = (var_9 || var_9);
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [4] = ((-((var_4 ? var_8 : var_4))));
                                var_17 -= var_10;
                                var_18 = (var_9 >> (var_4 - 58398));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_19 = ((var_5 << (var_6 - 31881)));
        var_20 = var_3;
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] = var_1;
        var_21 = var_14;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((var_4 ? var_4 : var_2));
        arr_24 [i_7] = (var_0 ? var_10 : var_13);
        var_22 *= (var_6 ? ((var_14 ? var_13 : var_10)) : var_13);
        var_23 = ((var_1 || (~var_0)));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = ((((((((var_3 ? var_1 : var_13))) ? var_2 : ((var_6 ? var_2 : var_9))))) ? (var_7 && var_5) : ((var_4 ? (((var_3 ? var_11 : var_11))) : ((var_7 ? var_2 : var_12))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_38 [i_11] [i_11] [i_8] [17] = ((((((var_11 ? var_7 : var_9)) < (~var_3))) ? (((((var_1 ? var_11 : var_4))) ? ((var_6 ? var_7 : var_10)) : (!var_1))) : (((var_12 ? var_2 : var_8)))));
                        arr_39 [i_8] [9] [i_9 - 1] [i_9] [22] [i_11] = (((var_13 <= var_0) ? (~var_4) : ((((((var_9 ? var_4 : var_4))) <= var_12)))));
                        arr_40 [15] [i_8] = (var_12 <= var_14);
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        arr_43 [i_12] = ((-(((((var_14 >> (var_11 + 1480)))) ? var_12 : var_0))));
        var_24 = (var_5 % ((var_9 ? var_3 : var_1)));

        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_25 = (((((var_8 ? var_0 : var_9))) ? (var_12 * var_6) : (!var_4)));
            var_26 ^= (((var_12 * var_6) ? ((var_0 ? var_12 : var_5)) : (var_10 >= var_6)));

            /* vectorizable */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                arr_48 [i_12 + 2] [i_12 + 2] [17] [12] &= (var_11 ^ var_5);
                var_27 -= (var_7 / var_0);
                arr_49 [10] [i_13] [11] = ((var_11 ? var_14 : var_14));
                var_28 = var_9;
            }
            var_29 = (((((var_13 ? var_4 : (!var_9)))) ? ((var_9 ? ((var_1 ? var_2 : var_10)) : ((var_1 ? var_14 : var_12)))) : ((((var_6 ? var_1 : var_14))))));
        }
        arr_50 [i_12] = (((!var_8) ^ -var_4));
        arr_51 [2] = var_7;
    }
    var_30 = var_11;
    var_31 = (!var_9);
    var_32 = var_3;
    #pragma endscop
}
