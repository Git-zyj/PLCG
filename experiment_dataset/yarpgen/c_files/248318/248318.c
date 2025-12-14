/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_1] = (((arr_1 [i_0 + 1]) ? (arr_2 [i_1]) : ((var_14 - (arr_2 [i_0 + 2])))));
            var_21 ^= (((max(var_18, (arr_3 [i_0 + 1])))) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (((((((((arr_1 [1]) * 0))) ? var_11 : (arr_9 [i_3] [5] [i_2] [i_0])))) > (max(((2991436389919502988 | (arr_4 [i_0 - 2] [i_2 + 1] [2]))), (arr_0 [i_0 - 2])))));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_23 = (max(var_23, ((((((var_4 * 3) * (((min(var_1, var_0)))))) > (min((~var_15), ((var_18 ? var_18 : var_5)))))))));
                        var_24 = (((((arr_6 [i_2 + 1] [i_2] [i_3]) | (arr_10 [i_2 - 1] [3] [i_3] [i_0 + 1]))) / ((min((arr_6 [i_2 + 1] [i_2] [i_3]), 175)))));
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_25 *= (((((1 ^ ((-1910329791 ? (arr_12 [7] [i_5 - 2] [i_2 + 1] [i_2 + 1] [7]) : var_3))))) ? 992 : -var_5));
                        var_26 |= ((~(arr_11 [i_2 - 1] [3] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])));
                    }
                    arr_17 [i_3] [i_2 - 1] [i_0] = (min((((var_13 + var_4) ? (arr_12 [i_0] [i_2] [i_0 - 2] [i_2 + 1] [i_2 + 1]) : var_19)), ((max((arr_1 [i_0]), (!1))))));
                    var_27 = (min(var_27, ((max((min(((var_3 ? 0 : var_13)), ((min((arr_10 [i_0] [i_2] [i_3] [i_3]), (arr_12 [i_3] [4] [i_3] [i_3] [i_0])))))), ((min((max((arr_12 [i_3] [i_3] [i_0] [3] [i_0]), (arr_10 [7] [7] [i_3] [i_2 + 1]))), (((var_7 ? (arr_10 [i_0] [i_2] [i_3] [i_3]) : var_1)))))))))));
                    var_28 = ((((min(var_14, 21191))) / (max(var_11, var_7))));
                }
            }
        }
        var_29 -= (((55930 - var_17) ? ((var_0 ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 2]) : ((177 ? 16581224731237767196 : 1145570532)))) : (((((var_15 ? var_14 : 23073)) & (arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 2] [3]))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_30 = (arr_19 [17] [i_6]);
        var_31 = (arr_19 [i_6] [i_6]);
        var_32 = max((arr_18 [i_6]), 4744007451738021717);
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        var_33 -= (((((min(var_8, var_14))) ? (((arr_20 [i_7 - 1]) ^ (arr_21 [i_7 + 3] [8]))) : (((631101750 ? 8982 : 44345))))));
        arr_22 [i_7] [i_7] = (min((arr_20 [i_7 + 3]), (arr_20 [i_7 + 1])));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                arr_30 [i_9] [i_9] = var_3;

                /* vectorizable */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    var_34 |= (((~var_17) ? -21191 : var_18));
                    var_35 *= ((arr_23 [i_8 - 1]) ? var_17 : var_18);
                }
                var_36 = (((arr_26 [i_9] [i_8 - 1] [i_9]) ? ((min((arr_21 [i_8 - 1] [2]), (min(var_5, var_0))))) : (((((var_9 ? var_11 : (arr_29 [i_9] [i_9]))) != (((var_9 || (arr_29 [i_8] [i_9])))))))));
                var_37 = var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            arr_47 [i_11] [i_11] [i_11] [i_12] = (((((arr_31 [i_13 + 2] [i_12 - 1] [i_11]) % var_17)) > (((((((arr_32 [i_11] [13]) ? (arr_18 [i_11]) : var_2))) ? (arr_35 [i_11]) : var_7)))));
                            var_38 = (min((arr_44 [i_14] [1] [15] [i_11]), 252));
                        }
                    }
                }
                var_39 = (var_13 ^ (min(var_7, 18446744073709551615)));
                var_40 = ((!((((((23073 ? var_17 : var_15))) ? (((18457 >> (var_7 - 3236291426)))) : (max(var_2, 3)))))));
                var_41 = (((((var_7 + (arr_45 [2] [i_12] [i_12] [i_11] [i_12])))) - 8729049148610371834));
            }
        }
    }
    var_42 = var_6;
    #pragma endscop
}
