/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 += var_7;
        arr_3 [i_0] = 86;
        arr_4 [i_0] [i_0] = min((((arr_0 [i_0 + 1]) / var_3)), (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 = (max(((var_4 / (arr_5 [i_1 + 1]))), (!var_4)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((((arr_15 [i_2]) ? (arr_10 [i_5] [i_4] [i_4]) : 84)) < var_11)))));
                            var_21 = (min(var_21, var_9));
                            var_22 = (min(var_22, var_17));
                            arr_17 [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_4] [13] = (((arr_5 [i_3]) ? 176 : var_2));
                            var_23 = (arr_12 [i_1] [i_4] [i_4]);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [i_6 - 1] [i_4] [i_6] [i_1] [i_4] = (((arr_5 [i_1 + 1]) + 32465));
                            var_24 += (arr_16 [i_6] [i_6] [i_1 + 1] [i_1 + 1]);
                            var_25 ^= (arr_13 [i_6 + 1]);
                            var_26 = ((var_6 / (arr_11 [i_1 - 2] [i_3])));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_7] [9] [i_7] = ((var_3 ^ (arr_18 [i_2 + 1] [i_4] [i_7] [i_7 - 3] [i_7])));
                            arr_24 [i_7] [i_7] [i_7] = (((arr_22 [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7 - 3] [i_7 - 2]) != (!var_8)));
                            arr_25 [i_1 + 2] [16] [i_7] [i_1 + 2] = -30;
                        }
                        arr_26 [i_1] [i_1] [i_1] [20] [i_3] [20] = var_10;
                    }
                }
            }
        }
        var_27 = (max(var_27, (!-113)));
        var_28 *= ((!(((var_11 ? (arr_16 [19] [i_1 - 1] [i_1 + 2] [i_1 - 2]) : 3)))));
    }
    var_29 = (min(var_29, var_4));
    var_30 = (min((((max(var_9, var_8)))), ((((min(32767, var_1))) - 80))));
    #pragma endscop
}
