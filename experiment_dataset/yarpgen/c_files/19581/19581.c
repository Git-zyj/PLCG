/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((~var_3) ? (max((((var_8 ? var_11 : var_9))), (max(var_6, var_7)))) : ((max(var_9, ((var_4 ? var_11 : var_3))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = (var_0 >= var_10);
                    var_15 = (~var_11);
                    var_16 = ((var_7 ? var_12 : var_7));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = var_9;
                    var_17 = (var_1 && var_0);
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_18 = var_7;
                    var_19 = ((-var_0 / ((var_9 ? (~var_5) : var_8))));
                    var_20 = ((((((((var_9 ? var_2 : var_10))) ? var_8 : ((max(var_3, var_11)))))) ? var_4 : (max((var_5 % var_11), ((min(var_0, var_9)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 = ((!(((var_6 ? var_4 : var_8)))));
                                var_22 = (min(var_22, ((max((max(var_11, var_4)), (!var_4))))));
                            }
                        }
                    }
                    var_23 = var_0;
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = var_3;
                    var_24 += var_8;
                    arr_19 [i_0] [i_0] [i_1] [i_6] |= var_5;
                }
                var_25 = (((~180) ? (((((var_1 ? var_12 : var_2))) ? var_2 : var_10)) : (var_11 >> var_0)));
                arr_20 [i_0] [7] = min((var_2 * var_4), ((var_3 ? var_11 : var_8)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {
            {
                var_26 = var_9;
                var_27 = ((+(((~var_1) ? var_1 : ((max(var_10, var_11)))))));
                var_28 = var_5;
            }
        }
    }
    var_29 = ((!(((((max(var_7, var_9))) ? var_12 : var_0)))));
    #pragma endscop
}
