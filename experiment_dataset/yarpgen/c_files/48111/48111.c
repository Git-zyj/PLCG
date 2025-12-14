/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [1] [i_2] = var_4;
                            var_18 = (max(var_18, 0));
                            arr_12 [i_1] [10] [i_2] = (arr_6 [i_0] [i_1] [i_2] [17]);
                            arr_13 [i_2] = (arr_4 [i_3] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((max((~var_13), 242)))));
                            var_20 = ((!((((arr_18 [i_0] [i_5 - 1] [20] [7] [11] [i_5]) ? ((18446744073709551615 ? (arr_19 [0] [i_1] [i_1] [i_1] [3] [0]) : (arr_19 [i_0] [i_0 + 1] [i_0] [i_4] [i_5] [i_0]))) : var_7)))));
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = (~2050385696);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_7));
                            var_22 = (min(var_22, ((((arr_23 [i_7] [i_7 - 1] [1] [1]) + (arr_14 [i_1] [i_7 + 2] [i_7 + 1] [i_7 + 1]))))));
                            arr_26 [i_7] = ((((max((arr_15 [i_0 - 2] [i_1] [i_6] [i_7]), (arr_15 [9] [9] [i_6] [i_7 - 2])))) ? 4687074856057641846 : (((~(arr_2 [i_0 + 1] [i_0 + 1] [i_0]))))));
                            var_23 += ((16349373888920045914 <= ((max((arr_7 [i_0 + 1]), 166)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_42 [i_8] [i_11] [i_11 + 3] = ((~((((((arr_4 [9] [9]) >> (9253 - 9245)))) ? (arr_38 [i_8] [i_9 - 1] [i_10] [i_11] [i_11]) : (~1)))));
                                var_24 = ((-4687074856057641860 ? (((var_14 ^ var_15) & (~var_17))) : ((~(~3058585676517019995)))));
                                var_25 = (((arr_18 [8] [i_12] [8] [i_11] [i_12] [8]) ? (3058585676517019995 / 1) : var_14));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_26 = ((65535 ^ (((((((30 ? (arr_8 [i_8] [i_9] [i_13] [i_14]) : (arr_36 [4] [i_9] [i_10] [i_10] [i_10] [i_9])))) && (!-7289879963202369392)))))));
                                var_27 *= (max(-65535, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_28 = ((~((14 ? 20 : (arr_10 [i_9 + 2] [i_15] [i_16 + 1] [i_9 + 2])))));
                                var_29 = (max(var_29, ((((arr_53 [i_8]) ? ((~(arr_36 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [2] [i_10]))) : (min(((var_17 & (arr_52 [2] [6] [i_10] [i_16] [i_16] [i_15] [i_8]))), (~1))))))));
                                var_30 = (min(var_30, (var_17 > 61834)));
                                var_31 = ((+(((min((arr_41 [i_10] [i_16]), (arr_49 [7] [7] [7] [i_16]))) + var_17))));
                                arr_54 [i_8] [i_9 - 1] [i_10] [i_15] [i_16] = (((((arr_3 [i_15] [i_9 + 3] [i_8]) < (arr_3 [i_16] [i_9 + 2] [20])))) - ((((arr_3 [i_16 + 1] [i_9 - 2] [i_9]) < (arr_3 [i_15] [i_9 - 2] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = ((var_6 ? var_5 : (((var_13 ? 61826 : var_9)))));
    #pragma endscop
}
