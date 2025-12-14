/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 -= ((!(((arr_5 [i_1]) > var_6))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_10 [i_3] [i_0] [i_0] [i_0 - 1]) ? ((max(1, 5))) : ((-(1 + 65531)))));
                                arr_15 [i_0] [i_3] [i_0] [i_1] [i_0] = ((((min(var_13, (arr_1 [i_0])))) ? (max(2147483647, (arr_1 [i_0]))) : (((arr_9 [3] [i_1] [i_1]) ? 0 : var_9))));
                                var_19 *= ((((((max(1, 1347282831))) / var_14))) ? ((-(4294967286 * 65535))) : (min(-1974067078, var_13)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    var_21 = ((2320900217 ? (((arr_20 [i_5] [i_7 + 2] [i_5]) & var_11)) : ((max((arr_20 [i_5] [i_7 + 2] [5]), (arr_20 [i_5] [i_7 + 1] [i_5]))))));
                    arr_23 [i_5] [14] [i_5] [i_5] |= (((((-(~1)))) ? 0 : var_2));
                    var_22 = ((var_5 ? ((((arr_18 [3]) - 3799199393311809061))) : 2743358601409795476));
                    var_23 = ((((max((((9223372036854775807 ? 739791039 : (arr_21 [i_5] [i_6] [i_5])))), ((-50777614 ? var_13 : 1903738318))))) ? ((((arr_21 [i_7 + 2] [i_7 - 2] [i_5]) - 1))) : var_14));
                    var_24 ^= -13661056548805497253;
                }
            }
        }
    }
    #pragma endscop
}
