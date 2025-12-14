/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = var_11;
        var_21 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = (arr_0 [i_1]);
        var_23 += (((-(arr_4 [i_1] [i_1]))));
        var_24 -= (arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2 - 1] [i_2] [i_2 - 1] = (-((+(min((arr_0 [1]), var_13)))));
                    var_25 -= (~46340);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((-17 ? 7917541164962857903 : 59514)))));
                                arr_17 [i_1] [i_1] [2] [i_1] [i_4] [i_2] = (min(((((arr_4 [i_5 - 2] [i_2 + 1]) ? var_16 : 1))), (((arr_16 [i_2] [i_3 + 1]) ? (arr_16 [i_2] [i_2]) : (arr_16 [i_2] [i_5])))));
                                arr_18 [i_2] = (i_2 % 2 == 0) ? ((max((((arr_15 [i_4] [i_2 - 2] [9] [i_2] [7] [i_5] [0]) >> (((arr_15 [i_1] [i_2 - 1] [i_3] [i_2] [i_5] [i_5] [8]) - 4679080422132005570)))), (((arr_15 [i_1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_4]) ? (arr_15 [0] [i_2 - 2] [i_3 + 1] [i_2] [9] [i_2] [0]) : (arr_15 [i_1] [i_2 + 1] [i_3] [i_2] [i_5] [i_4] [i_3 + 2])))))) : ((max((((arr_15 [i_4] [i_2 - 2] [9] [i_2] [7] [i_5] [0]) >> (((((arr_15 [i_1] [i_2 - 1] [i_3] [i_2] [i_5] [i_5] [8]) - 4679080422132005570)) - 3496474446072033989)))), (((arr_15 [i_1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_4]) ? (arr_15 [0] [i_2 - 2] [i_3 + 1] [i_2] [9] [i_2] [0]) : (arr_15 [i_1] [i_2 + 1] [i_3] [i_2] [i_5] [i_4] [i_3 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_16 ? ((max(var_19, var_8))) : var_14));
    #pragma endscop
}
