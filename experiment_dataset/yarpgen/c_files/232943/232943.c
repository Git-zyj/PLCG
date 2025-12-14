/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [6] = ((min(-1, 18446744073709551613)));
                arr_6 [i_1] [1] = ((var_9 >> (var_4 - 61017)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_14 [i_2] = (min(var_0, -1));
                arr_15 [i_2] [i_3] [i_3] = (min((((arr_11 [i_2 - 2] [i_2 + 4] [i_2 + 1]) ? 0 : 1)), (arr_7 [i_2])));
                arr_16 [i_2] [i_3] = ((4294967295 ? (((~-8) ? 1 : (((arr_7 [i_2]) & 1)))) : 1));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_22 [i_5] [14] [i_4] [i_4] [i_2] [i_2 + 3] = (((arr_10 [i_2] [i_3]) ? 9223372036854775800 : ((18446744073709551615 >> (((max((arr_12 [i_2]), var_3)) - 144470056))))));

                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_26 [i_4] [i_3] [i_4] = var_10;
                                arr_27 [i_2 - 1] [i_3] [i_4] [i_2 - 1] [i_2] = (1 >> (((arr_8 [i_4 - 3] [i_2 + 2]) + 21839)));
                            }
                            for (int i_7 = 1; i_7 < 22;i_7 += 1)
                            {
                                arr_30 [0] [19] [19] [19] [i_4] = (min(((0 >> (((arr_29 [i_7 + 2] [i_5] [i_5] [i_4 - 2] [i_2 + 1]) - 65330)))), (((var_14 + 2147483647) >> ((((-1 ? var_8 : (arr_7 [i_4]))) - 30777))))));
                                arr_31 [i_2] [i_3] [i_3] [i_4] [i_4] [i_4] = ((((((165 ? (-9223372036854775807 - 1) : 0)))) >> (25436 - 25415)));
                                arr_32 [i_3] = (((-28947 - var_12) ? 1 : ((9223372036854775807 >> (((arr_19 [i_2] [i_7]) - 3535014318958319164))))));
                            }
                            for (int i_8 = 3; i_8 < 22;i_8 += 1)
                            {
                                arr_37 [i_2] [i_2] [i_4] [i_5] [i_4] = (-9223372036854775807 - 1);
                                arr_38 [i_2] [i_3] [i_4] [i_3] [i_5] [i_3] [i_8] = (min((((min((arr_17 [i_3]), 1)))), (((((-613947187 ? var_8 : 8))) ? var_6 : ((var_7 ? 2660315496927427472 : 38036))))));
                                arr_39 [i_2] [i_4] = ((32746 ? -1 : var_3));
                            }
                            arr_40 [i_5] [i_4 + 1] [i_4] [i_2] [i_2] = (arr_25 [i_5] [i_4] [i_3]);
                            arr_41 [i_4] [i_4 - 3] [i_3] [i_4] = ((!(-9223372036854775807 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
