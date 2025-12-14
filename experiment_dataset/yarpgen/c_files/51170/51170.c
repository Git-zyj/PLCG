/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 < var_3);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 - 1] = ((var_5 > ((((var_7 < var_3) < ((max(var_8, var_11))))))));
                    var_14 = (((((arr_1 [i_2 - 1]) * (arr_1 [i_1]))) & (((arr_6 [i_0] [i_1] [i_2] [i_0]) ? var_4 : (((arr_2 [1] [i_2]) ? var_9 : var_12))))));
                    var_15 = ((var_10 || ((max((var_10 ^ var_9), ((max(var_9, (arr_3 [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_16 -= (arr_3 [i_0]);
                                var_17 = ((((((var_10 / 59) ? ((-(arr_11 [i_0] [i_1] [i_2] [i_3] [i_4 + 2]))) : ((max((arr_1 [i_0]), 75)))))) ? ((max((arr_8 [i_2] [i_1] [1] [i_2] [i_4 - 1]), (arr_3 [i_1])))) : ((((var_9 / var_3) <= var_6)))));
                                var_18 -= (max(((((max((arr_11 [i_0] [i_0] [i_0] [i_3] [i_4]), (arr_9 [8])))) ? (((!(arr_0 [i_1] [i_2 - 1])))) : ((((arr_12 [2] [i_1] [i_2] [i_3] [i_4] [i_4]) && 0))))), ((((~8560573208442905740) > (~var_6))))));
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = (max((max((arr_12 [6] [i_1] [i_1] [i_2 - 1] [i_2] [i_2 - 1]), var_7)), (var_2 < var_5)));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((!((max((arr_6 [i_0] [i_0] [i_0] [i_0]), var_11)))));
        var_20 -= (0 & 1);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_6] [i_6] &= (((arr_17 [i_5] [i_5] [i_5]) & var_9));
                arr_20 [i_5] = (((var_11 | var_4) * (((arr_16 [i_5]) * (arr_17 [i_6] [i_6] [i_5])))));
                arr_21 [i_6] = var_5;
                var_21 = var_11;
                arr_22 [i_5] = (((((((var_6 ? 3880308837 : 414658458)) * 3880308846))) / (59 * 3880308846)));
            }
        }
    }
    #pragma endscop
}
