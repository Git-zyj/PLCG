/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (1 - 18446744073709551615);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_12 = (max((max(1073741823, ((~(arr_6 [i_0] [i_1] [i_2] [i_3]))))), (~var_0)));
                                var_13 ^= (arr_6 [i_1] [12] [i_1] [i_1 + 4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_5] [i_6] [13] = 1;
                                var_14 -= max(((var_10 | (arr_2 [18]))), ((((arr_12 [i_0 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 4] [i_2 + 4] [i_2 - 1]) && (arr_7 [i_0 + 1] [i_1 + 4] [i_1 + 1] [0])))));
                                arr_17 [i_1] [1] [i_1] [i_1] [1] = var_5;
                                var_15 = ((var_5 * (0 * -var_10)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_21 [i_0] [i_2] [i_1] = (var_2 ? 1 : var_2);

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [i_0] [18] [i_2] [i_1] [18] = (0 ^ var_3);
                            var_16 += (((arr_24 [i_0] [i_7] [i_0 + 1] [i_0]) > var_2));
                            arr_27 [i_1] [i_7] [i_2] [i_2] [2] [i_1] = (var_9 + -11);
                            var_17 = ((1 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_1 - 1]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [18] [i_1 + 4])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_18 |= (((arr_3 [12] [i_7]) - (arr_6 [i_0 - 1] [i_7] [i_2 + 3] [i_7])));
                            var_19 = (((arr_29 [i_1] [i_0] [i_0]) ? ((var_10 ? (arr_5 [1] [i_7] [i_9]) : var_2)) : ((((arr_11 [i_2] [i_1] [i_1]) << (var_1 - 233))))));
                            arr_31 [i_1] = (!var_7);
                            arr_32 [i_1] [i_1] [i_2] [i_7] [i_9] = (11 || var_4);
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_20 = (((arr_3 [i_0 - 1] [i_1]) ? 1 : var_9));
                            var_21 = (!(var_0 | var_4));
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_22 = (max(var_22, ((((-26 ? 1 : 1))))));
                        var_23 += (!((((!var_8) ? ((1 ? 0 : (arr_11 [16] [i_1 + 3] [2]))) : (arr_4 [i_2 - 1] [1] [1] [i_0 - 2])))));
                        arr_38 [i_1] [i_1] = (min((max((max((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_0]), 0)), (65535 + 1))), (max(var_8, (min(17047014012303727342, var_2))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
