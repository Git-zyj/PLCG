/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [4] [i_0] [i_2] = ((var_13 + 572631626) ? ((127 - (arr_5 [i_0] [i_0] [i_2] [7]))) : (var_6 + var_0));
                        arr_10 [8] [i_2] [i_2] [0] = (~-8434);
                        var_16 = 87473720;
                        var_17 = (min(var_17, (arr_2 [13])));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [i_2] [i_0] = (i_2 % 2 == 0) ? ((((arr_8 [i_2]) >> (1017983557 - 1017983546)))) : ((((((arr_8 [i_2]) + 2147483647)) >> (1017983557 - 1017983546))));
                            arr_15 [i_0] [i_2] [i_0] = (((((192 + (arr_13 [i_2] [i_2] [i_2] [i_2] [2])))) ? 12865 : var_7));
                            arr_16 [i_0] [1] [1] [2] [i_2] [1] = (arr_2 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (((~(arr_18 [i_1 + 1] [i_3] [i_5 + 1] [i_1 + 1] [i_5 + 1] [i_5]))))));
                            arr_21 [i_0] [i_1 - 1] [4] [i_2] [4] [4] = (((-127 - 1) | 1));
                            var_19 &= (-7685857325236145152 & -19);
                            var_20 &= ((-(arr_19 [1] [i_0] [7] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_2] = ((0 ? -4 : -572631626));
                            var_21 = (max(var_21, (((~(arr_22 [i_0]))))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_22 = ((((-572631626 ? (var_13 == var_13) : 32767)) & (((var_2 % -32767) ? (arr_12 [i_7 - 1] [i_2] [2] [i_1 + 1] [i_2] [i_0]) : (arr_27 [7] [i_1] [i_1 + 1] [i_1 + 1] [i_7 - 1] [7])))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] |= (max(((var_4 ? (arr_4 [i_0] [i_7 - 1]) : var_5)), (((3301104969 ? var_9 : 715067467)))));
                        var_23 = (((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (min(var_12, (arr_1 [8] [3]))) : var_13));
                        arr_31 [i_2] [i_1] [i_2] [i_2] = arr_24 [i_2] [i_1 + 1];
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_0] = ((max(var_10, (var_7 || -1))));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        var_24 *= var_15;
                        arr_35 [i_2] = ((((max((arr_13 [1] [i_2] [i_8 - 1] [i_2] [i_1]), (arr_23 [i_0] [i_2] [3])))) ? (~-2593746968391907749) : (((min((arr_12 [i_0] [i_1] [i_2] [1] [i_2] [i_2]), var_5)) % ((((arr_5 [i_0] [i_1] [i_2] [i_8 + 1]) % (arr_18 [i_0] [i_2] [i_0] [12] [i_0] [i_0]))))))));
                    }
                    for (int i_9 = 4; i_9 < 13;i_9 += 1)
                    {
                        var_25 = (max(var_25, -4422));
                        var_26 *= ((530596488 ? -1 : 18446744073709551609));
                        arr_40 [i_2] [i_2] [6] [i_2] = 32757;
                    }
                    var_27 = (min(var_27, (((((4294967295 ? 32316 : -12)) != ((((!832165893) ? -32767 : (arr_28 [i_0] [2] [i_0] [2])))))))));
                    arr_41 [i_2] = ((min(var_1, (arr_18 [i_0] [i_2] [12] [9] [i_1] [i_2]))));
                    arr_42 [i_0] [i_1 + 1] [i_2] [i_1] = (((arr_12 [2] [i_1 + 1] [i_1 + 1] [i_1] [i_2] [i_1]) ? (arr_28 [i_2] [i_2] [i_2] [5]) : (((arr_38 [7] [i_1 + 4] [i_1 + 2] [i_1 - 1]) + (arr_39 [i_0] [i_2] [i_0] [5])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        var_28 *= (((arr_43 [i_10 - 2] [i_10 - 2]) ? var_2 : (arr_44 [i_10])));
        arr_45 [i_10] = var_15;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_29 = (arr_18 [4] [2] [i_11] [i_11] [2] [i_11]);
        arr_49 [i_11] = ((((((!(arr_13 [i_11] [4] [4] [6] [i_11]))))) ^ var_10));
    }
    var_30 ^= var_3;
    #pragma endscop
}
