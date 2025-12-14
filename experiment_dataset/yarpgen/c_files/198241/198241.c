/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 3] = (((arr_5 [i_0] [i_1 + 2] [i_1 + 3]) ? (((arr_5 [i_1 + 2] [i_1 + 2] [0]) ? (arr_5 [i_1] [i_1 + 4] [i_1]) : (arr_5 [i_0] [i_1 + 4] [7]))) : var_5));
                var_18 = (-782278687 ^ 1);
                arr_7 [i_0] [i_0] = -3457888062603590387;

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_0] = 583239383643770549;
                        arr_15 [i_0] [0] [i_0] = (40 != 17863504690065781080);
                        arr_16 [i_3] [i_3] [i_0] [i_3] = ((-3457888062603590396 ? ((((arr_11 [i_0] [5] [9] [i_0]) <= var_11))) : (arr_0 [i_1 - 1])));
                        var_19 = (arr_9 [i_0] [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_20 = (max(var_20, 13911858355681163694));
                        var_21 = (arr_3 [i_0] [i_0]);
                        var_22 = (var_0 ^ (((((583239383643770526 ? 17863504690065781088 : (arr_2 [i_1]))) >= (arr_5 [i_0] [i_2 - 4] [i_4])))));
                        var_23 = ((201 != -32) < ((((var_13 % 583239383643770549) <= var_4))));
                        var_24 = ((~(((arr_9 [i_0] [i_0] [i_0]) ? ((var_15 ? var_16 : var_10)) : ((var_0 ? var_16 : 40))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_25 -= (23335 * -9);
                                var_26 = (min(var_7, (arr_18 [i_0] [5] [5] [i_5 - 1])));
                                var_27 = 32;
                                var_28 = (arr_8 [i_1] [5] [i_6]);
                                var_29 = var_4;
                            }
                        }
                    }
                    arr_25 [8] [i_1] [8] &= (arr_8 [i_0] [i_1] [i_1]);
                    arr_26 [i_0] [i_0] [i_2] = arr_2 [i_2 + 1];
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_30 = 583239383643770543;
                    var_31 = (((arr_12 [i_0] [i_0] [i_1] [i_7]) != (arr_24 [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_7])));
                    var_32 = (arr_27 [i_1 + 2] [i_1 + 4] [i_1 + 1]);
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    arr_33 [i_0] = (!109);
                    var_33 = (var_12 + 9059902858201914662);
                    var_34 = (max(var_34, 8029508212756401673));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_35 = (min(var_35, 3868775282));
                                var_36 = (min(var_36, (arr_31 [i_0] [8] [10] [10])));
                                var_37 = (((!var_7) ? 16433755720082899513 : (((((arr_28 [i_0] [i_1] [i_0] [i_1]) && var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
