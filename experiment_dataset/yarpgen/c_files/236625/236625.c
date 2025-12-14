/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((((min((arr_6 [i_2]), ((var_7 ? var_10 : var_5))))) ? ((((((arr_0 [i_0] [i_2]) ? var_4 : var_3))) ? ((((arr_6 [i_0]) ? var_12 : (arr_6 [i_0])))) : ((var_1 ? var_7 : var_4)))) : var_6));
                    var_14 = ((var_6 ? (((arr_1 [i_0]) << ((min(1, (arr_0 [i_2] [i_2])))))) : var_12));
                    arr_7 [i_0] [i_1] [i_2] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = var_3;
                                var_16 = ((((min(0, 0)))) > (((arr_0 [i_1] [i_1 + 3]) << ((((~(arr_9 [i_0] [i_1] [i_2] [i_4]))) - 87)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_17 = var_2;
                        arr_16 [i_0] [i_0] = (arr_14 [i_1 + 2] [i_1 + 2]);
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_18 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 = (arr_15 [i_6] [i_1] [i_1] [i_6]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_20 = (((!0) ? ((min((~var_6), -2))) : (((arr_20 [i_7]) ? var_8 : ((var_6 ? var_3 : var_0))))));
                var_21 = (min(var_21, var_9));
                arr_25 [i_7] = 1;
            }
        }
    }
    var_22 = (var_11 ? (((!var_5) ? var_9 : var_10)) : ((min(-var_8, -var_3))));
    var_23 = var_4;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 6;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            {
                var_24 = (((((-(arr_2 [i_9]))))) % ((((((arr_15 [i_9] [i_10] [i_9] [i_9 - 1]) ? var_8 : (arr_0 [i_9] [i_10])))) ? var_9 : (~var_8))));
                arr_31 [i_9] = (!var_7);
            }
        }
    }
    #pragma endscop
}
