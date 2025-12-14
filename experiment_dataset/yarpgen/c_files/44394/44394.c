/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (2697 | 62836)));
        var_18 = (min(var_18, var_14));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((max(var_11, (arr_5 [i_0])))) ^ ((255 ? (arr_5 [i_0]) : 181)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_0] [i_2] [i_4] [14] &= (1 && 166);
                                var_20 -= (max(((var_15 ? var_14 : (arr_10 [i_4] [i_3] [i_0]))), ((((arr_10 [i_0] [i_3] [i_3]) != 1)))));
                                var_21 &= ((((var_5 ? var_16 : var_16))));
                                var_22 = ((((((min(37, var_1)) >> (var_14 - 17332)))) ? (max((var_6 - var_8), 1)) : (((var_14 ? 2695 : 46)))));
                                var_23 = ((52 & (arr_9 [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    var_24 = ((251 ? (-139474443 - -1613071946) : 767874536068724035));
                    var_25 = -1613071946;
                }
            }
        }
        var_26 = (~(var_0 && var_6));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((!(((var_14 << (((arr_4 [i_5] [1]) - 1992568055137212738))))))))));
        var_28 = (min(var_28, (((((((((var_15 ? var_0 : var_14))) - (var_15 + var_15)))) ? (((min(65535, (arr_18 [i_5]))) + 12)) : (((!1) ? 28 : 44604)))))));
    }
    var_29 = ((((((31 ? 6551627285439056961 : 3760445564)) & var_13)) << (var_14 - 17325)));
    #pragma endscop
}
