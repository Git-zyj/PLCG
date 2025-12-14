/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((var_8 * (var_7 / -1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = (arr_4 [i_1 - 3] [i_1 - 3]);
                        var_21 = (~var_7);
                        arr_9 [i_2] [i_1] = var_10;
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = -var_4;
        arr_11 [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [11] [i_0] [i_0] [i_0] = (min(((~(((arr_2 [i_0]) / var_18)))), var_3));
                                arr_24 [i_0] [i_4] [i_5] [i_6] [1] [i_7] = (arr_12 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_22 = var_16;
                    var_23 = (((arr_20 [i_4]) ? (min(13524591529809506872, 1)) : ((-13 ? (max(var_4, var_17)) : ((var_10 ? 12230766264730455945 : var_12))))));
                    arr_25 [i_0] [i_4] [i_5] [i_0] = 12230766264730455965;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_30 [5] = (~(arr_8 [i_8] [i_8] [16] [16] [i_8]));
        var_24 = ((~((((~6215977808979095651) == (((var_0 ? (arr_28 [i_8] [i_8]) : (arr_29 [9] [i_8])))))))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] = ((((max((((var_3 != (arr_3 [i_9])))), -1))) || (~6215977808979095669)));
        var_25 = var_12;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        var_26 = -3239;

                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            arr_44 [0] [i_11] [i_11] [i_9] = ((arr_37 [i_10] [i_9]) ? (((arr_38 [i_9] [i_9] [i_11]) ? (arr_36 [i_9]) : var_6)) : (((var_14 ? var_15 : (arr_26 [i_9])))));
                            arr_45 [i_11] [i_10] [i_11] [i_12] [i_9] [3] = (((((var_11 ? var_7 : var_18))) ? (((arr_36 [i_9]) ? var_9 : var_17)) : (arr_40 [i_10] [i_11] [i_10] [i_10 + 1] [i_12 - 1])));
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_48 [i_9] [i_10] [i_10 - 1] [i_11] [i_12 + 1] [i_14] [i_14] = var_15;
                            var_27 = 39949;
                        }
                        var_28 = 30;
                        var_29 = var_18;
                        arr_49 [i_11] = (arr_21 [i_12] [i_12] [i_12 + 3] [i_12] [i_12] [i_12 + 2] [i_12]);
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_52 [i_11] [i_11] [2] [i_11] = (max((arr_31 [i_9]), var_13));
                        arr_53 [i_11] [i_10 - 1] = (~((var_13 ? 22 : var_17)));
                        var_30 = (((var_7 < var_10) ? var_16 : (((arr_47 [i_9] [i_11] [i_10 + 1]) ? (arr_47 [i_10] [i_11] [i_10 + 1]) : (arr_47 [i_10] [i_11] [i_10 + 1])))));
                        arr_54 [i_9] [i_11] [i_11] [i_15] = ((((arr_14 [i_10 - 1] [i_10 + 1] [i_11]) ^ (arr_15 [i_10 - 1] [i_11] [i_15]))));
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        arr_58 [i_9] [i_10 + 2] [i_9] [i_11] [i_11] [i_16] = (((arr_15 [i_10 + 2] [12] [i_10]) && (((var_9 ? (arr_21 [i_9] [i_9] [i_10] [i_10 - 1] [i_10 + 1] [i_16] [8]) : (arr_15 [i_9] [i_9] [i_9]))))));
                        arr_59 [i_11] [i_10] [i_10] [i_11] [i_11] [i_16] = 619076025763648014;
                        var_31 = (min(((((arr_17 [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1]) ^ var_1))), ((((var_11 ? var_6 : (arr_1 [i_9]))) << (arr_4 [i_9] [i_10])))));
                        var_32 = ((((min(((3 ? 22 : var_6)), var_2))) ? -117 : (((((arr_18 [i_9] [i_10 - 1] [i_11] [1] [11] [i_9]) ? (arr_41 [0] [i_10 - 1] [i_11] [i_10 - 1]) : var_4))))));
                    }
                    var_33 = var_6;
                    var_34 = (arr_28 [i_11] [i_9]);
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 11;i_17 += 1)
    {
        arr_62 [i_17] = ((~27062) ^ (((~1) - (max((arr_7 [i_17 - 1] [i_17 + 1] [10] [i_17] [i_17]), var_6)))));
        var_35 = 23;
    }
    #pragma endscop
}
