/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 18446744073709551595;
    var_13 = 0;
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = var_1;

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_10 [8] [8] [8] [8] = 22173;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (!-74);
                        var_17 = (((!43623) ? (((min(-8, (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : (max(((((arr_8 [i_1] [i_1] [i_2] [i_3]) ? var_1 : (arr_3 [i_3])))), (var_10 + 1316723306)))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = var_9;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] = (((8423511577209284973 && var_1) ? var_4 : (((arr_6 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 1]) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 1]) : 33))));
                        var_18 = (!20);
                        var_19 += ((((!(arr_12 [i_2] [i_2] [i_2 - 1] [i_2 + 1]))) && ((min(9, var_2)))));
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_20 = (((((((arr_6 [i_0] [i_0] [i_0] [i_0]) + var_1))) ? (arr_11 [i_1 - 1] [i_5]) : (max(var_3, (arr_8 [1] [i_1] [i_1] [i_1]))))) - ((((((18446744073709551588 ? var_3 : var_2))) ? ((1 ? 0 : 0)) : ((max(var_2, 35748)))))));
                    var_21 -= (max(12754, (max(0, 18446744073709551587))));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_22 = (min(var_22, (((((min((arr_18 [i_6 + 1] [i_6] [i_1 - 1] [i_1 - 1]), (~15928)))) ? 20518 : -126)))));
                    arr_23 [i_0] [i_6] = var_4;
                    arr_24 [i_6] = (((((var_6 - (arr_22 [i_6] [i_6 + 1] [i_6 + 1])))) ? (arr_19 [i_1 - 1]) : var_6));
                }
                var_23 = ((29 + (!var_4)));
            }
        }
    }
    #pragma endscop
}
