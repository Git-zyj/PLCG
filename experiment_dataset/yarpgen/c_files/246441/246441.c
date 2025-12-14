/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((!(~var_3)));
        arr_3 [i_0] = (((((var_7 || var_4) && (var_9 && var_9))) && (((var_5 && var_1) && (((var_11 ? var_2 : var_3)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((!(var_6 >= var_8)));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 |= ((var_6 ? ((-var_10 ? (var_1 % var_7) : (~var_14))) : var_9));
                        var_18 = ((((!(!var_12))) ? var_8 : (((((var_13 ? var_0 : var_2))) ? var_2 : var_8))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_19 = (((((var_14 ? var_8 : var_11))) ? var_10 : (((var_11 ? var_2 : var_3)))));
                        arr_13 [i_2] [i_2] [i_2] [i_4] [i_2] [i_1 - 1] |= (((var_3 % var_9) / var_12));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 &= ((((var_9 ? var_7 : var_12)) & (~var_13)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [i_5] [i_7] [i_7 - 4] [i_5] = ((var_2 ? var_9 : var_2));
                        arr_28 [i_5] [i_6 + 1] [i_7] [i_8] = (var_2 | var_9);
                    }
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_9 + 1] [i_7] [i_7] = (((!var_10) - (!var_7)));
                        var_21 -= ((-((var_11 ? var_14 : var_0))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_34 [i_5] [i_6] [i_10] [0] [i_7 + 1] &= (((!var_0) ? var_13 : (~var_8)));
                        var_22 = (((var_5 < var_10) ? ((var_8 ? var_0 : var_0)) : ((var_1 ? var_9 : var_4))));
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        var_23 *= (((43421 + 43409) ? ((var_14 ? var_2 : var_9)) : var_8));
                        arr_37 [i_7] [i_7] = var_1;
                    }
                    var_24 = (((((var_10 ? var_3 : var_14))) ? (var_0 % var_11) : var_8));
                    arr_38 [i_5] [i_7] = ((!(((43394 ? var_4 : 1)))));
                    var_25 += -var_4;
                }
            }
        }
    }
    var_26 = ((var_14 + (((((var_13 ? var_5 : var_6))) ? (((6498 ? 22104 : 22140))) : var_7))));
    var_27 ^= -43416;
    var_28 = ((var_4 ? (((var_10 % var_10) ? ((var_0 ? var_10 : var_12)) : (~var_7))) : ((((!(var_14 != var_12)))))));
    var_29 += var_5;
    #pragma endscop
}
