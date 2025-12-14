/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = -4294967295;
    var_20 = -var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [1] [1] = (-var_16 + var_3);
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) != ((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((var_16 ? (arr_0 [i_3]) : 4294967295))) ? (arr_6 [i_1 + 3] [i_3]) : (arr_17 [i_0] [i_1] [i_4 - 2] [i_1] [i_4] [i_4 - 2]));
                                var_21 = var_0;
                            }
                        }
                    }
                    arr_20 [i_0] [4] [i_1] [i_0] = (!var_12);
                    arr_21 [i_1] [i_1 + 3] [i_0] = -1;

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_22 = (min(var_22, (((!(arr_7 [i_1] [i_1 + 2] [i_2 - 1]))))));
                            arr_27 [6] [i_0] [i_1] [i_0] [i_2] [i_5] [i_6] = (arr_13 [i_2 + 1]);
                        }
                        var_23 = (-(arr_12 [i_0] [i_2 + 1] [i_1 + 2]));
                        var_24 = (arr_16 [i_1] [i_1 + 1] [i_1]);
                        var_25 = ((arr_12 [i_0] [i_1 + 3] [i_1 + 3]) ? var_17 : (arr_24 [i_1] [i_1 + 1] [i_1] [i_2 - 1]));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_26 = (((arr_1 [i_0]) + var_4));
                            var_27 = (((arr_8 [i_0] [i_1] [i_1 + 2] [i_0]) ? var_1 : 1));
                            var_28 = 2751154585;
                        }
                        var_29 = (min(var_29, ((((arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? var_6 : (arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1]))))));
                        arr_33 [i_0] [i_1 + 1] [5] [i_2] [i_1] [i_7] = (12926459530599758701 && var_6);
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_30 &= (arr_29 [i_9] [i_9] [i_2] [i_2]);
                        var_31 = ((-(arr_26 [i_0] [i_0] [i_9] [i_9] [i_9])));
                        var_32 = (arr_12 [i_1 + 2] [i_2 + 2] [i_2 + 2]);
                    }
                }
            }
        }
        var_33 -= (((arr_28 [i_0] [i_0]) ? var_14 : (arr_14 [i_0] [i_0] [1] [i_0] [i_0] [i_0])));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_34 = (((max(10908864166320899346, ((max((arr_26 [i_10] [i_10] [i_10] [i_10] [6]), var_2))))) / var_12));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                {
                    arr_43 [10] [i_11] [i_11] |= ((+(max(((((arr_0 [i_10]) && var_2))), (arr_8 [i_10] [i_10] [i_12 - 1] [i_12 - 1])))));
                    var_35 = (min(var_35, 4161468997));
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_49 [i_10] [i_10] [i_12] [i_13] [i_12] [i_10] = (((arr_31 [i_10] [i_11] [i_12] [i_13]) + (((((var_16 ? (arr_30 [i_14] [i_13]) : var_8))) ? var_7 : var_6))));
                                var_36 = arr_35 [i_10] [i_12 - 1] [i_13] [i_12 - 1] [i_14] [i_10];
                                var_37 ^= ((-(((arr_35 [i_10] [2] [i_11] [i_12] [i_13] [i_14]) / (arr_35 [10] [i_11] [i_11] [i_12 - 1] [i_13] [i_14])))));
                                arr_50 [i_11] [i_12] [i_13] [i_14] = ((-(arr_45 [i_13 + 1] [i_11] [i_11] [i_13 - 1])));
                                arr_51 [11] [i_11] [i_11] [i_13] [i_13] = (arr_28 [i_10] [i_10]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
    {
        var_38 = (arr_31 [i_15] [i_15] [i_15] [i_15]);
        var_39 = (max(var_39, var_4));
        arr_54 [i_15] [i_15] = var_2;
    }
    var_40 = var_11;
    #pragma endscop
}
