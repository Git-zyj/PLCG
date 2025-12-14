/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 -= (var_5 / var_13);
        arr_2 [6] &= (((((var_2 > (arr_0 [i_0])))) >> (((arr_0 [i_0]) + 1790924066))));
        arr_3 [7] [i_0] = var_10;
        var_16 ^= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((var_12 | var_12) - 18446744073709551611))));
        var_18 = (var_14 >> (13764138147066020178 - 13764138147066020173));

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_1] [i_2] = var_10;
            arr_9 [i_2] [i_2] = var_11;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_19 = (((arr_0 [i_3]) - (arr_0 [i_3])));
            arr_12 [i_3] [9] = var_5;
            var_20 = (((arr_0 [i_1]) <= (var_5 <= var_9)));
        }
        var_21 = ((var_14 > (var_10 <= var_1)));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_22 = 424043764;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_23 = 3870923545;
                                arr_25 [11] [11] [2] [i_6] [i_4] [13] = var_12;
                                arr_26 [i_4] [12] [i_4] [i_4] [i_4] [i_4] [i_4] = 1948777996;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
