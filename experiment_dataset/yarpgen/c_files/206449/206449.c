/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_11 = (min(44536, 1707209670));
                        arr_9 [i_0] [i_2] [i_1] [i_1] [i_0] = ((21009 * (var_1 / -var_4)));
                        var_12 = (arr_0 [i_0] [i_1 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, 0));

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_14 = (min(var_14, ((((arr_3 [i_4] [i_5 - 1]) ^ 63143)))));
                            var_15 = ((var_6 ? (arr_5 [i_1 - 3] [i_1 - 1] [i_5 - 2] [i_0]) : var_4));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((~((((var_7 ? var_6 : var_1)))))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_17 -= (arr_18 [i_0] [i_1 - 4] [4] [i_6] [i_6] [i_6]);
                            var_18 |= ((!(arr_16 [i_1] [i_6] [i_2] [i_1])));
                            var_19 = (max(var_19, ((((arr_15 [i_0] [i_1] [i_2] [i_6]) ? var_2 : (arr_12 [i_0] [i_1] [i_0] [i_6] [i_6]))))));
                        }
                        var_20 = ((-(~20444)));
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((((var_5 ? var_2 : (arr_10 [i_1 - 2] [3] [i_1 - 2] [i_0]))) == (-1707209640 == var_5)));
                    var_21 = (min(((var_2 ? (arr_15 [i_1] [i_1 - 3] [i_1] [i_1 - 4]) : (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))), (var_7 | 21360)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_22 = (max(var_22, ((((max((arr_6 [i_10] [i_10]), (16777215 == 0))) ? (min(1707209670, 65535)) : (((arr_22 [i_10]) * var_8)))))));
                    var_23 = min(((3 ? var_6 : var_9)), ((((arr_15 [i_10] [i_8 + 2] [i_10] [i_10]) ? (arr_19 [i_8] [i_8] [i_8 + 2] [i_8] [i_8]) : (arr_15 [i_8] [i_8 - 1] [i_8] [i_10])))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_24 = (((arr_27 [i_8 + 2] [i_8 - 2] [i_8 - 3] [i_8 + 2]) * (var_1 / -1282575812)));
                        var_25 |= (var_3 ? (arr_8 [i_8 - 1]) : 51952);
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_26 = (max(7, 2147483647));
                        arr_33 [i_12] [i_8] [i_8] [i_8] = ((((min((arr_1 [i_8 - 3]), var_4))) ? 4393608075330100123 : ((var_1 ? var_4 : (arr_12 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8])))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_27 = (min(var_27, (((var_3 >> (((arr_1 [i_13]) + 1168952912)))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_28 -= var_8;
                    var_29 = var_6;
                }
            }
        }
        var_30 = (max(var_30, (((-4739225781130518821 ? 4739225781130518820 : var_7)))));
    }
    var_31 = (((((max(239, -27092)))) ? var_3 : -var_8));
    #pragma endscop
}
