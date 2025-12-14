/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~144114638320041984);
    var_14 = 17887817538405932232;
    var_15 = (max((~var_12), 18446744073709551604));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(18302629435389509624, var_8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (min(144114638320041984, (((arr_10 [i_4] [i_4] [i_2] [i_4 - 1] [i_4 - 1]) ? 11 : (~21707)))));
                                var_18 &= ((((((arr_12 [i_0] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4] [12]) % (arr_12 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4])))) ? 1 : (((((18446744073709551610 ? 18446744073709551612 : 1))) ? (arr_5 [i_2 - 1]) : -58127))));
                                var_19 ^= 21;
                                var_20 = (18446744073709551614 ? 0 : 1);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = var_9;
                        var_22 += (((((-1301873018 ? var_3 : var_0))) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_2] [i_5]))) : var_4));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_19 [i_6 + 1] [i_2] [i_2] [7] = ((-(((var_5 * 35843) ? ((-9156293146825190642 / (arr_2 [i_0] [i_1]))) : var_7))));
                        var_23 ^= (max(18681, 18446744073709551615));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_24 = (((arr_3 [i_2 - 1]) & (arr_6 [i_0] [2] [i_7])));
                        var_25 = (~(arr_8 [i_2] [i_1] [i_2 - 2] [i_7]));
                        var_26 = (var_3 + 4732);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    var_27 = -3847591698108041435;
                    var_28 -= ((arr_10 [i_8] [i_10 + 1] [i_9] [i_9] [i_10 + 1]) * (var_3 & var_6));
                    var_29 ^= (arr_10 [8] [0] [i_9] [2] [i_10 + 1]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_30 = ((var_6 <= ((18302629435389509632 ? 32736 : 0))));
                                var_31 ^= (((~(arr_5 [i_10 + 1]))));
                                var_32 = (max(var_32, (!var_0)));
                                var_33 = (!18446744073709551604);
                            }
                        }
                    }
                }
            }
        }
        var_34 ^= (--15877905263648702006);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_35 = (~35843);
            var_36 += ((var_2 ? (arr_28 [i_13] [i_14] [i_14]) : (arr_28 [i_13] [i_14] [i_13])));

            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_37 = (min(var_37, (~var_1)));
                var_38 = (arr_7 [i_13]);
            }
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_39 = ((0 ? var_5 : (1 - 55185)));
            var_40 = (!var_2);
            var_41 = (((arr_31 [i_13] [i_13] [i_13] [i_13] [i_16]) ? (arr_31 [i_13] [i_13] [i_13] [i_13] [i_16]) : (arr_31 [i_13] [i_13] [i_13] [i_16] [i_16])));
            arr_51 [i_16] = 1;
            var_42 ^= ((1 ? var_9 : ((12048 ? 2147483629 : var_0))));
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_43 = (min(var_43, (1251079819 - 4667644622958914602)));
            var_44 = ((1 ? (var_12 >= 11025) : (arr_20 [i_17] [i_17] [8] [i_13] [i_13])));
            var_45 &= var_1;
            var_46 &= (~5353840217597764913);
            arr_54 [7] [i_17] [i_17] = (~var_11);
        }
        var_47 += -144114638320041991;
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        var_48 = 28;
        arr_57 [i_18] [i_18] = -9;
        var_49 = ((~(((-1301873018 ? 1 : var_4)))));
        var_50 ^= 144114638320041991;
    }
    #pragma endscop
}
