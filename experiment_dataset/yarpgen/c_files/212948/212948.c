/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] [6] = (((arr_2 [i_3 + 1]) ? (((arr_2 [i_0 + 2]) ^ 6)) : (((-23 + 2147483647) >> (-10 + 23)))));
                            arr_12 [6] [6] [i_3] [6] [i_1] [i_1] = (~-104);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 = var_8;
                                arr_22 [i_4] [i_1] [i_4] = ((((var_3 || var_5) ? (arr_1 [i_1] [i_1 - 1]) : (arr_8 [11] [i_0] [i_4] [i_0 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_7 - 2] [i_8] [i_8] [i_7] [i_11] = (arr_29 [i_7 + 2] [i_7 + 2] [i_7] [i_7 - 2]);
                                var_18 -= ((+((((arr_32 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 2]) || (arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 3] [i_7 - 3]))))));
                                var_19 = ((((((var_1 <= (arr_31 [i_7] [i_8] [i_7] [i_7]))))) | 18446744073709551602));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_20 = -6;
                                arr_46 [i_7] = -25092;
                                arr_47 [i_7] [i_8] [i_7] [16] [i_13] = (((arr_25 [i_13] [i_8]) + 1));
                                var_21 = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_22 = (arr_44 [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_14]);
                                arr_52 [i_7] [0] [i_7] [i_7] [i_7] = ((((((arr_33 [i_7 + 1] [i_7] [11] [i_7] [i_7 + 2] [i_15 - 2]) ? (min(517279585, (arr_41 [i_7] [i_7] [i_7] [i_7 + 2] [i_7 - 3] [i_7 - 1]))) : (min(28623, (arr_37 [i_7])))))) ? (((((min(var_11, (arr_51 [i_7 + 2])))) ? ((min(-1, 0))) : (arr_42 [i_15 + 2] [i_7] [14] [i_7] [i_7] [i_7])))) : var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_23 = ((((max(var_15, 2080374784))) ? ((-4389133827457587552 ? 1 : -6)) : ((~((min((arr_43 [i_7] [i_7]), 1)))))));
                                var_24 = (min(var_24, (~-16088)));
                                arr_57 [i_7] [i_16 + 1] [i_16] [i_9] [i_9] [i_8] [i_7] = ((129 ? (3 && 37164) : ((max(var_1, var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 23;i_21 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((min((((67108608 == ((-1 ? 37163 : 8083124044958890493))))), (min((var_10 <= var_7), -24595)))))));
                            var_26 *= ((((((max(12170563163121809738, (arr_59 [i_19]))) >= var_2)))) >= var_4);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 22;i_23 += 1)
                    {
                        for (int i_24 = 4; i_24 < 24;i_24 += 1)
                        {
                            {
                                var_27 = ((~(arr_76 [i_23] [i_23] [i_23] [i_23] [i_23 + 3] [i_23] [i_23])));
                                var_28 -= (((((!(1 > var_6)))) < ((((-5 ^ (arr_65 [i_22])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
