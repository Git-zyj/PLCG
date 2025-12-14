/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 = -26;

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = var_18;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = (((((min(var_8, var_18)))) ^ -var_10));
                            var_22 = (min(var_22, (min(1, ((((arr_5 [i_0] [i_1] [i_0 - 1]) ? (arr_5 [i_0 - 1] [i_4] [i_0 + 2]) : (arr_5 [i_0 - 1] [i_3] [i_0 + 2]))))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_23 = (((arr_9 [i_0] [i_0 - 1] [i_5] [i_5]) ? (arr_3 [i_0 + 1] [i_0]) : var_14));
            var_24 &= var_3;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_25 = 46476;
                            var_26 *= (min((max(((var_7 + (arr_22 [i_0] [i_6] [i_7 - 2] [i_9]))), 1)), ((((arr_23 [i_9] [i_9 - 1] [i_9] [1] [i_9 - 1]) == (((max(var_1, (arr_7 [0]))))))))));
                            var_27 = (min((((var_15 ? var_1 : (arr_11 [i_9 - 1] [i_9 - 1] [i_8] [i_7] [i_9])))), (((((arr_23 [i_0] [1] [i_0] [i_7] [i_0]) && var_4)) ? var_14 : (min(var_18, var_12))))));
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                arr_29 [i_0] [i_6] [i_10] [9] = ((arr_21 [i_0 + 3] [6]) ? (((max((max(var_4, (arr_11 [i_0 + 2] [i_0] [i_0] [14] [i_0 + 3]))), ((min(var_0, (arr_26 [i_0] [i_0] [i_6] [i_6])))))))) : -0);
                arr_30 [16] [16] [1] [16] = 15606576288004282149;
            }
        }
        var_28 = (arr_21 [i_0 - 1] [1]);
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_37 [i_13] [i_12] [i_12] [i_12] = (arr_16 [i_11 - 1]);
                    var_29 = (~var_13);
                    var_30 = var_4;
                }
            }
        }
        arr_38 [i_11] = (((arr_31 [i_11 + 1] [i_11 - 1]) & var_0));
        arr_39 [i_11 + 1] = 1;
        var_31 = (2274797445 == 1);
    }
    #pragma endscop
}
