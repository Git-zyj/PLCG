/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_9, ((var_9 ? var_8 : -2060069598)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 = (max((min(var_3, var_0)), ((18446673704965373952 ? ((var_5 ? (arr_8 [i_1] [7]) : var_10)) : -108))));
                        var_16 += ((var_12 <= ((((((max((arr_3 [i_0] [i_0]), var_10))) && var_12))))));
                        var_17 = (((arr_4 [i_2 + 2] [i_2 - 1]) | var_6));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_18 = (min((max((min((arr_3 [i_0 + 1] [i_1]), 65535)), var_10)), ((((((var_2 ? 95 : 246))) ? ((min(108, var_6))) : 18446673704965373952)))));
                            var_19 += (max(((((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 9 : (arr_5 [i_4])))) ? -2060069598 : (((arr_4 [i_2] [i_2]) ? var_6 : 70368744177646)))), (((var_4 ? -53 : var_4)))));
                        }
                        var_20 = 2466026032863925156;
                    }
                    arr_13 [i_1] [i_1] [i_2] [i_1] = ((((952849699 | 16) ? (arr_7 [i_1] [i_1] [i_0]) : (arr_0 [i_1]))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_21 = ((max((arr_2 [i_0]), (arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_22 = ((-35 / ((((max((arr_14 [i_0 - 1]), (arr_4 [i_0] [i_0])))) ? var_9 : (arr_16 [i_6 + 4] [i_1] [i_0 - 1])))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(arr_7 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_23 = var_0;
                }
                var_24 = ((var_9 ? ((((var_8 ? var_11 : (arr_11 [i_0 - 1] [9] [i_1] [i_0] [9] [i_0]))))) : var_8));
                var_25 = ((((max((max(var_10, var_0)), var_6))) ? (((-((14362706286855564866 ? 172 : 10))))) : (max((arr_5 [i_1]), (max(244, var_11))))));
                var_26 = var_7;

                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    var_27 = (min(var_27, (arr_5 [6])));
                    var_28 = (((min((((255 << (var_10 + 1462127765)))), ((1950355713 ? 16382 : 524160))))) ? var_7 : -105);
                }
            }
        }
    }
    var_29 = (min(4354, 952849699));
    #pragma endscop
}
