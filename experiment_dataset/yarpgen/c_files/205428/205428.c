/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_16;
    var_18 = (((var_1 + var_5) & var_2));
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (((((arr_3 [i_0]) & (arr_3 [i_1]))) << (0 < var_3)));
                    var_20 = ((1 ? ((((max(var_2, var_11))) ? var_1 : (var_0 <= var_13))) : (var_9 > 43)));
                }
            }
        }
        arr_11 [i_0] = (arr_8 [1]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    var_21 += ((+(min((var_15 ^ 255), ((max(23402, var_3)))))));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 *= (min((~0), var_5));
                        arr_18 [i_5] = ((!(((1 >> (242 - 231))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_4] [i_3] = var_15;
                        arr_23 [i_4] [i_4] = ((var_13 ? (-32767 - 1) : (arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1])));

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_3] [i_4] [i_6] [i_7 - 2] = ((((-8587044721356911332 ? 242 : -32760)) + (((4095 > (arr_19 [i_0] [i_0] [i_0] [7] [i_7]))))));
                            var_23 = var_5;
                            var_24 = (max(var_24, ((((-(arr_12 [i_0])))))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] = ((var_12 + 2147483647) << (((arr_25 [i_3] [i_3] [i_3 - 1] [i_0] [2] [i_3] [i_4 + 4]) - 17993)));
                            arr_31 [i_8] [i_6] [i_3 + 1] [i_3 + 1] [2] = ((-var_12 >> (((arr_8 [i_3 + 1]) - 95))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((((arr_6 [i_3 + 1] [i_4 - 1] [i_4 + 3]) + 0)))));
                            arr_34 [7] [i_3 + 1] [i_4 + 1] [3] [i_9] [i_9] [0] = var_0;
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_37 [3] [i_4] [i_3] = ((~(~-11)));
                        arr_38 [i_0] [i_3 - 1] [i_4] [i_4] [i_10] = ((min(((var_14 >> (33 - 10))), var_11)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 8;i_12 += 1)
                        {
                            {
                                arr_45 [i_0] [i_0] [10] [i_4] [5] = ((~(((!((((arr_42 [i_0] [i_0] [i_4] [i_11] [i_12 + 3] [7]) ? 438447844 : 1))))))));
                                arr_46 [0] [i_12] [0] [i_11] [9] |= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {
                    var_26 = (max(var_26, (((~(!32442))))));
                    var_27 *= var_16;
                }
            }
        }
        arr_55 [i_13] = (max((min((max(2807570582, 438447844)), 0)), var_4));
    }
    #pragma endscop
}
