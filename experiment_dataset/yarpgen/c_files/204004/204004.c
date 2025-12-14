/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_18, 828921814));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = arr_0 [14];
        var_21 = (max(((min(1786386133, (max(4294967295, (arr_2 [9])))))), (max(((((arr_0 [i_0]) ? 24 : 41))), ((-2490857587772028111 ? var_3 : 17308530832561125850))))));
        var_22 += (((max((~8582), ((var_14 ? 9223372036854775807 : var_7)))) << (74 - 52)));
        var_23 *= ((((!((max(var_9, -1779542446))))) && (((8274221514612392287 / (((-(arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [2] [6] [4] |= ((var_3 << (((!(((arr_0 [i_0]) < (arr_8 [i_0] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((-var_13 ? ((((9223372036854775806 && -1779542462) << ((((-8368192577074047591 ? var_4 : 65522)) - 745754420))))) : ((-(max(2824537683, 28)))))))));
                                arr_17 [i_0] [10] [i_2] [i_3] [i_4] [i_0] [i_4] = var_1;
                                arr_18 [i_0] [i_0] = ((-8957610608691604319 ? ((-1779542446 ? (arr_6 [10] [i_1]) : (arr_6 [i_0] [i_1]))) : ((((arr_7 [i_0] [i_0] [i_1 - 1]) * (arr_7 [i_0] [i_1] [i_1 - 1]))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (((((((!(arr_8 [i_0] [13] [i_2]))) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((1697389399902248637 ? (arr_10 [i_0] [i_1 - 1] [i_0]) : 1138213241148425775))))) ? (((((arr_16 [i_0] [i_1] [1] [i_1] [i_0]) ? 14872740244571581781 : 4294967295)) * ((((var_7 < (arr_8 [i_2] [12] [i_0]))))))) : var_15));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_24 [i_5] = (arr_22 [i_5]);
        arr_25 [5] [i_5] = (min(((-62 ? var_10 : (arr_21 [i_5]))), (((var_0 + 2147483647) << (arr_20 [i_5])))));
    }
    var_25 = var_17;
    #pragma endscop
}
