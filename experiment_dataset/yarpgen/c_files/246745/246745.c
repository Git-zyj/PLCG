/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (min(var_12, var_7));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 = ((max(var_8, (~var_10))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 3] [i_1] [i_1] [i_2] = var_1;
                    arr_10 [i_0] [i_1] [i_2] |= (arr_4 [i_0 + 3] [10]);
                    var_14 = ((!((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 4]) : (arr_2 [i_0 + 4]))))));
                    var_15 |= var_0;
                }
            }
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_16 &= (min((max((arr_0 [i_3] [i_3]), (var_8 % var_6))), ((-(arr_1 [i_0])))));
            arr_14 [15] |= (min(((8525 ? (arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 4]) : -var_5)), ((var_10 ? -22369 : -22051))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] [i_4] = max((max(var_8, (min(var_9, var_9)))), ((((~var_0) >= ((var_9 ? 20822 : var_8))))));
            arr_19 [i_4] [i_4] [i_0 + 4] = ((!(25559 | 28)));
            arr_20 [10] [i_4] [i_4] = var_8;
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_23 [i_5] &= ((((-((var_6 ? var_10 : 3059)))) >= (min((var_6 * var_5), ((var_10 ? var_4 : -9205))))));
        var_17 &= var_5;
        var_18 = ((!(((~((max(var_6, var_3))))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        arr_27 [i_6] = (3997 || 32767);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_19 = var_3;
                    arr_33 [i_6 - 2] [i_7] [i_8] = var_1;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_20 = ((-(arr_31 [i_10 - 2] [i_10 - 1] [i_10 - 4])));
                                var_21 = (max(var_21, (arr_35 [i_6 - 2] [i_10 + 1] [i_6 - 2] [i_7 - 2])));
                                arr_40 [i_10] = var_10;
                                arr_41 [i_6] [i_10] [i_8] [i_9] [i_10 - 1] = arr_26 [14];
                            }
                        }
                    }
                    arr_42 [i_6] = (!var_3);
                    arr_43 [i_8] [i_8] &= (!var_10);
                }
            }
        }

        for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
        {
            var_22 = arr_38 [5] [i_11] [i_11] [i_11] [i_11];
            var_23 &= var_8;

            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                arr_50 [4] [i_11] = var_2;
                arr_51 [i_11] [i_6] [i_12] [i_12] = (((arr_25 [i_6 - 1]) ? (arr_34 [i_12 - 2] [i_11 + 3] [i_6 + 1]) : (arr_34 [i_12 - 2] [i_11 + 1] [i_11])));
            }
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                var_24 = (((arr_32 [i_6 - 1]) > var_7));
                arr_54 [i_11] [i_11 + 2] [i_11] = ((-1 ? 20825 : 13353));
            }
        }
        for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    {
                        var_25 = (max(var_25, var_0));
                        var_26 = (~var_3);
                        var_27 = (max(var_27, (arr_45 [i_6 - 2] [i_6])));
                        arr_65 [i_6] [i_14 + 4] [i_15] [i_14] = ((~(arr_35 [i_15 + 1] [i_14 - 1] [i_6 - 2] [9])));
                    }
                }
            }
            var_28 = (((arr_26 [i_6 + 1]) ? 20822 : var_8));
            var_29 = var_0;
            var_30 = var_0;
        }
    }
    for (int i_17 = 3; i_17 < 14;i_17 += 1)
    {
        var_31 = (min(var_31, var_1));
        arr_69 [i_17] [i_17 + 1] &= ((var_1 ? var_5 : (((!((((arr_0 [i_17] [i_17 + 2]) ? var_10 : var_3))))))));
    }
    #pragma endscop
}
