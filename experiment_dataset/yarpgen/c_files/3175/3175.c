/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_10 [i_3] [i_3] [i_1 - 3] [i_2] [i_1 - 3] [i_3] [i_3] = 4294967295;
                                var_10 *= ((((~(((arr_1 [i_0] [i_1]) ? var_1 : (arr_9 [i_4] [i_0] [i_2] [i_0] [i_0]))))) ^ 1));
                            }
                        }
                    }
                    var_11 += (arr_6 [i_0] [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_12 -= (max(1, 4610560118520545280));
                                var_13 = (((~(arr_8 [i_0] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_1 + 1]))));
                                var_14 = arr_13 [i_0] [i_5];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                {
                    var_15 = 1103761486;
                    var_16 ^= 1;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_30 [i_10] = (((var_4 | (arr_13 [i_10] [i_10]))));
        var_17 = (((44452 ? 18446744073709551615 : 1)));
    }
    for (int i_11 = 2; i_11 < 19;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                {
                    var_18 ^= ((~(max((arr_11 [i_11] [i_11] [i_11] [i_13 + 2]), ((1 ? var_2 : (arr_15 [3] [i_12] [i_11] [i_11] [i_11])))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_17 [i_13] [i_11])));
                                arr_45 [i_11] [9] [9] [i_12] [9] = (((((arr_12 [i_11 - 2] [i_12] [i_13] [i_14] [i_15]) ? (arr_11 [i_11] [2] [i_11] [i_11]) : (arr_44 [i_11 + 1] [i_11 + 1] [i_12] [17] [i_11]))) > ((((!((((arr_18 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1]) ? 0 : (arr_3 [i_11] [i_11]))))))))));
                                var_20 = (min(var_20, (18446744073709551613 & 448)));
                            }
                        }
                    }
                    var_21 = 8682559924535776371;
                }
            }
        }
        arr_46 [i_11] = (arr_43 [i_11]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_22 = (arr_37 [i_16]);
        arr_49 [i_16] = ((((-8682559924535776372 ? 65087 : 128)) >= var_0));
        var_23 = (max(var_23, 1));
        var_24 = (((arr_43 [i_16]) ? (arr_43 [i_16]) : -1486748473));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
    {
        var_25 = (((((-414852476 ? 2147483647 : (arr_34 [i_17] [i_17])))) ? -8682559924535776372 : -3));
        var_26 *= (~1);
        var_27 = ((-(arr_50 [i_17])));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 15;i_19 += 1)
            {
                {
                    arr_59 [i_17] [i_17] [i_19] = (((55460 - 1) ? 23 : (arr_2 [i_17] [i_17])));
                    arr_60 [i_17] [i_17] [i_17] = (!1);
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 16;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            {
                                arr_67 [i_17] [i_18] [i_19] [i_17] [14] = (arr_65 [i_17] [i_20] [i_21]);
                                arr_68 [i_21] [i_17] [i_17] [i_17] [i_17] = (((2969373034 | 1) | (arr_9 [i_20] [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1])));
                            }
                        }
                    }
                    arr_69 [i_17] [i_17] [i_17] [i_19] = ((453 ? ((4274512327 ? 277401225516858174 : 117)) : (!3)));
                    var_28 = 18446744073709551602;
                }
            }
        }
    }
    #pragma endscop
}
