/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 += ((((~(arr_7 [i_3] [i_3] [i_3] [i_0 - 1]))) & (arr_7 [i_3] [i_1] [i_1] [i_0 + 4])));
                        var_17 = (min((arr_8 [i_0 + 1] [i_0] [i_0 - 2]), (min((arr_2 [i_1]), ((-15 ? 11234 : 159))))));
                    }
                }
            }
        }
        var_18 = (min((arr_2 [i_0 + 4]), (max((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) - 15606954926595668098))))));
        var_19 = 11854233184895532304;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_20 = 3075840875;
        arr_14 [i_4] = (arr_1 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_5 + 1] = (arr_0 [i_4] [i_4]);
                    var_21 *= (!21657);
                    arr_22 [i_4 + 2] [i_4] [i_6] = (arr_8 [i_4] [i_4] [i_4]);
                }
            }
        }
        var_22 = (min(var_22, (((var_8 | (((~(arr_2 [i_4])))))))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_23 = (max(((max(129, 1))), (arr_24 [i_7])));
        arr_26 [i_7] [i_7] = (((~(arr_13 [10] [i_7]))));
        arr_27 [i_7] = var_5;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    {
                        var_24 = (arr_11 [i_7]);

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 8;i_11 += 1)
                        {
                            arr_39 [i_8] [i_8] [i_8] [3] [i_8] [i_10] [6] = ((0 ? var_7 : var_6));
                            var_25 = 159;
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_42 [i_7] [i_10] = var_1;
                            var_26 *= (0 & var_10);
                            var_27 += (max(((max((arr_23 [i_7]), (arr_23 [i_12])))), var_11));
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            var_28 = (min(var_28, (arr_0 [16] [i_8])));
                            var_29 = var_10;
                            var_30 = 7171053609241758717;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_31 = (min(var_31, ((((arr_18 [i_14] [i_10] [i_10] [i_10 - 3]) ? (arr_18 [i_14] [i_14] [i_14] [i_10 + 1]) : (arr_18 [17] [17] [i_14] [i_10 + 1]))))));
                            var_32 ^= ((var_5 ? (arr_2 [i_10 + 1]) : (arr_2 [i_10 - 2])));
                            var_33 = ((-((-7171053609241758706 ? (arr_16 [i_10] [i_10]) : var_6))));
                        }
                        var_34 = (min(var_34, var_2));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] [i_15] = arr_17 [i_15] [i_15];
        var_35 += ((20 - (arr_48 [2])));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 8;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 6;i_18 += 1)
                {
                    {
                        arr_58 [i_15] [i_15] [i_15] [i_18] = ((arr_45 [i_15] [i_16] [i_17] [i_18]) / 37004);
                        arr_59 [i_15] [i_15] [i_17] [i_18 - 1] = (((arr_48 [i_15]) / (arr_38 [i_15] [i_15] [i_15] [i_15] [9] [i_15] [i_15])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
