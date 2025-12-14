/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (var_5 && -var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((~(var_12 == var_2)));
                arr_4 [i_1] = (((max(var_10, var_2)) ^ var_9));
                var_16 = var_10;
            }
        }
    }
    var_17 = (((-586199901 <= -586199910) == (4294967295 % var_8)));

    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (var_10 ^ var_0);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 = (max(var_7, var_5));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = var_9;
                                var_20 = (67 / 152);
                                var_21 = var_2;
                                arr_20 [i_2] [i_5] [i_5] [i_4] [i_3] [i_2 + 1] [i_2] = var_7;
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] [i_2] = ((-(((var_9 & var_10) ^ var_5))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [i_2] [i_2] = var_3;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = var_8;
                                arr_29 [i_2] [i_2] [i_4] [i_2] [i_8] [i_8] [i_2] = var_2;
                                var_24 = var_9;
                            }
                        }
                    }
                    var_25 = ((var_10 >= ((((-1 + 2147483647) >> (var_9 && var_9))))));
                }
            }
        }
        var_26 = var_9;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_27 = ((-(~var_12)));
        var_28 = var_8;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] [i_10] = var_12;
        var_29 = (arr_17 [i_10] [i_10] [i_10] [i_10]);
    }
    #pragma endscop
}
