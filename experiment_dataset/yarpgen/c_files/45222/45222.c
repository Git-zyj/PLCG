/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -0;
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] |= var_12;
        var_19 -= var_7;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = 0;
                    var_21 = (!var_6);
                }
            }
        }

        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            var_22 = (max(var_22, (((var_4 + (0 + 11))))));
            arr_14 [i_0] [i_3] [i_0] = var_2;
            arr_15 [i_3] = (((((26 / 173) + 1)) / var_4));
            var_23 = (min(var_23, ((((var_2 >= var_13) + (~var_16))))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (~var_3);
            arr_18 [i_4] [i_4] [6] = (-16 / -4);
            arr_19 [i_0] [i_0] = (-12 + 0);
            arr_20 [i_0] [i_0] = (((-(!var_0))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_27 [i_0] [i_6] [i_5] [i_6] = var_8;
                arr_28 [i_5] [i_5] [i_5] |= (!var_13);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_33 [i_7] [0] [i_0] = var_6;
                var_25 = (((var_11 && var_12) | (((var_8 / var_14) / (var_8 >= var_3)))));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_26 = var_9;
                var_27 = -71;
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_28 = (var_0 && var_11);
                var_29 = (min(var_29, 71));
                arr_38 [i_9] [i_0] = (430303519 * 0);
            }
            arr_39 [i_0] [i_0] [i_0] = (25 + 20);
        }
    }
    var_30 = 3857386376;
    #pragma endscop
}
