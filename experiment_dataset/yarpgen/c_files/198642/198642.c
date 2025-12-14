/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((18446744073709551600 && (((-1875677599 ? 1 : (-2147483647 - 1)))))) ? ((((var_1 ? var_13 : var_10)) * -1517799676)) : (!var_12))))));
                    var_17 = ((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 3]) ? (~var_4) : (((-2147483647 - 1) ? (arr_2 [i_0] [i_0] [i_1]) : 1)))));
                    var_18 = ((~(41057 + -2571006819084944523)));
                    var_19 = (min(var_19, ((((max((!var_5), (max((arr_6 [i_0] [i_0]), var_5)))) >> (((((arr_6 [i_0] [i_1 - 1]) + var_15)) + 6121800471288861862)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                var_20 = (12822882559877164819 < -830883272944034746);
                var_21 = ((+(((arr_10 [i_3 - 3]) ^ (arr_10 [i_3 - 2])))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_13 [i_4] [i_4] = -1708561856;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 *= (var_14 && -5045);
                                arr_20 [i_3 - 2] [i_3 - 2] [i_4] = (~var_13);
                                arr_21 [i_3] [i_4] [i_5] [i_6 + 1] [i_7] [1] = (138 && 1);
                                arr_22 [i_3 + 2] [i_3 + 1] [2] [i_5] [i_5] [i_6] [i_7] &= ((-((818457499 << (2147483647 - 2147483631)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_23 = (arr_8 [i_9]);
                                var_24 = (~14);
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_25 = var_7;
                    arr_30 [0] [i_4] [i_4 + 1] [0] |= var_15;
                    arr_31 [i_4] = ((-(arr_16 [i_10] [i_4 - 2] [i_4 - 1] [i_3] [i_3 - 1])));
                    var_26 |= 14;
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_27 = ((-(min(10085967236787939928, 1))));
                            var_28 ^= (max((((arr_17 [i_3] [i_4 - 3] [i_11 - 1] [i_3 - 1] [i_12]) + (arr_23 [i_12] [i_11 + 1] [i_4 - 2] [i_3 - 2] [i_3 - 2]))), (((((arr_7 [i_4] [i_11 - 1]) ? (arr_27 [i_3] [i_3]) : (arr_33 [i_4] [i_4] [i_3 + 1]))) * 22))));
                            var_29 = (max(var_29, ((((-2147483647 - 1) / -830883272944034738)))));
                            var_30 = ((((max(0, 16959425136242158870)) + 8541998289970877149)));
                        }
                    }
                }
                arr_36 [i_4] [i_4 + 2] = ((!(!var_15)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                var_31 = var_0;
                arr_42 [i_13] = (max(10495084063088504415, (-92 < 38919)));
            }
        }
    }
    var_32 = (((((~(~var_4)))) ? ((-9199 ? var_10 : ((var_11 ? var_1 : var_3)))) : (var_12 && var_14)));
    #pragma endscop
}
