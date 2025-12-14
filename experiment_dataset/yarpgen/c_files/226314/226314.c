/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 1;
                                var_15 = (max(((1 ? (arr_0 [i_4]) : (arr_1 [i_2]))), 1));
                                var_16 = (((-((0 ? (arr_11 [i_4] [i_1] [i_0] [i_1] [i_1] [1] [i_0]) : var_12)))) + (((arr_0 [i_0]) ? var_13 : var_0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 += 1;
                                arr_19 [i_1] [i_1] [i_2] [14] [i_6] = (((0 == 1972116268) ? var_9 : (arr_3 [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_32 [i_10] [i_10] [i_9] [i_8] [i_10] = var_4;
                                arr_33 [i_7 - 2] [i_8] [i_8] [i_7] [1] [i_11] &= (((max(-2147483623, (arr_30 [i_8] [i_7 - 2] [i_7 - 2]))) >> ((((((((arr_26 [i_7] [i_8]) + -2147483604))) ? ((4398046511103 + (arr_25 [i_9]))) : 1)) - 4397857749166))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_39 [i_13] [i_12] [i_12] [i_9] [i_9] [i_8] [i_7] = ((((var_2 ? (((arr_36 [i_7 + 1] [i_7 - 2] [i_7] [i_7] [i_7]) ? 0 : -850309948)) : ((min(var_12, var_4)))))) ? -var_0 : ((-((1 ? 0 : 227752745015741089)))));
                                var_18 -= (((arr_35 [i_13] [i_13] [i_13] [i_13] [i_13]) ? (((1 || -1495712715) ? (var_12 && 18218991328693810526) : 13)) : (((((!(arr_26 [i_12] [i_13]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_52 [i_14] [i_14] [i_14] [i_14] = (max((((arr_27 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1]) ? 1 : 18446744073709551615)), (((0 ? 1538498492 : 0)))));
                            arr_53 [i_14] [i_14] [i_14] [i_14] = ((-var_7 | ((max(0, 1)))));
                            var_19 = (arr_43 [i_15 - 1]);
                            arr_54 [i_14] [1] [i_16] [i_16] [i_15] [i_16] = max(var_7, (((arr_9 [i_15 + 1] [i_15] [i_15 - 1] [i_15 + 1]) | (arr_9 [i_15 - 1] [1] [i_15 + 1] [i_15 - 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_20 |= ((-((1 ? 1 : 0))));
                            arr_59 [i_14] [i_15] [i_18] [i_18] = var_7;
                            arr_60 [i_19] [i_18 - 1] [i_18] [i_15] [i_14] = min((arr_58 [i_15 + 2] [i_15 + 1] [i_15] [i_18 + 2]), var_4);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
