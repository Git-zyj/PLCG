/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_13 = (max(var_13, (((+(((arr_1 [i_0] [i_0]) ? 1 : var_5)))))));
        arr_3 [i_0] = (0 > 4605977501988502473);
        var_14 = var_3;
        var_15 = (arr_1 [i_0] [i_0]);
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_9;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [7] [i_1] [i_3] = (((((((((((arr_10 [i_1]) <= 3074)))) <= (max(9, 16696592941161890030)))))) > -70093866270720));
                    var_16 = (max(var_16, ((min((((max(9, var_8)) * -1)), ((((((var_5 ? 4 : (arr_4 [i_3])))) ? (max(var_4, (arr_9 [i_1] [i_2] [1]))) : 126))))))));
                }
            }
        }
        var_17 = (arr_10 [i_1]);
        var_18 = (min(var_18, (((arr_13 [i_1] [7]) < ((((((((arr_9 [i_1] [i_1] [i_1]) > var_11)))) <= (arr_5 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_19 = ((-(arr_15 [i_4 - 4] [i_4 - 1])));
        var_20 = ((-10 <= (arr_15 [i_4] [i_4 - 2])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_21 = (min(var_21, (((var_2 ? (arr_20 [i_6] [i_5] [i_4 - 3]) : (arr_22 [i_6] [i_6] [10] [i_4 + 1]))))));
                    var_22 = (arr_20 [i_4] [i_4] [i_4 - 4]);
                    arr_23 [i_6] [6] [i_4] [i_4] = ((((var_4 ? (arr_22 [i_4] [i_4] [i_4] [12]) : 18446744073709551615)) & (~var_2)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_23 = (((arr_22 [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 2]) <= (arr_22 [i_4 - 3] [i_4 - 4] [i_4 - 1] [i_4 + 1])));
                    arr_29 [i_4] [i_7] [i_8] = (((arr_28 [8] [i_4 - 1] [8] [i_8]) > 4668));
                    arr_30 [i_4] [i_8] [i_8] [i_4 - 1] = (((arr_20 [i_4] [i_8] [i_4 + 1]) ? (arr_20 [i_4 - 2] [i_7] [i_4 - 1]) : (arr_20 [20] [20] [i_4 + 1])));
                    var_24 = (min(var_24, (((~((((arr_17 [i_7] [i_8]) < 35918))))))));
                    var_25 = (29618 > 2147483647);
                }
            }
        }
        arr_31 [i_4 - 3] [i_4 - 3] = (arr_16 [i_4]);
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_26 = (var_0 ? (((-1474306555 ? (((arr_22 [i_9] [i_9] [i_9] [i_9]) ? (arr_10 [i_9]) : 16660)) : (((((-32767 - 1) + 2147483647)) >> (((arr_17 [i_9] [19]) + 9248))))))) : 4);
        var_27 = (min(var_27, (((((min(var_7, (arr_22 [i_9] [i_9] [i_9] [i_9])))) ? (((-13068 ? 0 : 30))) : (((arr_22 [i_9] [10] [10] [i_9]) ? var_10 : 3313395461424756978)))))));
        var_28 = (min(var_28, ((min(19137, var_11)))));
        arr_34 [i_9] = max(((((arr_4 [2]) ? ((260046848 << (12820735453421738579 - 12820735453421738568))) : 4294967267))), (arr_6 [i_9] [i_9]));
        var_29 = (max(4, (9022 <= 15217)));
    }
    #pragma endscop
}
