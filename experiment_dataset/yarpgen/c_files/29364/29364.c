/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_2] [i_2] = ((~(-var_7 || -194)));
                    var_14 = -31425;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] &= var_9;
                    var_15 = (arr_1 [i_0 - 3] [i_0 - 2]);
                }

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_13 [i_4] [i_1] [i_1] = (~((-(arr_3 [i_1] [6]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 - 2] [i_1] [i_4] [9] [i_4] [i_6] = ((((-(arr_18 [i_0] [i_1] [i_4] [i_5] [i_5] [1])))));
                                var_16 = (min(var_16, var_8));
                                var_17 = (arr_7 [5] [1]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_18 = (max(var_18, var_6));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_19 -= (arr_4 [i_0] [i_0] [i_0] [i_0]);
                                var_20 = (((arr_4 [i_0] [i_1] [i_8] [i_9]) == (arr_9 [i_0 + 1] [i_0 + 2] [i_8 - 2] [i_8 - 1])));
                                var_21 = (max(var_21, (((-(arr_8 [i_0 - 3] [i_0 - 1] [i_8 + 1]))))));
                                var_22 = ((((0 == (arr_15 [i_1] [i_7] [10] [i_8]))) ? 2091595000 : (var_7 <= 10320)));
                            }
                        }
                    }
                    var_23 *= (-8793807372513158144 ? (((((arr_8 [i_0] [i_0] [i_7]) == (arr_29 [i_0 - 1] [i_0 - 1] [i_7]))))) : (~-9131134266456648091));
                    var_24 = var_6;
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_28 [i_1] [i_1] [i_10] [i_11] [8] [9] [i_12])));
                                var_26 = ((~(var_0 && var_5)));
                                var_27 -= ((31434 ? var_2 : (((((-(arr_5 [6] [i_1] [1] [i_1]))) == (31445 ^ 44460))))));
                                var_28 += var_1;
                            }
                        }
                    }
                    arr_38 [i_0] [i_1] [4] [4] |= 0;
                    var_29 = ((31436 / (((arr_29 [i_0] [2] [i_0 - 2]) ? (arr_32 [4] [i_0 - 1] [i_0 + 2]) : var_10))));
                }
            }
        }
    }
    #pragma endscop
}
