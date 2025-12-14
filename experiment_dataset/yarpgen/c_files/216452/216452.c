/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (var_18 >> (((min((~1), (var_9 | var_8))) + 21)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] = (min(1, 1));
                                arr_13 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] [i_1 - 2] [i_1 - 2] = 1;
                            }
                        }
                    }
                    var_21 = var_6;
                    arr_14 [i_0] [i_0] [i_2] = ((!var_10) & (((!(1 % 6336847849006420109)))));
                }
            }
        }
    }
    var_22 = (~1);
    var_23 = (~65525);
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_24 = (max(((max((1 && 202832280326534694), 1))), ((16383 ? var_8 : var_11))));
                        var_25 = 1;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_29 [i_7] [i_6] = (max((!var_3), ((((max(65531, var_15))) ? ((min(1, var_5))) : (-1 && var_12)))));
                        var_26 = (((~-943824375) ? 4294967295 : (min(943824384, 0))));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        var_27 = (-943824364 <= 65535);
                        arr_34 [i_5] [i_6] [i_7] [i_10] = 17;
                        var_28 = var_19;
                        arr_35 [i_7] = 766575969;
                        arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] = (!1580262978);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_29 = 218;
                        arr_39 [i_5 + 2] [i_7] [i_7] = 2291636825975728754;
                    }
                    var_30 = var_18;
                    var_31 = (max((~5686050951364913627), (((~-4721156914441264225) ? var_5 : (min(22, 507765605124832003))))));
                    arr_40 [i_7] [i_5] [i_6] [i_7] = (!(1 | 63));
                }
            }
        }
    }
    var_32 = var_11;
    #pragma endscop
}
