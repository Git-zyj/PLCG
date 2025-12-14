/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((min(var_14, var_15)), var_17)), ((((~var_13) ? var_5 : (min(var_14, var_11)))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [1] = var_11;
        arr_3 [i_0] = var_11;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_0 + 1] [i_3] = (+(((arr_6 [i_3] [i_0 - 2] [15] [i_0 - 1]) % (arr_6 [i_2] [i_0 - 2] [i_0] [i_0]))));
                        var_19 = ((var_10 ? (min(var_0, (min(var_2, var_0)))) : (!var_6)));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_13 [i_4 - 1]) ? (arr_13 [i_4 - 2]) : (min((arr_13 [i_4 - 1]), (arr_13 [i_4 + 1]))))))));
        var_21 *= (min((min(17600577387710023853, var_15)), var_13));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    arr_23 [i_6] [i_5] [i_6] [i_6 - 1] = ((((min((min((arr_14 [i_4 - 2] [20]), var_2)), ((((arr_1 [11]) ? (arr_17 [8] [8]) : (arr_1 [i_6 + 1]))))))) ? (min((arr_20 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_6]), (var_6 != var_17))) : (min((((arr_20 [i_6] [i_5] [i_4] [i_4]) ? (arr_0 [i_4] [i_4]) : var_6)), (arr_15 [i_4] [i_5])))));
                    arr_24 [i_6] [i_4 - 1] [i_4 - 1] = (((min((~-14), (((arr_21 [10] [i_5] [i_5] [i_5]) ? var_5 : var_5)))) % (min((arr_11 [i_6 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1]), (arr_11 [i_6 - 1] [i_5] [i_6 + 1] [i_4 + 1])))));

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        var_22 = ((var_5 ^ ((var_8 ^ (arr_22 [i_4] [i_4] [i_4])))));
                        var_23 &= var_11;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = var_4;
                        arr_31 [19] [1] [i_4 - 1] = var_12;
                    }
                }
            }
        }
    }
    for (int i_9 = 4; i_9 < 6;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    var_25 *= (arr_39 [i_9] [i_9] [i_9]);
                    var_26 = (min(var_26, (arr_37 [i_9])));
                }
            }
        }
        var_27 = (max(var_27, (((+(((arr_34 [i_9 + 1] [i_9 + 1]) ? (arr_27 [i_9 + 4] [i_9 + 4] [i_9 + 1] [i_9 + 2]) : (arr_34 [i_9 - 2] [i_9 - 1]))))))));

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_43 [8] [1] = ((-2076299532 ? ((((!(arr_20 [4] [4] [4] [18]))) ? var_14 : var_4)) : (arr_25 [i_9] [19])));
            var_28 = (max(var_28, (var_14 ^ var_8)));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_29 *= (min((min(var_8, (((var_12 && (arr_17 [i_9 - 1] [i_13])))))), (((min(var_10, var_17)) + (((var_0 != (arr_28 [i_13] [9] [i_13] [i_13] [i_13]))))))));
            var_30 = (max(var_30, ((min(var_13, ((((arr_10 [i_9] [i_13] [i_9] [i_9]) && var_10))))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {
                        arr_52 [i_15] [i_13] [i_15] = min(((((((min(var_0, (arr_49 [i_9 - 4]))) + 2147483647)) >> (((arr_47 [i_9 + 4] [i_9 - 2]) - 8943615605893881793))))), ((min((arr_47 [i_9 + 3] [4]), var_1))));
                        arr_53 [i_15] [i_13] = ((~(arr_14 [i_9 - 4] [i_9 - 4])));
                        arr_54 [5] [i_15] [i_14] [3] = ((-((((min(var_13, var_0))) ? ((-(arr_37 [9]))) : var_9))));
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_57 [i_16] [i_16] [i_9 + 1] = ((var_4 ? ((((arr_29 [i_9] [i_9] [i_9] [1] [1] [i_16]) && var_6))) : ((min(((!(arr_51 [0] [i_9] [i_9] [i_9]))), (!var_6))))));
            arr_58 [i_16] = (arr_45 [i_9 - 2]);
        }
    }
    for (int i_17 = 1; i_17 < 9;i_17 += 1)
    {
        arr_63 [i_17] [i_17 - 1] = (+(min(((var_8 ? (arr_7 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17]) : (arr_11 [i_17] [i_17] [4] [i_17]))), var_17)));
        var_31 = (((((((arr_30 [i_17 + 2] [i_17 + 2] [i_17] [i_17 + 2] [i_17 + 2]) | (arr_17 [12] [12]))))) ^ 72040001851883520));
    }
    var_32 = -var_14;
    #pragma endscop
}
