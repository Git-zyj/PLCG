/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_4);
    var_16 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_13;
        var_17 = (var_6 == var_9);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = ((-1 ? 195 : 4294967285));
                    var_19 = (var_12 * var_5);
                }
            }
        }
        arr_11 [i_0] = ((var_5 ? 55630 : (!var_6)));
        arr_12 [5] [6] = ((-((var_5 ? var_12 : var_4))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_20 = (min(var_20, ((((!-225) * (6 / 1))))));
            arr_18 [i_3] [i_4] = ((var_13 ? (!896) : ((var_10 ? (((min(var_3, var_10)))) : (var_7 / var_11)))));
            var_21 = -var_0;
            var_22 = (-(~var_7));
        }
        arr_19 [i_3] = var_5;
    }
    #pragma endscop
}
