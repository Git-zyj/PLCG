/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((26978 ? -32756 : 65535)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (-var_1 ? ((((!(arr_8 [i_4] [i_1] [0] [i_1] [i_4] [i_1]))))) : (min(16843047923702745641, (arr_8 [i_3] [i_1] [i_2] [2] [i_2] [i_4]))));
                                arr_12 [i_0] [i_1] = (((-32767 - 1) ? 0 : ((var_9 ? 654431091 : 73))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 |= (((((arr_17 [i_5] [3] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5]) ? (arr_17 [i_5] [i_5] [7] [i_5] [i_5 + 1] [i_7]) : 49046)) <= ((((min(19024, var_0))) ? (0 | var_12) : (var_10 % 51194)))));
                                var_19 = ((var_12 << (((!((max((arr_2 [i_7]), 12027031887962427322))))))));
                            }
                        }
                    }
                    arr_21 [i_1] = (((0 != 32759) ? (var_8 != var_0) : 12880));
                    var_20 = (min(var_20, (((~(arr_15 [14]))))));
                }
                for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    var_21 = (((((var_14 & (!var_12)))) ? (((((var_5 ? var_12 : 4294967295))) ? (1 >= 0) : var_1)) : (!var_11)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_1] [i_9] [i_10] = ((var_2 != (arr_19 [i_1] [1] [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_9])));
                                var_22 = ((((120 ? 9223372036854775807 : 1)) ^ (((((((arr_24 [i_1] [i_1] [i_9] [i_10]) / (arr_4 [i_10] [i_1] [i_0]))) > var_0))))));
                            }
                        }
                    }
                    var_23 += ((-821809492 == 9548450) ? (!-7) : ((((arr_15 [10]) && (arr_15 [2])))));
                    var_24 = ((((min(((((arr_13 [i_0] [i_0] [10] [i_1]) ? (arr_28 [i_0] [i_1] [18] [i_1] [i_1]) : 2037214130))), (arr_16 [i_1] [i_1])))) | ((1 ? (-127 - 1) : 12881818054949623602))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_25 += arr_28 [i_0] [14] [i_8] [i_11] [i_12];
                                var_26 = (min(var_26, (((!((((arr_20 [i_8 + 1] [i_8] [i_8]) ^ (arr_6 [i_12] [i_8] [i_8 + 1])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_27 ^= (max(var_3, ((((arr_10 [i_13] [i_0] [i_1] [i_1] [i_13] [i_13] [18]) | (arr_10 [i_13] [12] [4] [i_1] [18] [6] [i_13]))))));
                            var_28 = (((((((arr_8 [i_0] [i_1] [i_13] [i_14] [i_1] [i_1]) ? 785218365 : 65524)) <= (arr_36 [i_0] [i_1] [i_13] [i_14] [i_14]))) ? (arr_40 [1] [i_1]) : (((((arr_10 [i_1] [i_1] [i_13] [0] [i_1] [i_14] [i_14]) != var_12))))));
                            var_29 = (min(var_29, var_15));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 14;i_16 += 1)
        {
            {
                arr_48 [i_16] = (((((-32767 - 1) ? -29431 : 1)) != 0));
                var_30 = (min(var_30, ((!(((var_4 ? var_4 : (67301917025894328 + var_13))))))));
            }
        }
    }
    var_31 = -32766;
    var_32 ^= -2147483639;
    #pragma endscop
}
