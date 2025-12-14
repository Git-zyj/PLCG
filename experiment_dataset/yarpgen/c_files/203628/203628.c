/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (((arr_4 [i_3]) ? ((max(((max(var_9, 107155576))), ((var_11 ? 3153193706 : -24215))))) : (min(((1189936495 ? 18446744073709551610 : var_5)), var_4))));
                            var_18 = (arr_4 [i_0 + 1]);
                            var_19 -= (!var_0);
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_0] = (min((max(var_14, var_15)), -124));
            }
        }
    }
    var_20 = (max(var_20, -var_9));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 = var_15;
        var_22 = (156 && var_3);
        arr_15 [i_4] [i_4] = ((!((((arr_14 [i_4] [18]) ? 43 : var_9)))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] |= (!30);
        var_23 = (min(((var_14 ^ (arr_12 [i_5] [i_5]))), (((arr_11 [i_5] [i_5]) ? 8 : var_0))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_24 = ((var_7 ? (arr_19 [i_6]) : (arr_16 [i_6])));
        var_25 = var_14;
        var_26 = (min(var_26, (((var_10 ? (arr_14 [i_6] [i_6]) : (arr_17 [i_6] [7]))))));
        arr_21 [i_6] [i_6] = (((arr_20 [i_6] [i_6]) ? var_3 : (~var_11)));
    }
    var_27 = var_7;
    #pragma endscop
}
