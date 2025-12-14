/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = var_4;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = ((748224971 ? (-2147483647 - 1) : -66));
                        var_14 = 294078910489185886;
                        var_15 = -18152665163220365729;
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = 244399028;
                    }
                }
            }

            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [8] = (2147483647 ^ 0);
                            var_16 *= (arr_6 [i_4 + 1]);
                        }
                    }
                }
                var_17 = 72;
            }

            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_18 = var_5;

                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_19 = ((130023424 ? 79 : -99));
                        var_20 = (min(var_20, (var_2 & var_5)));
                        arr_29 [17] [i_1] [i_7] [i_1] [i_1] [i_1] [5] = ((1 ? -83 : 11));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_21 = (~1);
                        var_22 |= ((~(arr_23 [i_0] [i_8])));
                    }
                    arr_34 [i_8] [i_7] [i_7] [i_0] |= 130023409;
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_7] |= ((((((arr_19 [6] [6] [i_1] [i_7] [i_7] [i_11] [5]) ? (arr_13 [i_11]) : var_6))) ? (arr_22 [i_0] [i_0] [i_7] [i_11]) : -39634));

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_23 = var_12;
                        var_24 *= ((!(arr_28 [i_11] [12] [12] [i_11])));
                        var_25 = (arr_22 [i_0] [i_0] [i_7] [i_11]);
                        var_26 = (((4164943872 ? -66 : var_12)));
                    }
                    var_27 = (min(var_27, 115));
                }
                var_28 = ((-99 ? 1165758809 : 1));
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_29 *= (arr_8 [i_0]);
                var_30 = ((3698564247 ? 11001 : 18152665163220365723));
                var_31 = (((arr_23 [1] [1]) ? -1367648712729480583 : (arr_27 [i_0] [i_1] [i_13])));
                var_32 = 130023424;
            }
        }
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_33 &= (!82);
                        var_34 = -14;
                    }
                }
            }
            var_35 = var_9;
        }
        var_36 = -0;
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 18;i_18 += 1)
        {
            {
                arr_58 [0] [i_18] = ((3598925041732028799 ? -76 : 9019));
                /* LoopNest 3 */
                for (int i_19 = 2; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 19;i_20 += 1)
                    {
                        for (int i_21 = 4; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_37 ^= 1;
                                var_38 = (min(var_38, (((54534 ? 1452206655 : 65535)))));
                                var_39 = (((arr_21 [i_17] [0] [i_17] [i_17]) != (-101 & -1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 = var_9;
    #pragma endscop
}
