/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((max(18128638657520549282, 1681763731))) ? var_7 : -1095255800)) >> ((((1 ? (max(318105416189002334, var_15)) : ((min(var_1, var_3))))) - 318105416189002308))))));
    var_17 = (min((((((max(var_12, var_2))) ? var_7 : ((var_10 ? 1628347380 : 534773760))))), ((((max(var_15, var_4))) ? ((75 ? var_2 : 318105416189002334)) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 += -0;
                var_19 = ((((((arr_1 [i_0] [i_1]) ? ((var_8 ? var_9 : var_12)) : (((-534773770 ? var_3 : var_4)))))) ? (((((-534773756 ? 0 : var_11))) ? (((-2147483647 - 1) ? 4801494256542423563 : 4191673312)) : var_0)) : var_3));
                arr_5 [i_0] [i_1] [i_0] = (-((var_2 ? ((((arr_0 [i_0]) ? var_1 : -534773760))) : ((var_15 ? var_10 : var_9)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_11 [6] [i_2] = (min(((max((318105416189002346 == var_6), var_1))), (max((arr_7 [i_2] [i_3]), 318105416189002346))));
                var_20 = (min(var_20, var_12));

                /* vectorizable */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    var_21 = (max(var_21, var_7));
                    var_22 = (((((arr_4 [15] [15] [i_4]) ^ var_14))) ? 172 : -534773770);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [11] [i_3] [i_2] = (((((var_4 ? var_5 : var_5))) ? (255 | var_1) : ((126 ? (arr_3 [17] [i_5]) : var_4))));
                                arr_20 [1] [i_2] [i_4] [i_2] [1] [i_6] [3] = ((var_6 ? var_4 : -var_8));
                            }
                        }
                    }
                    var_23 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
