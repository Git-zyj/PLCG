/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = 1;
        var_16 = (((~(arr_1 [i_0]))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_17 = (((arr_3 [i_1 - 1] [i_1 + 1]) ? ((((max(65535, 6)) + (((arr_3 [i_0] [4]) - (arr_3 [2] [i_1])))))) : ((552245184 ? 0 : 65535))));
            var_18 ^= var_6;
            arr_4 [i_0] [i_0] [i_1 + 1] = var_9;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_19 = (max(var_19, (((65535 ? 1 : 996945699)))));

            for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
            {
                var_20 = (arr_2 [i_0]);
                var_21 = (arr_1 [i_3 + 1]);
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
            {
                var_22 = (min(var_22, (arr_2 [i_2])));
                arr_15 [i_0] [i_0] = (arr_5 [i_0] [i_2] [i_4 + 4]);
                var_23 = (arr_5 [i_4] [i_4 + 2] [i_4 + 1]);
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_24 = var_12;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] = (arr_17 [4] [i_6 - 1]);
                            var_25 = var_13;
                        }
                    }
                }
                var_26 = (((552245174 ? var_9 : var_6)));
                var_27 ^= ((!(arr_5 [i_5] [4] [i_0])));
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_28 = (max(var_28, ((((arr_18 [i_0] [i_0] [i_0] [6] [7] [i_0]) || 6)))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_8] [i_9 - 1] [5] &= ((-(arr_23 [i_2] [i_2 - 1] [i_8 + 2] [i_9 + 1] [i_2])));
                            var_29 -= (arr_25 [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8 + 3]);
                            var_30 &= (arr_20 [i_0] [i_2] [i_8] [i_2] [i_2]);
                            var_31 = (arr_21 [i_0] [i_2] [i_2] [3] [i_10] [i_10]);
                        }
                    }
                }
                var_32 = (((((arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_8 - 1] [i_8]) + 2147483647)) >> (var_2 - 7042999870532875972)));
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_33 = ((var_7 <= (arr_7 [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_34 = (((arr_33 [i_12] [4] [i_0]) * ((var_3 ? var_12 : (arr_26 [i_0] [i_11] [i_13])))));
                            arr_42 [i_0] [i_0] [i_11] [i_0] = (arr_13 [i_0]);
                            var_35 = (((arr_39 [9] [0] [i_2 + 1]) ? (arr_39 [i_0] [i_2 - 1] [i_2 - 1]) : (arr_39 [i_12] [8] [i_2 - 1])));
                        }
                    }
                }

                for (int i_14 = 3; i_14 < 11;i_14 += 1)
                {
                    var_36 = (max(var_36, (arr_1 [i_11])));
                    arr_46 [i_0] [i_2] [i_11] [i_14] &= (((arr_11 [i_0] [12] [12] [i_11]) ? (arr_11 [i_0] [i_14] [i_14 - 1] [i_14]) : (arr_11 [i_0] [i_11] [i_14] [i_14])));
                }
                for (int i_15 = 2; i_15 < 12;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        arr_51 [i_16 + 1] [i_15] [i_11] [i_15] [i_0] = (0 + 0);
                        var_37 = (((arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1]) + (arr_3 [i_2 - 1] [i_15 - 1])));
                    }
                    arr_52 [i_11] [i_2] [i_2] [i_11] [i_2] &= ((var_4 ? ((2147483647 ? (arr_7 [i_11]) : var_8)) : var_2));
                    arr_53 [i_0] [i_11] [i_15] [i_11] = (arr_20 [i_0] [i_0] [i_11] [i_15 - 2] [4]);
                    var_38 = ((((2080374784 ? (arr_2 [i_0]) : (arr_21 [i_0] [i_0] [i_11] [7] [i_15] [i_15 - 1]))) << (((((((arr_37 [1] [i_2] [i_11] [5] [1]) | var_13)) + 6371138583161475097)) - 23))));
                }
                for (int i_17 = 2; i_17 < 12;i_17 += 1) /* same iter space */
                {
                    arr_57 [11] [i_0] = 0;
                    var_39 = (max(var_39, ((((((1 ? 18 : 2))) ? -5191052383053598888 : 0)))));
                }
                arr_58 [i_2] [i_2] [12] = (((arr_14 [11] [i_2] [i_2 - 1]) + (arr_33 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
            }
            for (int i_18 = 3; i_18 < 11;i_18 += 1)
            {
                var_40 = (min(var_40, ((((arr_54 [i_0] [i_18 - 3]) != var_0)))));
                var_41 = ((~(arr_10 [i_18] [i_18 + 2] [i_18 + 2])));
            }
            var_42 = (min(var_42, ((((arr_3 [i_2 + 1] [i_2 + 1]) != (arr_3 [i_2 + 1] [i_2 + 1]))))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    {
                        var_43 = (((arr_1 [i_2 - 1]) - (arr_1 [i_2 - 1])));
                        var_44 = (min(var_44, var_8));
                        arr_67 [i_0] [i_19] = var_14;
                        arr_68 [i_0] = (((arr_62 [2] [2] [9] [i_2 - 1]) ? (arr_5 [i_2] [3] [1]) : (arr_59 [i_0] [1] [i_19])));
                    }
                }
            }
        }
    }
    for (int i_21 = 1; i_21 < 15;i_21 += 1)
    {
        var_45 ^= (((((((arr_69 [i_21]) ? -1 : (arr_70 [i_21] [i_21]))))) ? (((0 >= ((((arr_71 [i_21]) ? var_8 : var_5)))))) : (((var_1 && (((-(arr_69 [i_21 - 1])))))))));
        var_46 = (max(var_46, (arr_71 [i_21])));
        arr_72 [i_21] = ((1 * (((arr_71 [i_21 + 2]) ? var_6 : (arr_71 [i_21 + 1])))));
    }
    var_47 = var_0;
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 23;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            {
                var_48 = ((((((arr_73 [i_22]) ? var_11 : ((var_11 | (arr_75 [i_23])))))) ? ((var_3 / ((max(-1741353216, (arr_77 [i_22] [i_22] [i_22])))))) : (0 == 0)));
                var_49 = (min((arr_75 [i_23]), (max(var_0, (arr_74 [i_22] [i_22])))));
                arr_80 [i_22] [i_22] = (arr_78 [i_22] [i_23] [i_23]);
            }
        }
    }
    #pragma endscop
}
