/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 -= (max(116, 7433));
                            var_18 -= (((max((arr_6 [i_2 - 1] [10] [i_2 - 1]), 0)) * (((max(0, (arr_6 [i_2 + 1] [i_3] [12])))))));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] = (max(((max((32750 < 132), (arr_7 [i_4 + 1] [i_4 + 1])))), var_1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_5] [18] = (max((((var_1 ? ((((arr_7 [1] [i_5]) > var_8))) : (max((arr_14 [i_6] [i_1] [i_6] [i_5]), -116))))), 1));
                                var_19 = (max(var_19, (((((max(45028, 16))) ? (max((arr_11 [i_5] [2] [i_4] [i_4 + 1]), (-2147483647 - 1))) : 1)))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (arr_3 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] = (((var_10 ? (arr_0 [i_1] [i_1]) : -32747)));
                    var_21 = (min(var_21, (5668181793863317473 || 46576)));
                    arr_23 [i_0] [i_1] [i_0] = 863100430;
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_22 = ((1 >> (((max((arr_21 [i_0]), (((arr_10 [i_0] [i_0] [i_0] [i_0] [7]) ? 239 : var_14)))) - 236))));
                    var_23 = (min(var_23, var_0));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_30 [i_0] = (arr_3 [i_0] [i_1] [7]);
                        var_24 = ((max(1, (!18446744073709551615))) ? 2147475456 : (((-9223372036854775782 ? (-2147483647 - 1) : 1))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_10] [i_9] [i_9] = ((16 ? 4294967295 : 36));
                            var_25 = (max((((arr_25 [i_0] [i_1] [i_8]) ? (arr_25 [i_0] [i_1] [i_8]) : (arr_20 [i_0] [11] [i_8] [i_9]))), ((31 ? (arr_20 [i_10] [i_1] [i_8] [i_9]) : -1))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_26 *= (((arr_7 [i_1] [i_1]) ? (((arr_11 [i_11] [14] [i_8] [i_9]) ? ((1 ? 4035225266123964416 : 2147475447)) : (((var_7 ? (arr_2 [i_0]) : 1))))) : (((max(0, 1))))));
                            arr_39 [8] [i_9] [i_8] [i_1] [8] |= (-1518668659 != 15746900492030348284);
                            var_27 ^= 1;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            var_28 *= (((((1831651452 ? 7223 : 4035225266123964389))) ? 8176 : (((var_5 ? 36 : -116)))));
                            var_29 *= ((32765 ? 116 : 1));
                        }
                        arr_42 [i_0] [i_0] = var_11;
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_30 ^= (arr_5 [20]);
                        var_31 = (3686433896011020297 + 1);

                        for (int i_14 = 4; i_14 < 20;i_14 += 1)
                        {
                            var_32 = (min(var_32, (3072 && 1)));
                            var_33 ^= arr_25 [i_1] [i_1] [i_8];
                            var_34 = ((~(arr_46 [i_0] [i_0] [i_8] [i_14 - 3] [i_14 - 2])));
                            var_35 -= (arr_38 [i_14 + 1] [i_1] [i_1] [i_13] [i_8]);
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    var_36 *= 0;
                    arr_52 [i_0] [i_0] = arr_0 [i_15] [i_1];
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_58 [i_0] [i_1] [i_15] [i_1] [i_17] [i_1] [i_16] = (arr_34 [i_17] [i_17 - 1] [i_17] [i_17] [i_17 - 1] [14]);
                                arr_59 [1] [1] [i_1] [1] [i_16] [2] [i_17] |= (((arr_32 [6] [i_16] [6] [i_16] [i_17]) ? 220 : (arr_32 [16] [16] [i_15] [i_16] [i_17])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_65 [i_0] [i_18] [i_18] [i_18] = (arr_33 [i_0] [9] [i_18] [9] [i_18] [i_1]);
                            var_37 = 8598187043666771428;
                            var_38 = (max((arr_44 [3] [7] [3] [i_19] [15]), ((1 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_18] [i_1])))));
                        }
                    }
                }
                var_39 *= (17425396336430445742 + 17425396336430445729);
                arr_66 [i_0] [i_0] [i_0] = 116;
            }
        }
    }
    var_40 = (min(var_40, 8176));
    var_41 = var_3;
    var_42 = (min(var_42, ((max((-2147483647 - 1), 0)))));
    #pragma endscop
}
