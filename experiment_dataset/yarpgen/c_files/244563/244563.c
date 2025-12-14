/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = ((((((((var_6 ? 7048 : (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? var_1 : (max((arr_2 [i_2] [i_0 + 3]), var_7))))) ? (!251) : ((((~var_0) && (~var_0))))));
                                var_11 += var_0;
                                var_12 = ((-(((arr_9 [i_2 - 1] [i_2 + 4] [i_4 - 2] [i_4] [1]) ? var_3 : var_8))));
                            }
                        }
                    }
                    var_13 = ((~(min(((min(var_7, var_4))), ((6 ? (arr_1 [3]) : (arr_3 [i_0 + 3] [i_0 + 3])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_14 = ((((min((arr_19 [i_7] [i_7 - 2] [1] [i_7] [i_7 + 1] [i_7 - 2]), var_6))) ? (min(4294967277, (arr_9 [i_6 - 1] [i_7] [i_7] [i_6 - 1] [i_7 + 1]))) : (((65530 ? 0 : 4294967261)))));
                                arr_21 [i_0] [i_5] [i_0] [i_0] [i_7] [i_8] [i_8] |= ((((((arr_6 [i_0] [i_7] [i_0] [i_7] [i_7] [i_8 - 1]) % (((var_5 > (arr_1 [i_7 + 1]))))))) && (((var_6 ? (4294967267 >= 65340) : ((max((arr_0 [i_0]), 6))))))));
                            }
                        }
                    }
                    var_15 = 11;
                }
            }
        }
        var_16 = ((-(~1)));
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_17 = var_3;
        var_18 &= (-var_9 & (((((var_4 ? 65504 : var_7))) ? (((arr_17 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9]) ? var_8 : (arr_22 [i_9]))) : var_7)));
        arr_24 [12] &= ((((min(6, 24))) && ((((arr_14 [i_9 + 2] [i_9 + 2] [i_9 + 1]) ? (((arr_16 [i_9]) ? (arr_9 [i_9 - 1] [i_9] [i_9] [1] [i_9]) : var_1)) : (arr_20 [15] [i_9 + 1] [i_9 + 3] [15] [i_9 + 1]))))));
        var_19 = (((!((min(var_7, var_8))))));
        var_20 = ((~((((-(arr_1 [i_9]))) | 0))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_21 = (((arr_23 [i_10 + 2]) - var_1));
        arr_28 [1] = (((arr_13 [i_10] [i_10] [i_10 + 2]) ? (arr_13 [9] [1] [i_10 + 2]) : (arr_13 [i_10 - 1] [6] [i_10 + 3])));
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    {
                        var_22 = ((var_2 ? (arr_27 [i_11 + 1]) : var_4));
                        var_23 = (~var_9);

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_24 ^= 18;
                            var_25 = (!var_9);
                            var_26 = (min(var_26, ((var_9 / (~var_4)))));
                        }
                        for (int i_15 = 1; i_15 < 12;i_15 += 1)
                        {
                            var_27 = (((arr_34 [9] [i_13] [9] [i_10]) - (arr_9 [i_10] [i_11 - 2] [i_12] [i_13] [9])));
                            var_28 = var_0;
                            arr_44 [i_15] [15] = (var_8 && var_6);
                        }
                        for (int i_16 = 2; i_16 < 15;i_16 += 1)
                        {
                            var_29 = (max(var_29, (4294967277 >= 65504)));
                            arr_47 [i_10] [i_10] &= arr_8 [i_10 + 2] [i_10 + 2];
                        }
                    }
                }
            }
        }
        var_30 = (((((arr_19 [i_10] [i_10 + 3] [i_10] [i_10 + 1] [i_10] [14]) >= (arr_1 [i_10 + 3])))) > var_9);
    }

    /* vectorizable */
    for (int i_17 = 2; i_17 < 12;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 12;i_19 += 1)
            {
                {
                    var_31 = var_8;
                    arr_58 [i_17 - 1] [i_19 + 3] = (arr_3 [i_17 + 1] [i_17 - 2]);
                    arr_59 [9] [i_17] = -var_1;
                }
            }
        }
        arr_60 [i_17] = ((~(arr_30 [i_17 - 2] [i_17] [4])));
    }
    for (int i_20 = 1; i_20 < 12;i_20 += 1)
    {
        var_32 = (min(5, 27316));
        var_33 = (((((((arr_54 [i_20] [0] [i_20]) || var_2)) ? ((2147483647 ? var_8 : 4294967277)) : ((var_3 ? 1 : 35))))) || ((max((max(18, (arr_37 [i_20] [i_20] [i_20] [i_20]))), (var_5 && var_5)))));
        arr_64 [i_20] = (((arr_42 [i_20 + 1] [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20]) ? var_0 : (arr_42 [1] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1] [i_20])));
    }
    /* LoopNest 2 */
    for (int i_21 = 3; i_21 < 22;i_21 += 1)
    {
        for (int i_22 = 1; i_22 < 23;i_22 += 1)
        {
            {
                arr_72 [i_22] = (min(((22 ? (-2147483647 - 1) : (20 & var_9))), (arr_71 [i_21] [i_21] [i_21])));
                arr_73 [i_21] [i_21] [i_21] = (((min((arr_71 [i_21] [i_21] [i_22]), var_3)) | ((((((var_5 ? var_4 : var_2))) ? (arr_65 [i_21] [i_21]) : ((1769483753 ? (arr_69 [1]) : var_8)))))));
                var_34 = (max(var_34, (((((max(0, -5))) ? (max((arr_70 [i_21 - 3] [i_21]), var_7)) : ((-(arr_69 [i_21]))))))));
            }
        }
    }
    #pragma endscop
}
