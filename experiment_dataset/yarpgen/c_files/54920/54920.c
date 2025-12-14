/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = arr_2 [i_0];
                            var_15 += (((+((var_10 ? (arr_6 [i_1] [i_1] [1]) : var_12)))));
                            var_16 = ((-(((var_3 & var_8) ? var_11 : var_2))));
                            var_17 = (((~var_9) ? (((((~(arr_2 [i_1])))) ? ((var_11 ? var_11 : var_0)) : var_12)) : (((((~(arr_1 [i_2])))) ? var_4 : ((~(arr_4 [i_3] [5] [5])))))));
                            arr_8 [i_0] [15] = (((((arr_5 [9] [i_1]) ? var_11 : (arr_5 [i_0] [i_2]))) ^ ((var_2 ? var_13 : var_5))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 = (~(~var_11));
                            arr_14 [14] [i_1 - 1] [14] [14] = arr_2 [i_4];
                            var_19 += var_13;
                            var_20 += ((((-(!var_7))) % var_1));
                            arr_15 [12] [12] [5] [12] = (!((((var_1 ? var_4 : var_9)))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] [14] = var_13;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_21 = (min(var_21, (max((((!var_10) ? var_10 : -var_0)), ((max(var_7, ((min(var_5, var_4))))))))));
                            arr_22 [i_0] [i_0] [i_6] [11] = ((~(((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? ((var_5 ? var_4 : var_13)) : var_0))));
                        }
                    }
                }
            }
        }
    }
    var_22 &= var_1;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_23 -= ((((~((var_13 ? var_3 : (arr_32 [i_8] [1] [12] [i_10] [1]))))) >> (var_2 - 1582158468)));
                            var_24 = (min(-var_0, var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_25 = var_2;
                            arr_39 [i_8] [i_8] [i_8] [1] = ((var_7 - (((!(arr_36 [i_9] [i_9] [5] [1] [i_9]))))));
                        }
                    }
                }
                var_26 = (max(var_26, var_2));
            }
        }
    }
    var_27 = var_2;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            {
                var_28 = (max(var_28, ((((var_5 ? var_7 : var_12))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_29 -= (min((((!(arr_10 [i_17] [i_15] [i_15] [i_14])))), (1061665376 / 419158155)));
                            var_30 *= (((((2857976594 ? 62809 : 419158155))) ? ((max((arr_37 [i_15] [i_15]), var_1))) : ((max(var_3, (arr_38 [i_14] [i_15] [i_14] [i_16] [i_16] [i_17]))))));
                            var_31 = var_12;
                            var_32 = ((((((arr_33 [i_14] [i_14] [i_14] [i_16] [1] [i_14]) ? (arr_33 [19] [i_15] [i_14] [i_14] [i_14] [i_15]) : var_4))) & (min(-var_13, (max(510, 2504951163))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 18;i_20 += 1)
                        {
                            {
                                arr_60 [i_14] [12] [i_14] = ((var_4 ? ((((arr_35 [i_19 + 1]) ? var_12 : var_13))) : ((-var_13 ? (((max(var_13, var_0)))) : (max(2050526695529473016, 475590666004411817))))));
                                var_33 |= (((((~var_1) ? (((arr_47 [9] [i_19] [13]) * (arr_27 [i_15] [i_15] [i_15]))) : (arr_23 [i_19 + 2]))) == (((var_8 ? (var_11 <= var_9) : ((var_5 ? var_4 : var_13)))))));
                            }
                        }
                    }
                }
                var_34 = (((arr_33 [i_14] [i_14] [i_14] [i_15] [i_15] [20]) ? var_9 : var_2));
            }
        }
    }
    #pragma endscop
}
