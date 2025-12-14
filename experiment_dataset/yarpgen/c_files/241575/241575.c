/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (min(((((min(var_0, var_3))) ? (!var_9) : (!var_8))), (((var_8 ? var_11 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = 31130;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    var_13 = ((-23994 ? (!-23994) : -23994));
                    var_14 = (arr_3 [i_1] [i_2]);
                    var_15 = var_6;
                    var_16 = (arr_3 [i_1] [i_1]);
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_1] = ((-((((max((arr_7 [i_1]), var_6))) >> (((arr_0 [i_1]) - 2495))))));
                    var_17 = (((((arr_8 [i_1] [i_1] [i_1]) > var_9)) ? var_0 : var_6));
                    var_18 = (((((-((-6370275351569047582 ? var_7 : -23994))))) ? (max(-4510285229908445447, ((-(arr_9 [i_0] [i_1] [i_1] [i_1]))))) : 23994));
                    var_19 = (((-23994 % var_1) ? (arr_8 [i_1] [i_3 + 1] [i_3]) : var_4));
                    var_20 = ((+((var_0 ? ((((arr_1 [i_1]) ? -23994 : var_4))) : ((var_10 ? (arr_8 [i_1] [i_1] [i_3]) : var_1))))));
                }
                arr_12 [i_1] [i_1] = ((96159279 != (((arr_4 [i_1] [i_0]) ? (arr_0 [i_1]) : (max(var_11, (arr_9 [i_0] [i_0] [i_1] [i_1])))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 = ((-(((!(((var_11 ? (arr_13 [i_4]) : var_6))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_22 = (!2058810509);
                    var_23 = ((~((~(arr_18 [i_5] [i_5] [i_5] [i_6])))));
                    arr_22 [i_6] = (arr_21 [i_4] [i_4] [i_4] [i_6]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_24 = ((!((max((arr_25 [i_4] [i_9] [i_9]), (arr_25 [i_9] [i_9] [i_9]))))));
                                arr_33 [i_9] [i_7] [i_9] &= (((arr_16 [i_9] [i_9] [i_9]) ? (arr_16 [i_9] [i_9] [i_8]) : (((arr_16 [i_8] [i_7] [i_4]) ? (arr_16 [i_4] [i_4] [i_4]) : (arr_16 [i_4] [i_7] [i_8])))));
                            }
                        }
                    }
                    var_25 = (((min((arr_30 [i_7]), ((max((arr_29 [i_4] [i_7] [i_4] [i_7]), (arr_19 [i_7] [i_7] [i_7] [i_7]))))))) - (min(-105, (((-127 - 1) ? (arr_19 [i_4] [i_4] [i_8] [i_4]) : (arr_29 [i_7] [i_7] [i_4] [i_7]))))));
                    var_26 = ((((max((((arr_25 [i_8] [i_7] [i_7]) ? var_4 : var_5)), (arr_20 [i_4])))) ? var_1 : (((-(arr_28 [i_4] [i_4] [i_7] [i_8]))))));
                    arr_34 [i_7] = ((var_6 ? var_8 : (arr_14 [i_7])));
                }
            }
        }
        var_27 = (arr_28 [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        arr_38 [i_11] = 54370;
        var_28 = (arr_19 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1]);
        var_29 = ((~((max((((54354 || (arr_20 [i_11])))), var_11)))));
        arr_39 [i_11] [i_11] = max(7169788561434211418, (((max(110, (arr_25 [i_11] [i_11] [i_11]))))));
    }
    var_30 = (max((158121419 & 54370), (var_7 | -2058810509)));
    var_31 = var_4;
    #pragma endscop
}
