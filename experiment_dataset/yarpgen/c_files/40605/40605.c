/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((5434053811575490632 + var_8), (min((var_12 - var_2), (min(-5434053811575490632, var_11))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] [i_0] [i_1] [i_0] = ((!(((var_13 ^ (var_5 & 1))))));
                        arr_13 [5] [5] [i_2] [i_0] [5] = ((-var_11 ? ((((min(var_13, var_4))) ? (!var_11) : 111)) : (((!var_5) ? ((var_1 ? (arr_4 [i_0]) : var_14)) : ((min(var_5, var_2)))))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = var_1;
                    }
                }
            }
        }
        arr_15 [i_0] = ((((max(((var_3 ? var_0 : var_11)), ((min(127, 1185915555)))))) ? (((5 ? -var_8 : ((max((arr_11 [i_0]), 1)))))) : var_7));
        var_16 += ((((((var_14 || (((var_2 ? (arr_2 [6]) : var_5))))))) & (min((((arr_6 [i_0] [16]) / (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), ((var_9 ? (arr_9 [i_0 - 1]) : var_4))))));
        var_17 *= (min(var_14, ((var_5 ? var_1 : -5434053811575490639))));
        arr_16 [i_0] = (max((arr_5 [i_0]), var_12));
    }

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_18 = var_4;
        var_19 = (max(((((((arr_18 [i_4]) ? var_2 : (arr_17 [i_4])))) ? var_9 : (((var_6 != (arr_18 [i_4])))))), var_6));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_5] [i_7] [i_5] [i_7] = (~var_9);
                                var_20 = ((var_14 || (((var_11 ? var_4 : var_5)))));
                            }
                        }
                    }
                    var_21 -= (((((var_2 ? var_6 : var_3))) ? (((arr_6 [i_7] [10]) ? var_5 : var_4)) : (arr_11 [i_6])));
                    arr_34 [i_6] [i_5] [i_5] [i_5] = ((var_12 == (arr_5 [i_5])));
                    var_22 ^= ((arr_8 [i_7 + 2] [i_6]) | (arr_8 [i_7 + 1] [i_6]));
                }
            }
        }
        arr_35 [i_5] = (arr_25 [i_5] [i_5 + 1] [i_5] [i_5]);
        var_23 = (-5434053811575490641 / var_5);
        var_24 = var_8;
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        var_25 -= (var_1 + var_9);
        arr_39 [i_10] = ((5434053811575490639 ? ((((var_11 ? var_12 : 1784072245)))) : (min(var_8, ((var_0 ? var_9 : (arr_38 [i_10])))))));

        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_44 [i_11] [i_11] = (((((~(~var_4)))) ? (((((-(arr_36 [i_10] [21])))) ^ var_11)) : ((min(var_12, (var_14 >= -1520442136))))));
            var_26 *= (min((((((-(arr_43 [i_10] [2])))) ? var_2 : (var_6 || var_3))), (((arr_43 [i_10] [24]) ? (arr_40 [i_10] [i_10 - 1] [i_10 + 1]) : 4120744755047902487))));
            var_27 = (max(var_27, (!var_0)));
            var_28 *= -1;
            var_29 = (min(var_29, var_14));
        }
        var_30 = (min(var_30, 1));
        arr_45 [i_10] [1] = ((-((15082347415373826678 ? (arr_43 [i_10] [i_10 + 3]) : var_13))));
    }
    var_31 = var_4;
    #pragma endscop
}
