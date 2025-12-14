/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_17 ? ((max(var_0, var_4))) : var_5)), ((max(50, (min(73, var_13)))))));
    var_19 = ((((min(-var_16, var_9))) ? (((!(-51 && var_1)))) : var_9));

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = var_15;

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_3] = 50;
                        var_21 += var_0;
                    }
                }
            }
        }
        arr_11 [i_0 + 3] = ((((((min(44, 73))) ? (7194 | 18) : (arr_8 [i_0] [i_0 + 3] [i_0] [i_0]))) / var_4));
        arr_12 [i_0 + 1] = (min(-386267053, (((((0 ? -74 : (arr_3 [i_0 + 3] [i_0 + 2])))) ? -14 : 4919))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_22 &= (~-2281658370518116161);
                    arr_18 [i_0] [i_4] [i_5] = ((((min(-91, 58341))) ? ((((0 && var_8) && (!var_11)))) : (!-51)));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_23 = var_9;
                        var_24 -= 58346;
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_25 = (((arr_19 [i_0]) ? (min(((58341 ? 150 : (arr_0 [17] [i_4]))), (~var_12))) : ((var_8 ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_11))));
                        var_26 -= (((((~(arr_7 [i_7 + 1] [i_7 - 1] [i_5] [i_5] [i_5] [i_4])))) ? (((((100 ? 0 : 843617188))) ? -21945 : (arr_6 [i_4] [i_7 - 1]))) : (arr_0 [i_0 + 2] [i_7 - 2])));
                        var_27 = (max(var_27, ((((~(121 ^ 7138721588876849535)))))));
                        arr_23 [i_0 + 3] [i_4] [4] [i_4] [i_7 - 2] [i_4] = (-((((arr_1 [i_0]) ? -21945 : var_13))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_28 &= (((arr_20 [i_0 - 1]) ? (arr_20 [i_0 - 2]) : 194));
                        var_29 = ((var_13 ? (arr_20 [i_0 + 3]) : (arr_20 [i_0 - 2])));
                        arr_26 [15] [5] [i_5] [13] = 1;
                    }
                    arr_27 [i_0] [i_0] [i_5] [i_5] = (max(var_13, (arr_4 [i_0 - 2] [i_0 - 2])));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_30 -= ((-(arr_6 [i_9 - 2] [i_9 + 1])));
        var_31 = ((+(min(((((arr_13 [11] [i_9] [11]) ? 32768 : (arr_16 [i_9] [i_9])))), (-104 + 4243264886)))));
        arr_30 [i_9] = (arr_22 [10]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_32 = 522629785;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_41 [i_10] = 96;
                                var_33 -= ((min(var_17, (min(-386267054, 1453973169)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_34 = var_5;
                                arr_49 [i_10] [i_10] [8] [i_10] [i_10] = ((((((arr_9 [i_9] [i_10] [i_9] [i_10] [i_11] [i_10]) * (arr_33 [i_9 - 2] [i_9 - 2] [18])))) ? ((((arr_38 [i_10] [i_14] [i_11] [i_10] [i_9]) ? 103 : 1))) : (((arr_22 [i_9 - 2]) ? -16 : (arr_2 [i_14] [i_9 + 3])))));
                                var_35 = (arr_8 [i_14] [16] [i_10] [i_9]);
                                var_36 &= ((58341 ? -386267054 : 2164110178));
                                var_37 &= 119;
                            }
                        }
                    }
                    var_38 &= (min((arr_16 [i_9 - 1] [1]), 0));
                }
            }
        }
        var_39 = ((!(((((var_8 ? var_9 : 0)) + var_13)))));
    }
    #pragma endscop
}
