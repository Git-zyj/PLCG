/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_17 &= 2078637282;
        var_18 = ((((((arr_0 [i_0] [i_0 - 1]) | (arr_0 [i_0] [i_0 - 4])))) && (!63143)));
        arr_3 [i_0] [0] |= (max(((((min(1316171226, -26987)) < (!1316171225)))), var_6));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_19 |= var_3;
            var_20 = var_6;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (((((1316171224 ? ((min(63143, var_11))) : ((var_4 ? (arr_0 [i_0] [i_0]) : 104))))) * ((var_10 & (!var_0)))));
            var_21 = 1110083222;
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_22 = 4162741148;
            var_23 = ((((((((8020217574458921279 ? 40138 : 2978796051))) ? (var_6 / var_3) : var_6))) ? 25398 : (var_15 != -28877)));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_24 = 28848;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_25 = (((-13081 ? var_5 : (-98 - 1316171245))));
                            arr_22 [i_0] [i_3] [i_4 - 1] [i_4] [i_4] [i_0] = ((7824633778407258052 + ((((max(var_5, var_12)) + (((10622110295302293590 ? 68 : var_1))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_11;
    var_27 = (max(var_6, (max((((-628767734488914568 ? var_3 : var_16))), ((var_1 ? var_6 : var_11))))));
    #pragma endscop
}
