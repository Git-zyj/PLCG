/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_6 % ((((min(var_7, var_7)) && var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] = var_1;
                            var_15 = (max(var_15, var_1));
                            var_16 = 22;
                        }
                    }
                }
                var_17 *= (var_2 && 0);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_18 = -1404711755;
                            var_19 = (((((var_0 * (arr_2 [i_0])))) ? -93 : 3742423714));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_20 = var_9;
                            var_21 = var_6;
                            arr_28 [i_9] [i_9] [i_6] [i_9] = ((((min((((var_13 >= (arr_22 [i_6] [10])))), (arr_22 [i_6 - 3] [i_6])))) ? (((arr_21 [i_6] [i_6 - 3]) << (arr_21 [i_8] [i_6 - 2]))) : 0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_22 = (((((!var_1) ? var_13 : ((1 ? var_2 : (arr_34 [i_6 - 3] [i_7] [i_10] [i_6]))))) << (((arr_23 [i_10]) - 125))));
                            arr_35 [i_6] [i_7] [i_7] [i_7] = ((var_0 >> (var_5 - 5262013142023120643)));
                            arr_36 [i_6] [2] [2] [i_6] [i_6] = ((((var_6 * (min(var_0, (arr_34 [i_6] [i_10] [i_6 - 1] [i_6]))))) * (((((var_10 ? (arr_29 [i_11]) : (-9223372036854775807 - 1))) * 1)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            {
                                var_23 = min(((((arr_38 [i_6] [i_6] [i_12]) >= (((((arr_20 [i_6] [i_14 + 2]) || (arr_29 [i_7])))))))), (arr_38 [i_6] [i_6] [i_6]));
                                arr_44 [9] [i_6] = -103;
                                arr_45 [i_6] [i_6] = ((0 << (1056095814 - 1056095797)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_24 = 1722762113;
                            var_25 ^= (arr_37 [7] [i_15]);
                            arr_51 [i_6] [4] [i_7] [i_6] = 35417;
                        }
                    }
                }
                var_26 = (((max(16099317821420447535, (arr_38 [i_6 - 1] [i_7] [i_6]))) & (((arr_38 [i_6 - 1] [i_7] [i_6]) - (arr_39 [i_6 - 1] [9] [i_7] [i_6])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 2; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                {
                    arr_62 [i_18] [i_17] = (16384 * var_3);
                    arr_63 [i_17] [i_18] [i_17] = (arr_57 [i_17] [i_17] [i_19]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 16;i_23 += 1)
                    {
                        {
                            var_27 *= (var_8 >= var_6);
                            var_28 = ((!(arr_73 [i_23 + 1] [i_20] [i_21] [i_20] [i_20])));
                        }
                    }
                }
                var_29 = (max(var_29, 1472135253521083727));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        {
                            var_30 &= 12076508078303361808;
                            var_31 *= (arr_78 [i_25] [10]);
                            arr_80 [i_20] [i_20] = (max(((((arr_55 [i_24] [i_24]) * var_11))), 141));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
