/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (1 == var_3);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_16 -= (max(((((var_4 / var_1) * var_4))), (var_5 / var_13)));
                        var_17 = ((((var_5 - (~var_10))) / (var_3 / var_9)));
                        arr_13 [i_0] = (((var_10 || var_4) / var_3));
                        var_18 -= (((((var_12 >= var_11) ? var_13 : (var_5 * var_12))) | (((((var_5 * var_14) && (var_5 || var_1)))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_4 + 1] [i_1] [i_0] = max(var_9, (var_5 == var_7));
                        var_19 = (((var_5 / var_5) * var_2));
                        var_20 = (max(var_20, (max((var_4 & var_9), (var_14 - var_6)))));
                        var_21 = (max((max(218943339, 7323219198023070756)), ((((var_5 != var_8) > var_11)))));
                    }
                }
            }
        }
        var_22 = ((var_14 * var_11) ? (var_4 * var_2) : (var_5 * var_2));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_23 = (min((var_14 <= var_5), ((var_2 ? var_0 : var_11))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_24 = (max(((((var_8 / var_4) / (var_7 / var_7)))), ((4076023934 / (var_0 * var_1)))));
                    var_25 = (min(((var_12 < (~var_4))), (var_11 >= var_1)));
                }
            }
        }
        var_26 = (max(var_26, (((var_0 + (var_8 > var_13))))));
        var_27 *= (max(((min((((var_11 ? var_2 : var_2))), ((var_7 ? var_13 : var_1))))), (((var_6 >= var_8) ? (var_5 / var_1) : (var_2 != var_4)))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_32 [i_6] [5] [i_6] [i_6] = (((((var_14 != (var_10 && var_0)))) * (((!(11123524875686480860 * 4294967295))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 9;i_12 += 1)
                        {
                            {
                                var_28 = (-3266721675393697798 ^ 4076023919);
                                arr_37 [i_6] [i_6] [i_12 - 2] = (((((var_4 ^ ((max(var_12, var_7)))))) + (min(var_11, var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((-((var_9 / (var_1 * var_1)))));
    var_30 *= ((((min(var_13, (var_12 / var_4)))) / ((-(3266721675393697793 / 1150332759)))));
    var_31 = (min(var_31, var_0));
    #pragma endscop
}
