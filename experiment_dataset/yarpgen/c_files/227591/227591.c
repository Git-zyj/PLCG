/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_9, ((max(var_0, var_2)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((~var_16) + (var_2 / var_4)));
        var_21 = (((var_9 + 2147483647) << (!var_11)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = (((var_9 - var_2) + var_6));
        arr_6 [2] |= var_10;
        var_23 = var_12;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_24 = ((var_7 / var_2) / -var_19);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_25 = var_6;
                        arr_18 [i_5] [i_2] [10] [i_2] = (0 + 112);
                        var_26 |= var_8;
                        var_27 = (max(var_12, var_3));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_2] [i_3] [i_3] [i_2] = var_13;
                        var_28 = (min(var_28, var_9));
                        var_29 = (var_14 >= var_12);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_30 = var_10;
                        var_31 = (((var_9 + var_7) + (var_16 - var_4)));
                        var_32 = (((var_18 && var_15) > var_17));
                        arr_27 [1] [i_3] [1] [i_3] [i_3] [i_2] = (var_9 || var_19);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_30 [i_2] [i_3] [7] [i_8] = 1586519624;
                        var_33 |= (max(1, ((-var_4 * (var_0 / var_14)))));
                        var_34 = (min(var_34, ((max((var_13 + var_4), (1 / 8574735831850257153))))));
                    }
                    var_35 = ((((max((var_18 >= var_0), (var_9 / var_18)))) > var_17));
                    var_36 = (min(var_36, var_3));
                }
            }
        }
        arr_31 [0] |= var_1;
        arr_32 [i_2] = var_8;
    }
    #pragma endscop
}
