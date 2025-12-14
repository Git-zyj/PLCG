/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_15 = ((~((min(var_9, (arr_2 [i_2 + 1] [i_1 - 1] [i_1 + 2]))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((-1031140311 ^ ((min((55702 & var_9), (~var_11)))))))));
                        var_17 = ((~(((min(-1657849340, var_10)) % var_9))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_18 = ((((arr_10 [i_4 + 1] [i_4 - 1] [i_2 + 1] [i_0] [i_1 - 1] [i_0]) / (arr_10 [i_4 + 1] [i_4 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1]))));
                            var_19 = (min(var_19, ((min((min(-24027, (max((arr_11 [i_0]), (arr_4 [i_0] [i_1] [i_2]))))), (((6541690303151268682 ? var_8 : (((!(arr_0 [i_2] [i_2]))))))))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_20 = 24034;
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_5] &= (arr_7 [i_0]);
                            var_21 += (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_22 = ((9833 ? (max((arr_4 [i_1 + 1] [i_1] [i_2]), (arr_4 [i_1 + 1] [i_1] [i_2]))) : (((139 * (arr_0 [i_1 - 1] [i_1]))))));
                        arr_17 [i_1] = min((((arr_4 [i_1 + 1] [i_1 + 1] [i_2 + 1]) / 192)), 1);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_23 = (min(var_23, ((((arr_2 [i_1 - 1] [i_1] [i_1 + 2]) >= (arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]))))));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_24 = 8783834708299676607;
                            var_25 *= -var_0;
                            arr_23 [i_8] [i_1] [i_8] [i_7] [i_1] |= 1186695331;
                            arr_24 [i_1] [i_8] [i_7] [i_2] [i_1] [i_1] = var_11;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_26 = (!55702);
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_6 [i_7] [i_0] [i_0]);
                            var_27 = (min(var_27, (((!(arr_13 [i_1 + 1] [i_1 - 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_28 = ((~(arr_25 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_1])));
                            arr_30 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (9833 ? (arr_22 [i_1 + 1] [i_1 - 1]) : (arr_22 [i_1 + 2] [i_1 - 1]));
                            var_29 = (1186695331 ? -7 : 1);
                            var_30 |= (arr_13 [i_1 - 1] [i_2]);
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_31 ^= (((arr_9 [i_1 - 1] [i_7] [i_1 - 1] [i_1 + 1]) || (arr_12 [i_0] [i_0] [i_2] [i_7] [i_7] [i_1])));
                            var_32 = (((arr_31 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) << (arr_31 [i_0] [i_1 + 2] [i_2 + 1] [i_2 - 1] [i_11 + 1])));
                        }
                        var_33 = (~53392);
                        arr_33 [i_2] [i_1] [i_2] [i_1] = (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                    }
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    var_34 *= ((arr_9 [i_1] [i_0] [i_0] [i_1]) - -4114);
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_35 = ((!(arr_8 [i_13 - 3] [i_13 - 3] [i_13 + 2] [i_13] [i_13 + 2] [i_13])));
                                var_36 *= 67108848;
                            }
                        }
                    }
                }
                arr_40 [i_1] [i_0] [i_1] = (((4064 ? 18446744073709551607 : 4283762362)));
                arr_41 [i_1] = (max(-5918, (~2)));
            }
        }
    }
    #pragma endscop
}
