/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((max(16572641686343831276, -125)) ? var_6 : (max(-111, var_13))))))));

                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_17 = ((~(max(-127, 18446744073709551615))));
                        var_18 = ((((~(arr_10 [i_3] [i_3] [i_3 + 1] [i_0] [i_0] [i_0]))) >= ((var_10 + (arr_9 [i_3 + 2] [i_3] [i_3 - 3] [i_3])))));
                        arr_11 [19] &= 23;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_19 -= (-(max((!127), (arr_1 [i_1 + 2] [i_2 + 2]))));
                            var_20 = 1384875463524388718;
                            var_21 = max(((((-(arr_4 [i_1] [i_0]))))), (arr_5 [i_0] [i_2]));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [9] |= (((~19) - (var_12 > var_10)));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_22 = (0 ? 0 : (arr_14 [i_6] [i_1] [24] [i_5 - 2]));
                            var_23 += ((arr_16 [i_1 + 2] [i_5 + 1]) ? (~var_6) : var_8);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 ^= var_7;
                                var_25 = (!-var_11);
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_33 [i_0] [5] [12] = (~(((~var_14) & var_3)));
                                arr_34 [i_0] [i_1 + 1] = var_8;
                                var_26 = (min(var_26, (((!(arr_29 [i_1 - 1] [i_0] [i_9] [i_10]))))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_38 [i_12] [14] [i_1] [i_0] = (var_12 & -46);
                        var_27 += arr_8 [i_0];
                    }
                }
            }
        }
    }
    var_28 = (((((min(var_3, var_9))) ? ((var_3 ? var_14 : 96)) : 8791798054912)));
    /* LoopNest 3 */
    for (int i_13 = 4; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    arr_47 [i_13] [i_13] [i_13] [i_13] = (((!-4) && ((((arr_42 [i_13 - 3] [i_13 + 1] [i_13 - 2]) ? (arr_42 [i_13 - 2] [i_13 + 2] [i_13 + 1]) : var_15)))));
                    arr_48 [i_13] [i_13] [i_13] [i_13] = (((~(arr_19 [i_15] [i_13 + 2] [i_13] [i_13 - 3] [i_13]))));
                }
            }
        }
    }
    #pragma endscop
}
