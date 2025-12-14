/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (((-2147483646 < (!-64))));
                                arr_15 [i_0] [i_1] [i_2] = var_14;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_16 += 36028797018963967;
                            arr_22 [i_6 + 1] [i_5] [i_1] [i_0] = var_3;
                            arr_23 [i_0] [i_0] [i_1] [i_0] [i_5] [9] = (min((min(-3922187290512700755, (arr_12 [i_0 + 3] [i_0 - 4] [i_1] [6] [i_6 + 2]))), (((220 < (arr_19 [i_6 - 1] [i_6 + 2] [8] [i_6 + 2] [i_6] [i_6 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_17 = (max(((max(48, 1))), (min((arr_32 [20] [i_8]), var_14))));
                                arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((-18 < (((arr_25 [i_7 + 1]) ? (arr_25 [i_7 + 2]) : -1573895094999634153))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_18 -= ((((-((var_13 ? 18446744073709551585 : var_11)))) ^ ((((var_9 ? 957317935 : var_1))))));
                                arr_47 [i_7] [1] [i_13] [i_13] [i_13] [i_13] [i_14] = var_13;
                                var_19 = (min(var_19, ((max(((-((12 ? 1830017556 : 921172115)))), var_4)))));
                                var_20 = (min(var_20, (((((((arr_38 [i_7 - 1]) % (arr_38 [i_7 + 1])))) ? (min(1083095933974859823, 152)) : ((((((957317935 >> (4194303 - 4194279)))) ? (arr_45 [i_7 + 2] [i_8] [i_8] [i_12] [i_13] [i_14] [i_14]) : var_0))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                var_21 = (((((max(1588822981, 196)) >> (((arr_34 [i_7]) * (arr_32 [i_7] [i_17]))))) < (((max((arr_33 [i_8 + 1] [i_8] [i_7 + 1] [i_16] [i_8 + 1]), (arr_36 [i_8 + 2] [12] [i_15])))))));
                                var_22 = ((((arr_46 [1] [i_8 + 1] [i_8 + 1] [i_16] [i_17] [1]) < 177)));
                                arr_56 [i_15] [i_15] [9] [1] [i_15] = ((min(var_3, ((var_4 ? var_12 : (arr_39 [i_16] [i_7 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
