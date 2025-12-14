/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = -1825794720;
        arr_3 [i_0] [i_0] = ((var_1 ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0]) + var_7))));
    }
    var_10 += 1825794714;

    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((var_2 - (arr_6 [2]))));

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_11 = (max((max((~2147483634), ((-188138892 ? var_5 : var_0)))), (~var_7)));
            var_12 = 2346578095;
            arr_11 [i_1] [i_1] [i_1] &= ((max(var_2, (arr_6 [i_2]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_13 ^= (max(var_6, ((var_6 ^ (arr_5 [i_2] [i_2 - 1])))));
                        var_14 = (max(var_14, var_6));
                        var_15 = -var_9;
                        var_16 = (max(var_16, ((max(-2147483643, (arr_6 [i_1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_17 *= ((var_6 ? (max((arr_23 [i_1] [i_1] [i_6] [i_6]), (-2147483647 - 1))) : (((((var_7 / (arr_12 [i_1])))) ? 176 : (arr_9 [i_1] [i_5] [i_6])))));
                    var_18 += var_9;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_33 [4] [4] [1] = var_9;
                    var_19 = var_3;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_20 = -121;
                        arr_36 [i_7] [i_7] [i_9] [i_10] [i_10] [i_9] = 1825794717;
                    }
                }
            }
        }
        arr_37 [i_7] = (((var_0 ? (arr_10 [i_7]) : (arr_4 [i_7]))));
        var_21 = ((((((var_8 + 2147483647) >> (2147483648 - 2147483629)))) && -1));

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_22 += ((((min((var_2 & 63), ((max(-1825794714, -1)))))) ? (arr_27 [i_7]) : (min(var_4, var_7))));
            var_23 = (min(var_23, (((((((arr_31 [i_7] [i_11 - 1] [i_11 - 1] [i_7]) != var_7))) << (!47333))))));
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_24 *= (~(arr_18 [i_7] [i_12 - 1] [i_7]));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                arr_47 [i_7] [i_7] = (~var_7);
                arr_48 [i_13] [i_12] [i_7] &= var_7;
                arr_49 [i_7] [i_7] [i_7] = (((arr_21 [i_13] [0] [i_7] [i_12 - 1]) / (arr_22 [i_12 - 1])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_25 |= ((-((-(arr_29 [i_7] [i_7] [6])))));
                            var_26 = ((-((18188 ? var_7 : (arr_16 [i_7] [i_7] [i_7])))));
                            var_27 = (max(var_27, (!var_6)));
                            var_28 = (max(var_28, var_0));
                            var_29 = (((arr_17 [i_12 - 1] [i_12 - 1]) ? (arr_17 [i_12 - 1] [i_12 - 1]) : -16));
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(-1825794742, (((!(var_0 % var_4))))));
    var_31 = ((((((max(var_6, var_4)) / var_8))) + (max((((-28089 ? 126 : var_6))), 1134907106097364992))));
    #pragma endscop
}
