/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((1 ? (((var_4 >> (var_5 - 7566280727608931964)))) : (((((var_9 ? var_7 : 94))) ? 30 : var_13)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 |= (arr_3 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 *= (-(((arr_8 [i_0] [i_0]) ? 1 : ((((arr_7 [i_0] [i_1] [i_3] [i_0]) >= 18783))))));
                                var_17 = 36119;
                            }
                        }
                    }
                    arr_13 [i_1] = 0;

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_18 = ((((((((-(arr_14 [i_0] [i_1] [i_2] [i_1])))) ? (((2 ? var_8 : var_11))) : (arr_12 [i_5] [i_0] [3] [i_0] [i_0] [i_0])))) ? (max((~4325271410699200771), -1)) : ((2250491099920385762 ? ((min(1, var_10))) : (arr_16 [i_0] [i_1] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_20 [7] [i_1] [i_1] [i_1] [3] = ((((((arr_4 [i_5 + 1] [i_1]) ? var_13 : (arr_4 [i_5 - 1] [i_1])))) ? 11465876971111746107 : -31080));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] [i_1] [i_6] = 1178619092;
                        }
                        var_19 = (min(var_19, ((((arr_5 [i_0] [i_0]) && (arr_8 [i_0] [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, 18446744073709551598));
                            var_21 = (((((min(127, 1)))) < 10889799115564905739));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [6] [i_2] [i_1] [i_0] = (min((arr_5 [i_1] [i_1]), (((69 >> (127 - 106))))));
                            arr_29 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = (((min((arr_8 [i_1] [i_0]), var_5)) | (((arr_8 [i_1] [i_1]) ^ (arr_8 [i_2] [i_1])))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] = -32745;
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_0] = (min((-9223372036854775807 - 1), (((-(arr_14 [i_9] [i_2] [i_1] [i_0]))))));
                        }
                        var_22 = (min(var_22, (((((1 ? 252 : ((min((arr_7 [i_0] [i_1] [5] [1]), 820549640))))) > (((((var_4 ? var_3 : 0))) ? (((min(32744, (arr_14 [i_0] [i_1] [i_2] [i_7]))))) : (var_10 & var_2))))))));
                        arr_32 [i_0] [i_0] [i_1] [i_1] [8] = (arr_17 [2] [i_0] [i_1] [i_1] [i_7]);
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_23 = (max(var_23, ((((((arr_12 [5] [i_1] [i_1] [i_1] [i_0] [i_2]) / (arr_22 [i_10] [i_1] [i_1] [i_1] [i_0]))) << (1178619079 - 1178619067))))));
                        arr_35 [i_2] [5] [i_1] [i_2] = var_5;
                    }
                    var_24 = 9223372036854775807;
                }
            }
        }
    }

    for (int i_11 = 4; i_11 < 18;i_11 += 1)
    {
        var_25 = (min(var_25, (((((94 ? 14 : (arr_36 [2]))))))));
        var_26 = (min(var_26, (((!((((arr_38 [i_11 - 2] [i_11 + 2]) << 1))))))));
    }
    var_27 = -var_1;
    #pragma endscop
}
