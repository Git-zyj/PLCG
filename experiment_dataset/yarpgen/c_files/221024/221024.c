/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 *= (((((!(arr_1 [i_0] [i_0])))) >= (arr_1 [i_0] [8])));
        var_16 = (((var_7 >= 1) ? (((-(arr_1 [i_0] [i_0])))) : (((((((arr_1 [3] [i_0]) || 118)))) + (min((arr_0 [i_0]), 4))))));
        var_17 += (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) * ((min(var_6, (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [6] [i_0] = (((((var_4 ? var_7 : var_12))) ? (((-2 ? (~var_11) : var_10))) : (((~4294967285) ? (1 + 17) : 18446744073709551598))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [8] [i_0] = min(17, var_9);
                                var_18 = (min((max(var_13, 18446744073709551590)), (6723816187694128539 >= -82)));
                                var_19 = ((((2582941636572774565 ? (min(var_9, var_13)) : ((((arr_1 [i_4] [i_3]) % (arr_5 [i_4])))))) % ((((5290292547884888569 && (115 - 15353306853716818862)))))));
                            }
                        }
                    }
                    var_20 = ((((max(((((arr_12 [8] [i_1] [i_2] [i_1] [8] [i_2] [i_1]) ? var_0 : var_14))), 373810195))) > (min(13, -120))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 = (((arr_14 [i_5] [i_5]) + (((~2147483647) ? ((var_5 ? (arr_15 [i_5]) : 38)) : -120))));
        var_22 = (min(var_22, (((-(max((min(var_4, 4)), ((max(373204773135917142, (arr_15 [i_5])))))))))));
        arr_16 [i_5] = ((var_9 ? (min(var_5, (arr_15 [i_5]))) : ((((!var_1) << (((arr_15 [i_5]) << (arr_15 [i_5]))))))));
    }
    var_23 = var_7;
    var_24 = (max(var_24, var_11));
    var_25 = ((!((max(var_9, -30642)))));
    var_26 = (((((-184200691 ? var_13 : 6443581720621194184)))) ? ((var_0 ^ (max(4, 4503599627370492)))) : ((((var_4 < -709659843) ? var_5 : 118))));
    #pragma endscop
}
