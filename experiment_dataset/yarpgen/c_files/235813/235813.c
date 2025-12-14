/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((!(max((arr_0 [i_0] [i_1 + 2]), (arr_0 [i_1] [i_1 + 2])))));
                var_16 = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    arr_11 [i_4] [i_3] [i_2] [i_2] = ((var_4 ? (((var_5 ? (arr_4 [i_4 - 1] [i_4 + 2]) : 127))) : -1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4 - 1] [i_4] [i_5] [1] [i_6] = (((var_5 ? (arr_4 [i_2 - 1] [i_3 - 1]) : -30)));
                                var_17 = ((((-(arr_9 [i_2 - 1] [i_6 + 1] [i_3 + 1]))) | ((((arr_17 [i_2 + 1] [i_6 + 1] [i_3 + 1]) == var_5)))));
                                var_18 = (max(var_18, (((!((min(((84 >> (((arr_1 [i_3]) - 1397290185)))), var_4))))))));
                            }
                        }
                    }
                    arr_19 [i_2 - 1] [i_2 - 1] |= (((-32767 - 1) > (arr_3 [i_4 - 1])));
                    arr_20 [10] [9] [i_4] = ((-1 ? -19 : ((63 ? (((0 ? var_6 : -2))) : ((var_6 ? 19 : (arr_3 [i_2])))))));
                }
            }
        }
    }
    var_19 = (((((111 ? ((var_5 ? var_3 : var_12)) : var_3))) * -var_6));
    var_20 = (((var_8 && (var_6 / var_12))));
    #pragma endscop
}
