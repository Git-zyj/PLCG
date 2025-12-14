/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max(130023424, (93 > 32354)))) ? (~var_4) : ((var_4 ? var_10 : var_13)))))));
        var_17 = (min(var_17, (((var_15 ? ((min(var_10, (max(32969, 32566))))) : ((((~var_12) != (((max(var_9, var_7))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (~var_0);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_19 = (arr_12 [i_1] [i_2] [i_3] [i_3] [i_1]);
                        var_20 = var_12;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_21 = (var_6 && var_2);
                            var_22 = (max(var_22, (arr_9 [14] [i_2] [14])));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [13] [i_2] [i_3] [13] [i_2] [i_1] [i_1] = (arr_16 [i_1] [i_2] [i_3] [12] [i_2]);
                            arr_22 [10] [10] [10] [i_1] [i_4] [i_6] [i_6] = (arr_5 [i_1]);
                            arr_23 [i_6] [1] [i_3] [2] [i_6] [i_6] &= var_9;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_23 = ((-((((arr_25 [i_1] [i_1]) || var_0)))));
                            var_24 = ((((((arr_18 [i_1] [i_1] [i_3] [10] [i_7]) <= var_3))) >> (((~var_4) + 180))));
                            arr_26 [i_1] [i_2] [i_3] [12] [14] |= (((56 ? 0 : var_7)));
                            var_25 = (16383 / var_6);
                        }
                    }
                }
            }
        }
    }
    var_26 = ((-((9 ? 4520444372814768506 : 0))));
    #pragma endscop
}
