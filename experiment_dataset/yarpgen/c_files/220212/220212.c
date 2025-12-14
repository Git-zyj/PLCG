/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = -var_7;
                                var_21 = (~var_17);
                                arr_15 [3] [i_1] [i_3] [9] [i_4] = (((arr_3 [i_2 + 1]) ? (((arr_10 [i_2 + 3] [i_2] [i_2 - 2]) << (((arr_10 [i_2 + 3] [i_2 + 3] [i_2 + 3]) - 2040923229)))) : (arr_10 [i_2 - 3] [i_2 + 2] [i_2 - 2])));
                            }
                        }
                    }
                    var_22 = (((arr_2 [i_2 + 3]) << var_18));
                    arr_16 [i_0] [i_0] [i_1] [i_2] = 207;
                    var_23 = (((((arr_11 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 4] [i_2]) ? (arr_11 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 4] [i_2 - 3]) : (arr_11 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 - 4] [i_2 + 1]))) <= (-1616139588 ^ var_13)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_6] = (((724012181 > -3913524719947189341) > (arr_22 [i_5])));
                arr_26 [i_5] [i_6] = (((arr_21 [i_5] [i_6] [i_5]) ? ((var_5 ? 31434 : (var_13 ^ 3100439996))) : ((-(arr_19 [i_6])))));
                var_24 = 1689409359;
            }
        }
    }
    #pragma endscop
}
