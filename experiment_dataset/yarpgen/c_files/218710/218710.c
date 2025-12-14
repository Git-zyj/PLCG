/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = ((min((((!(arr_12 [i_1] [i_1])))), var_3)));
                                var_14 = ((((((~var_7) | (arr_6 [i_0] [i_0] [9])))) ? (~var_5) : (((((arr_4 [i_0 + 1] [i_0 + 1] [i_4 - 1]) == (arr_4 [i_0 - 1] [i_0 - 1] [i_4 + 1])))))));
                                arr_13 [i_0] = arr_4 [i_1] [i_2] [i_3];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 -= (min(((max(1335601697, 1335601697))), (min((min(var_10, var_11)), (2959365599 & -113)))));
                                var_16 = (i_0 % 2 == 0) ? (((((((arr_9 [i_0] [i_1] [i_0] [i_6 - 1]) <= (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) << ((((-(arr_11 [i_0] [4] [i_2] [i_0] [i_0]))) + 1534200992))))) : (((((((arr_9 [i_0] [i_1] [i_0] [i_6 - 1]) <= (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) << ((((((-(arr_11 [i_0] [4] [i_2] [i_0] [i_0]))) + 1534200992)) - 951692078)))));
                                var_17 = (max(var_17, (arr_19 [i_0] [i_0] [i_1] [i_5])));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_2] = (((-(arr_17 [i_0] [i_0] [1] [i_2]))));
                    arr_21 [4] [i_1] [i_0] = min(var_7, -1525624385);
                }
            }
        }
        var_18 = (max(var_18, (((-(((692 || (~0)))))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] = (arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_7] [i_7] [9]);
            arr_26 [i_0] [i_7] [i_7] |= (((((arr_9 [i_7] [i_0 + 1] [i_0] [i_7]) + 2147483647)) >> 1));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_32 [9] [i_7] [i_7] [i_7] [9] [i_0] = (!var_3);
                        arr_33 [i_0] [i_8] [i_0] = ((var_11 ? (arr_4 [i_9 + 1] [i_8 - 3] [i_0 - 1]) : (arr_4 [i_9 - 2] [i_8 + 2] [i_0 + 1])));
                        var_19 = (((((!(arr_14 [9] [i_7] [9] [i_7])))) % (arr_1 [i_7] [i_9])));
                        arr_34 [i_0] [i_0] [i_8 - 2] [i_0] = (arr_29 [i_0]);
                    }
                }
            }
            arr_35 [i_0] [i_0] [i_7] = (arr_9 [i_0] [i_7] [i_7] [i_0]);
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    {
                        arr_46 [i_0] [i_10] [i_11] = (i_0 % 2 == 0) ? (((-(((var_0 + 2147483647) << (((arr_19 [i_0 - 1] [i_10] [i_0] [i_12 - 2]) - 348202790))))))) : (((-(((var_0 + 2147483647) << (((((((arr_19 [i_0 - 1] [i_10] [i_0] [i_12 - 2]) + 348202790)) + 1452305186)) - 3)))))));
                        arr_47 [i_0] [i_0] [i_10] [i_11] [i_0] [i_12 - 1] = (7680 ^ 1);
                    }
                }
            }
            var_20 -= (min(((~(arr_29 [i_10]))), (((-7703 <= (arr_29 [i_10]))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_50 [i_0] [i_0] = (1 - 0);
            arr_51 [i_0] [i_0] [i_0] = (~1);
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            var_21 = ((~(((max((arr_30 [i_0] [i_14]), var_3)) * (((((arr_10 [i_0]) <= var_6))))))));
                            var_22 = 1500158817;
                            var_23 = (max(var_23, (((-(((7669 < (arr_14 [i_0 - 1] [i_14 - 2] [i_0 - 1] [i_0 - 1])))))))));
                        }
                        var_24 = ((-(min(1335601697, (2959365599 & 6337294096248923243)))));
                    }
                }
            }
        }
    }
    for (int i_18 = 3; i_18 < 13;i_18 += 1)
    {
        var_25 &= (min((((!(arr_61 [10] [i_18 - 1])))), (1 ^ 0)));
        arr_62 [i_18] [i_18] = 127;
        arr_63 [i_18] = (arr_61 [i_18] [i_18]);
        var_26 = 1;
        arr_64 [i_18] = 1;
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
    {
        arr_67 [i_19] = 1;
        var_27 |= (min(((~(arr_61 [4] [i_19]))), var_0));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
    {
        arr_72 [i_20] [i_20] = 1;
        var_28 |= (arr_60 [i_20] [i_20]);
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                {
                    var_29 &= (((arr_68 [i_22 - 2] [4]) ? var_1 : (arr_74 [i_21] [i_21])));
                    arr_77 [i_20] [i_21] [i_22] [i_21] |= (((arr_75 [i_22 - 1] [i_21] [i_22 - 1]) ? var_11 : ((var_7 ? -32372 : 32380))));
                }
            }
        }
    }
    #pragma endscop
}
