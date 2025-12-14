/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((~(var_5 | var_4))) - (((((~(arr_2 [1] [1] [1])))) - (((arr_2 [i_1 - 2] [i_1 - 1] [7]) | var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [4] [i_1 + 1] [i_3] [i_3] [i_4] = (676833215880637965 >= -676833215880637965);
                                arr_13 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_3] = (((arr_2 [18] [i_3] [i_0]) << var_13));
                                var_18 = ((!(((1023 >> (((arr_4 [i_0]) + 199475776)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 20;i_5 += 1)
                            {
                                var_19 = (!((((var_7 + 2147483647) << (var_4 - 3509552035964511842)))));
                                var_20 += (4747 | var_15);
                                var_21 -= var_5;
                                arr_17 [i_2] [6] [i_1 - 2] [i_2] [i_3] [i_5] [i_5] &= (((30 ^ 51) & (var_3 & 18446744073709551592)));
                            }
                            var_22 *= (!42067693);
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 4; i_6 < 20;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_6 - 4] [i_7] [i_7] = (8191 && -676833215880637987);
                                var_23 = (~-4767);
                                var_24 = (min(var_24, ((((arr_21 [i_0] [i_1] [i_1] [4] [17]) || ((204 || (arr_2 [i_0] [i_1] [8]))))))));
                            }
                        }
                    }

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_25 += (((var_1 >= 0) - ((((arr_24 [11] [i_1] [i_1] [i_0] [i_0]) >= 205)))));
                        arr_30 [i_9] [i_9] = (255 >> (!var_2));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_33 [i_6] [i_6] [i_6] [i_10] [i_6] [i_0] = (((~(arr_25 [i_1 - 3]))));
                        var_26 |= (((!156) + (-102 >= 65535)));
                        var_27 = ((((var_4 / (arr_31 [i_0] [i_1] [i_6] [i_10]))) * (var_8 / 4724)));
                        arr_34 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] = ((((arr_6 [i_0] [i_0] [i_0] [i_0]) / (arr_4 [i_0]))));
                        var_28 = var_14;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 *= (65511 * -20106);
                        var_30 = ((~(arr_36 [i_11] [i_11])));
                        var_31 |= (4592 && 4592);
                        var_32 &= (((((arr_25 [i_0]) >> (var_15 - 107))) * (((arr_18 [i_0] [i_1] [i_6 - 3]) * (arr_14 [i_0] [i_1 - 2] [i_6 - 3] [i_11])))));
                        var_33 = (101 - 204);
                    }
                }
                arr_39 [i_0] [i_1] = ((((var_6 + (var_2 + var_10))) - (156 + 58)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_34 = (min(var_34, ((((var_1 << (((var_13 | 32767) - 32757)))) == ((((~(arr_49 [i_13])))))))));
                    arr_51 [i_12] [i_13] [i_13] [12] = (!12332);
                    var_35 &= (((-103 | -676833215880637970) && ((((!var_1) * -0)))));
                }
            }
        }
    }
    #pragma endscop
}
