/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] [16] = (!var_12);
        arr_3 [i_0 - 2] = var_18;
        arr_4 [i_0] = (!var_1);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1 + 1] = var_13;
        arr_9 [i_1] = var_6;
        var_19 = (max(var_19, (((!((max(var_12, 11))))))));
        var_20 = var_8;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_4] |= (~6800820516526490809);
                                arr_25 [i_2] [i_2] [i_2] = (!var_11);
                                arr_26 [i_6] [6] [i_4] [i_6 - 1] [6] [i_6] |= (~var_11);
                                arr_27 [i_2] = var_17;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = (~-6800820516526490809);
                                arr_33 [i_2] [i_2] [i_2] [i_7] [i_7] = var_17;
                            }
                        }
                    }
                    var_22 = (!var_10);
                    var_23 *= var_5;
                }
            }
        }
        arr_34 [i_2] [i_2] = var_9;
        var_24 = (min(var_24, (!1)));
    }
    var_25 = var_5;
    var_26 = var_12;

    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_38 [i_9] [i_9] &= -var_3;
        arr_39 [i_9] = (!var_6);
    }
    var_27 = var_3;
    #pragma endscop
}
