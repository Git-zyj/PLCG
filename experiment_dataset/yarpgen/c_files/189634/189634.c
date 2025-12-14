/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [i_1] [i_4] [i_2] = var_3;
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_3] [i_0 + 1] |= (min(5796, -32762));
                            }
                        }
                    }
                    var_15 = ((!(((var_9 & ((var_11 ? (arr_11 [17] [i_1] [i_1] [i_1] [i_2] [i_1]) : 932898191)))))));
                    var_16 = (-414837281 || 4294967293);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((var_0 ? var_7 : 138))) ? (((min(var_1, var_11)))) : (0 * var_7))) * (((((arr_8 [i_6] [i_6] [6] [i_6]) * (arr_14 [i_5 - 1]))) * 3)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_18 = (((~65535) ^ (((arr_8 [i_5] [i_5] [i_5] [i_5 + 1]) ? var_11 : var_3))));
                            var_19 = (+(max((2147483632 * var_12), (arr_5 [i_5 - 1] [i_5]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_20 -= (((65520 - (arr_24 [i_5 + 1] [i_5 + 1] [i_10 + 3] [i_10]))));
                            var_21 = (max(var_6, var_2));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_22 = (min((arr_40 [i_11] [i_11 - 1] [i_13] [i_13] [i_12 - 3]), ((4294967295 - (((max((arr_35 [i_11] [i_12] [i_13] [i_12] [5] [i_15]), 40427))))))));
                                var_23 = ((max(238, 109)) >> ((((11328772380725846487 ? 32762 : 1763389708)) - 32726)));
                                var_24 = ((((-4181 ? (var_3 - var_5) : (var_1 / var_14))) == (((var_5 + -32753) ? (((var_10 || (arr_6 [i_12] [10] [i_15])))) : var_5))));
                                arr_41 [i_11] [i_12] [i_13] [i_12] [i_12 + 1] [i_11] = ((3 ? (~-13744) : (max((-32756 & 4180), 2147483630))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_46 [i_11 + 1] [i_11 + 1] [i_16] [i_11] [i_12] = (~var_8);
                            arr_47 [i_11] [i_11 - 2] [i_17] [i_11] [1] = ((~var_4) ^ ((-4 & (arr_5 [i_17] [i_11]))));
                            var_25 = (max(var_25, ((min(var_9, 32)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 22;i_19 += 1)
        {
            {
                var_26 = var_8;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 0;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 22;i_21 += 1)
                    {
                        {
                            arr_57 [i_21 + 1] [i_20] [i_19] [i_18] [i_18] = (var_9 <= var_14);
                            var_27 = (min(var_27, (max(((-(arr_54 [i_18] [i_19] [i_19] [i_20 + 1] [10]))), ((((var_7 / var_9) ? (((42 ? (arr_55 [i_18] [i_19] [i_19 + 1] [i_21 + 2]) : var_13))) : ((var_10 ? (arr_50 [i_18] [i_18] [i_18]) : var_9)))))))));
                            arr_58 [14] [i_19] [i_20] [i_19] = (1 ^ 12);
                            var_28 = (((((-((max(14, 1)))))) || ((((var_11 / 2147483632) / var_6)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
