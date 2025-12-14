/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_3, -7537348870834465641)) < (((var_19 ? var_19 : var_12))))) && var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 *= (0 != -843684674);
                    var_22 = (min((!1), (((1 | var_4) ? var_1 : var_8))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_23 = var_19;
                        arr_10 [i_0] [i_1] [i_2] [i_2] = 0;
                        var_24 = (max(((((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) < 1))), (arr_9 [i_1 + 1] [i_1 + 1] [19] [i_1 + 1] [i_1 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_25 = (min(var_18, ((-1 ? 22421 : (arr_4 [i_4] [i_2])))));
                        arr_13 [i_1 + 1] [8] = ((((0 ? ((1 ? var_4 : 153195131)) : (((arr_7 [i_0] [i_1] [i_2] [i_4 - 1]) ? var_11 : (arr_11 [i_1]))))) ^ ((-22421 ? -1 : 65535))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_26 = (((arr_2 [i_5 + 3] [i_1 + 1]) ? (~var_0) : (((arr_2 [i_0] [i_1]) + 125))));
                        var_27 = (((((var_11 * (arr_9 [i_0] [i_1 + 1] [0] [i_5 - 1] [i_5])))) ? (1 / 1) : 1));

                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_5] [i_5] [i_6] = ((!((((arr_5 [i_0] [i_0] [i_0]) * var_3)))));
                            arr_21 [i_0] [i_1 + 1] [i_1] [i_2] [i_5] [i_6 + 2] [18] = ((((((arr_17 [i_5 + 3] [i_5 + 3] [19] [19]) > var_10))) != var_5));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
