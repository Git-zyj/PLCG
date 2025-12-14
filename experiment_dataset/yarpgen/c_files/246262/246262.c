/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((((arr_1 [i_0]) + 2147483647)) << (((((arr_1 [i_0]) + 14983)) - 10))))) ? 87 : 4294967289)))));
        var_13 = ((-((max(8532, -237)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 += ((((4081015245 ? (arr_4 [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_1 [i_1 + 1]))) - (((((arr_1 [i_1 - 1]) + 2147483647)) << (((((arr_1 [i_1 + 1]) + 14991)) - 18))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] = 4081015267;
                            arr_11 [i_2] [i_2] [i_3] [i_2] = 4081015245;
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            arr_14 [1] [1] [1] [6] [i_3] = (max((((arr_4 [i_1] [20] [i_1 - 1] [i_2 - 1]) - (arr_4 [i_0] [14] [i_1 - 1] [i_2 - 1]))), 1));
                            var_15 = (((~76) >= ((-92 ? (arr_8 [i_3] [i_3] [i_3] [i_2 + 1]) : (arr_13 [i_3] [i_5] [i_3])))));
                            var_16 -= -94;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_3] = ((!(arr_6 [i_3])));
                            arr_18 [i_3] [i_1] [i_6] [i_1] [i_3] = ((var_1 ? (((arr_3 [i_1 - 1] [i_1 + 1]) - 1)) : ((((arr_3 [i_1 + 1] [i_1 - 1]) && 4081015249)))));
                            var_17 = var_9;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_3] = 835681359;
                            arr_23 [i_7] [i_3] [i_3] [i_3] [i_0] [i_0] = (((arr_9 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1]) && (((3 ? var_9 : (arr_8 [i_1] [i_1] [1] [i_7]))))));
                            arr_24 [i_3] = 4081015251;
                            var_18 = (max(var_18, (((~(arr_3 [i_1 + 1] [1]))))));
                        }
                        var_19 = (min(-10952, (((arr_20 [i_3] [i_1]) ? (arr_20 [i_3] [i_2 - 1]) : 1))));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        var_20 = 42767;
        var_21 = 213952019;

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_22 -= ((-26140 - (arr_27 [i_9] [12] [i_8 + 1])));
            var_23 = (arr_12 [i_8]);
            var_24 = (((arr_20 [i_8] [i_8 + 1]) ? (((arr_20 [i_8] [i_8 + 1]) >> (var_1 + 1736200213))) : (((((arr_20 [i_8] [i_8 + 1]) && (arr_20 [i_8] [i_8 - 1])))))));
            arr_29 [i_8] = (i_8 % 2 == 0) ? (((((((~var_9) && (((var_10 ? var_6 : (arr_1 [i_9]))))))) >> (((arr_13 [i_8 - 1] [i_9] [i_8]) + 27135))))) : (((((((~var_9) && (((var_10 ? var_6 : (arr_1 [i_9]))))))) >> (((((arr_13 [i_8 - 1] [i_9] [i_8]) + 27135)) - 32101)))));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_25 = (!0);
                            arr_40 [i_8] [6] [i_12] [i_11] [i_10] [5] [i_8] = -var_0;
                            var_26 = (arr_36 [i_11] [i_11]);
                        }
                    }
                }
            }
            var_27 ^= var_0;
            var_28 = (((((arr_31 [i_8 + 1] [i_8 + 1]) ? (arr_31 [i_8 - 1] [i_8 + 1]) : (arr_31 [i_8 + 1] [i_8 - 1]))) | ((835681359 ? (arr_31 [i_8 - 1] [i_8 + 1]) : (arr_31 [i_8 + 1] [i_8 + 1])))));
        }
    }

    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        arr_43 [i_14] = (max((((arr_1 [i_14 + 1]) ^ var_1)), (max(var_7, (((arr_8 [i_14] [i_14] [i_14] [i_14]) >> var_5))))));
        var_29 = (min(var_29, (((((var_7 ? ((110 ? 13 : 32360)) : (arr_5 [i_14]))) != (arr_2 [i_14 + 2]))))));
    }
    #pragma endscop
}
