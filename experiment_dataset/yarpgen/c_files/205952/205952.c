/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_2] [i_2] [i_2] [i_1] [i_0] &= (((max((216 * 0), (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4]))) >> ((((((max((arr_0 [i_4] [i_0]), 2470477950528270850))) ? -12453056470548453187 : (!15976266123181280765))) - 5993687603161098421))));
                                var_14 = (max(((((arr_6 [i_0] [i_0] [i_0] [i_0]) && var_10))), -15976266123181280765));
                            }
                        }
                    }
                    var_15 = (min((arr_4 [i_0] [i_1] [i_1] [i_2]), (min(((min(18552, 28795))), (arr_2 [i_2] [i_2])))));
                    var_16 -= ((((var_0 * (((arr_6 [i_0] [i_0] [i_0] [i_0]) / 2470477950528270861)))) * (((arr_8 [i_2]) * (((arr_3 [i_0] [i_0] [i_0]) / (arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_17 = (((((!4) ? ((min(var_10, var_12))) : var_12)) < (18560 || -2151252140574834170)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_18 += (((arr_12 [i_5] [i_6]) / (var_13 % -85)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] [4] = (((-127 - 1) > (((arr_12 [i_6] [i_9]) ? ((36747 ? 2470477950528270850 : (arr_17 [i_6] [i_7]))) : (((((arr_16 [11] [11] [11]) == (arr_12 [i_5] [i_5])))))))));
                                arr_25 [i_9] [i_9] [i_7] [i_8] [i_8] [0] [0] = (((((!(arr_22 [i_5] [i_6] [i_7] [i_8] [1] [i_6] [i_5])))) % ((min((arr_14 [i_5]), (arr_14 [i_5]))))));
                                var_19 -= ((((arr_21 [i_5] [11] [i_6] [i_8] [i_8]) > (((~(arr_19 [i_5] [i_5] [i_5])))))) ? var_11 : ((((arr_16 [i_5] [i_7] [i_5]) * (arr_23 [i_8] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
