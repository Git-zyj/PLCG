/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max(var_10, 18446744073709551615));
                var_11 = (min(var_11, (arr_4 [i_0])));
            }
        }
    }
    var_12 = (var_0 * (min(-var_2, -18446744073709551615)));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            {
                var_14 = (min((!var_0), ((var_0 * ((1483780845 ? (arr_10 [i_2 + 1] [i_2 + 1]) : 100136691))))));
                arr_11 [i_2] [i_2] [i_2] &= (((!var_2) ? (((arr_7 [i_2] [i_3 - 2]) ? (arr_7 [i_2 - 3] [i_2 + 1]) : (arr_6 [i_2 - 3] [i_2 - 3]))) : (arr_6 [i_2 - 2] [i_3 + 1])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_2 - 3] [i_4] [i_2 - 3] [i_5] [i_5] = ((!(((((32764 ? var_9 : 383096338)) & var_9)))));
                                var_15 ^= ((max((max((arr_9 [i_3]), var_3)), (383096335 == 3472269948455216626))) << (min((((var_7 == (arr_6 [i_5] [i_6])))), (var_8 | 0))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, 18446744073709551615));

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_17 = (max((((15966473853244121441 ? (arr_21 [7] [i_3]) : var_6))), (min(var_2, (arr_6 [i_3] [i_2])))));
                        var_18 = (max(var_18, ((((min(var_9, 234))) ? 1 : ((var_0 | (!var_5)))))));
                        var_19 = (max(var_19, (((!(((var_2 ? (arr_24 [i_2] [1] [i_3] [i_8]) : (arr_24 [i_2] [i_3 - 4] [i_3] [i_8 + 1])))))))));
                        var_20 = ((((max(var_2, var_0))) ? (max(var_1, var_1)) : ((((arr_25 [i_2 - 3] [i_3 - 4] [i_8]) ? (arr_25 [i_2] [i_3] [i_8]) : (arr_25 [i_8] [i_3] [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_30 [i_9] [i_2] [i_9] [i_3] [i_2] = (((min((~var_3), (((arr_20 [i_9] [5]) ? (arr_10 [i_3] [i_3]) : (arr_5 [i_9]))))) << (2641287486 - 2641287443)));
                        arr_31 [11] [i_9] [i_2] = var_3;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_21 = (((min(var_7, (max((arr_23 [i_3 - 1] [i_3 - 1]), 21)))) | ((((max((arr_34 [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1] [i_7] [i_10]), -3472269948455216627)) / (var_1 + -4316051418709588073))))));
                        var_22 = var_0;
                        var_23 += 5732942121618519084;
                        arr_36 [1] = ((~(min(var_4, -8))));
                        var_24 = (((!var_6) != 21));
                    }
                    var_25 = (max(var_25, ((max((max(var_7, ((min(var_4, 13))))), (((!(arr_20 [i_2 + 1] [i_3])))))))));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_26 = ((((((!var_5) ? (((arr_15 [i_2] [i_2] [19] [i_7] [i_11] [1]) ? 21 : var_9)) : var_5))) ? ((min((arr_20 [i_2 - 3] [i_2 - 2]), ((((arr_26 [i_2] [i_3 - 4] [14]) && var_1)))))) : (max((~0), (var_5 >= var_5)))));
                        var_27 = (min(var_27, ((((arr_22 [i_3 - 2]) > ((((arr_14 [i_2 + 1] [i_2 - 2] [i_3 - 1]) != -2147483644))))))));
                        var_28 = (+(((~18446744073709551615) ? (arr_34 [6] [i_2 - 2] [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 1]) : -var_3)));
                    }
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_29 += (max((min(-126, (arr_14 [i_12] [i_3] [16]))), (min((((arr_9 [i_2]) ? (arr_32 [i_2]) : 8)), ((var_0 + (arr_24 [i_2] [1] [i_3] [i_12])))))));
                    var_30 = var_2;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            {
                                var_31 = (min(((((((-34 != (arr_12 [i_2] [i_13] [18])))) | var_9))), ((5732942121618519086 ? (arr_42 [i_13] [i_13] [i_13] [i_14 + 1]) : (~var_7)))));
                                arr_48 [13] [i_3] [i_12] [i_13] [i_13] [i_2] = var_4;
                            }
                        }
                    }
                }
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    var_32 = (((arr_6 [i_15] [i_2]) & (((arr_38 [i_3] [i_3 - 2] [i_3 - 4] [i_3 - 1] [i_3] [i_3 - 4]) | (arr_38 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 2])))));
                    arr_52 [9] [i_2] |= ((!((max((arr_15 [i_3] [14] [i_15 + 1] [i_15] [i_15 + 4] [i_15]), var_3)))));
                }
            }
        }
    }
    var_33 ^= (((var_3 >= var_7) <= ((var_7 ? (var_3 | 2231655881) : ((var_8 ? -3472269948455216627 : -5))))));
    #pragma endscop
}
