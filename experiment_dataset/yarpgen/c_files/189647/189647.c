/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((~(((arr_0 [i_0] [12]) ? 0 : var_8))));
        var_16 = (((arr_3 [i_0] [i_0]) << (14336 - 14336)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] [13] &= (1595488794 * var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_13 [16] [i_3 + 3] [i_3 - 3] [i_4 + 2] [i_4] [i_3 - 3]) ? var_14 : (arr_13 [i_0] [i_0] [i_3 - 3] [i_4 - 1] [14] [14])));
                                var_18 = (~0);
                                arr_16 [i_0] [i_1] [12] [i_2] [i_3] [0] &= ((arr_8 [i_4 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 3]) != (arr_8 [i_4 + 1] [i_3 - 2] [i_3 + 2] [i_3 + 3]));
                            }
                        }
                    }
                    arr_17 [i_0] [1] [1] &= ((var_10 ? (arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_2));
                }
            }
        }
        arr_18 [12] = (arr_1 [i_0]);
        var_19 = (max(var_19, ((((arr_4 [12] [12] [i_0]) <= (arr_4 [i_0] [i_0] [i_0]))))));
    }
    var_20 = 2130706432;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_33 [i_5] [14] [i_6] = (((arr_6 [i_6 - 2] [14] [i_6 - 1] [i_6 - 2]) ? var_2 : (arr_6 [i_6 + 1] [7] [i_6 - 2] [i_6 + 1])));
                            var_21 = ((((8485973459871237637 ? 57597 : 12288))) ? ((((arr_32 [i_5] [1] [i_7] [12] [i_8] [i_6]) ? (-9223372036854775807 - 1) : 8485973459871237637))) : ((var_14 ^ (arr_3 [i_5] [i_6]))));
                            var_22 = 0;
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_37 [i_5] [i_5] &= ((~(arr_21 [i_5] [i_8])));
                            var_23 *= 1;
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_24 = (258048 * var_8);
                            arr_41 [i_5] [i_6 + 1] [i_5] [i_8] [i_6] [i_6] = 0;
                            arr_42 [i_6] = (((arr_15 [i_6] [i_6] [7] [i_6 - 2] [i_11]) ? ((121 ? var_14 : 52829)) : (~1595488794)));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] = -1412;
                            var_25 = (((arr_15 [i_6] [i_6 - 2] [i_7] [i_8] [i_12]) / (arr_2 [i_5])));
                        }
                        var_26 += (arr_29 [1] [i_7]);
                        var_27 = (min(var_27, 10243));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        arr_50 [i_5] [i_6] = (min((-258052 + var_0), ((var_5 ? (var_0 * var_4) : 0))));
                        arr_51 [i_5] [i_6 + 1] [i_7] [i_6] = (min((((((-2126 & (arr_3 [i_13] [i_7])))) ? var_5 : var_13)), ((((arr_1 [i_7]) ? 1 : (arr_1 [i_13]))))));
                        arr_52 [11] [i_6] [i_7] [11] = var_5;
                        arr_53 [i_5] [i_6] [i_7] [i_6] = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            {
                                arr_58 [i_5] [i_5] [i_7] [i_6] [2] [i_5] [i_5] |= (((((+(((arr_55 [i_6] [i_7] [i_14 + 1] [i_5]) ? 21990 : var_5))))) ? ((-(arr_43 [3] [i_15] [i_15 + 1] [13] [i_14] [i_6 + 1] [i_6]))) : (((var_2 ? (arr_11 [i_5]) : var_13)))));
                                var_28 = 1;
                                var_29 = ((-(31 & 30770)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((var_6 ? var_12 : (((var_12 * 1) - (max(1, 2147483624)))))))));
                                arr_63 [i_6] [i_16] [i_5] [i_6] [i_5] [i_5] [i_5] = (((min(((((arr_49 [i_6] [i_16] [i_7] [2] [13] [i_6]) <= 2147483624))), ((var_7 ? 1595488767 : -945866853)))) >= (((((((arr_24 [i_5] [8] [i_6] [i_17]) ? 3796632611700697152 : var_9))) ? (arr_26 [i_5] [i_6] [i_6]) : (1 < 12))))));
                            }
                        }
                    }
                    var_31 -= (((max((min(var_6, var_9)), (min((arr_38 [i_7] [i_7] [i_6] [i_5] [i_5]), var_3)))) > ((((var_14 >= (arr_15 [i_5] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_5])))))));
                }
            }
        }
    }
    #pragma endscop
}
