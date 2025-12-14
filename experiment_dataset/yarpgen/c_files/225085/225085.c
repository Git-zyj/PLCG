/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_12 &= (var_1 - var_2);
                        var_13 = (-6338 + 1838264017);
                        var_14 &= -1838264017;
                        arr_11 [4] [i_1] [7] [2] = (var_3 + var_7);
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (((var_6 / 13454948301588606707) - var_10));
                        var_16 = ((var_10 >> (var_10 == var_0)));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [i_1] [i_2 - 3] [i_5 - 1] [2] = (var_10 + var_10);
                                var_17 = (max(var_17, ((((var_7 / var_6) | 1838263992)))));
                            }
                        }
                    }
                    var_18 = (var_0 % var_5);
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_24 [i_0] [8] [10] &= (((var_6 + 2147483647) << (((var_3 + 17338) - 13))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_19 = var_11;
                                var_20 = var_6;
                            }
                        }
                    }
                    var_21 = (32767 - var_1);
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_22 = (var_5 * var_8);
                    var_23 = (var_9 | var_11);
                    var_24 = (var_4 >= var_4);
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_25 = var_8;
                                var_26 = (max(var_26, (min(var_3, (((min(-1253617528, var_6)) * 0))))));
                            }
                        }
                    }
                    var_27 = -1838264017;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 23;i_17 += 1)
                    {
                        {
                            var_28 = ((var_4 * ((2823168547 ? 2857311830 : var_1))));
                            var_29 = 49180238;
                            var_30 = (min((2549433577 + var_8), ((min(var_3, (var_7 + var_3))))));
                            var_31 ^= (((!-49180224) && var_7));
                        }
                    }
                }
                var_32 = ((((((var_0 / var_0) + -var_5))) / ((((min(var_4, -1253617528))) - (1810860235244989004 * var_4)))));

                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    arr_50 [1] [i_15] [i_18] [0] = (min(0, (!0)));
                    arr_51 [20] [i_15] [17] = (((var_8 + var_1) != (4294967295 | var_2)));
                }
            }
        }
    }
    #pragma endscop
}
