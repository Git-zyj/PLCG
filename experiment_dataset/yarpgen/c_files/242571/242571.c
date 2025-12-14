/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((min(var_1, 44221)))) ? ((~(~4))) : (((max((7124245598328694499 >= var_2), (var_2 > var_10))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = var_1;
            arr_6 [i_1] = (((arr_3 [i_0] [i_0] [i_0]) >= var_12));

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_14 *= var_2;
                var_15 = (((arr_8 [i_1] [i_2 + 1]) ? var_5 : ((-12934 ? var_10 : var_9))));

                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    arr_13 [i_3] [i_3] [i_1] [i_3 - 3] = (!var_9);
                    arr_14 [i_0] [i_1] [i_3 - 3] = ((-(~var_4)));
                    arr_15 [i_0] [i_1] = (-(arr_8 [i_1] [i_2 + 3]));
                }
            }
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_1] = ((var_6 % (arr_0 [i_4 - 4])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, (arr_10 [i_0])));
                            arr_23 [i_1] [i_1] [i_4] [i_1] [i_6] = -12921;
                        }
                    }
                }
                var_17 *= (var_10 == var_8);
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_28 [i_0] = (((!var_0) ? ((12943 ? var_2 : var_8)) : (!var_11)));

            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                var_18 = ((((-608209847 + 2147483647) >> 4)));
                var_19 += ((var_2 | (arr_22 [i_0] [i_0] [i_8 - 3] [i_8 + 4] [i_8] [i_8])));
            }
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                var_20 += 1;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        {
                            var_21 = (((arr_12 [i_9] [i_11 + 1] [i_0] [i_9]) ? -12934 : var_4));
                            var_22 *= ((((((arr_20 [i_0] [i_7] [i_9] [i_10] [i_0]) ? (arr_37 [i_11 + 1] [i_10] [i_9 + 1] [i_7]) : var_6))) ? (111 != -12934) : var_7));
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 8;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_23 *= (~var_11);
                    var_24 = (max(var_24, 1686910849535888146));
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_25 = ((~(arr_17 [i_13] [i_15] [i_13])));
                                arr_53 [i_12] [i_13 - 1] [i_14] [i_16] [i_16 - 3] [i_16 + 2] = ((var_4 ? ((max(var_0, (10 != 5326421499567501589)))) : (arr_38 [i_15] [i_15] [i_16 - 1] [i_16 - 1] [i_16 + 2])));
                                var_26 *= 1;
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, (((-(min(-18446744073709551610, (var_9 - var_9))))))));
        var_28 *= ((max((arr_12 [2] [i_12 - 1] [i_12 + 1] [2]), (((arr_46 [i_12] [i_12 + 3] [i_12] [i_12]) ? 1 : 0)))));
    }
    #pragma endscop
}
