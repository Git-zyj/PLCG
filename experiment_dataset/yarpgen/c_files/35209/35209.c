/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] = var_12;
                            arr_15 [i_0 + 1] [i_1] = 0;
                            var_13 += ((max((arr_0 [i_2] [i_2]), (arr_6 [i_0] [i_0]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 24;i_6 += 1)
                            {
                                var_14 = (max(var_14, (arr_21 [i_4] [i_4] [i_1] [i_5])));
                                arr_26 [22] [i_1] [i_4] [i_5] [18] [i_1] [i_1 - 1] = (((arr_6 [i_1] [i_1]) ^ (arr_10 [i_6 - 1] [i_6])));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 23;i_7 += 1)
                            {
                                var_15 = (max(var_15, (((var_0 ? ((var_0 ? -5841919808448002336 : 18446744073709551615)) : 18446744073709551615)))));
                                arr_31 [i_0] [i_1] [i_0] [22] [i_7] |= ((arr_19 [i_0] [1] [i_4 + 1] [i_5]) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_5] [i_7]));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_16 = (min(var_16, (arr_20 [i_0] [i_1 - 1] [i_5])));
                                var_17 = ((arr_29 [i_1] [i_4 + 1] [16] [i_0 - 2] [i_1] [i_1]) <= ((1 ? var_3 : var_10)));
                                arr_34 [i_1] = ((~(((var_8 && (arr_11 [i_5] [i_4] [24] [i_0]))))));
                            }
                            var_18 = (max(-var_10, var_10));
                            var_19 = ((((((arr_24 [i_0] [i_1 - 1] [i_1] [5] [i_1] [i_1 - 1]) >> (arr_24 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [i_1 - 1] [i_5])))) ? (((((arr_25 [i_5] [i_4] [i_1] [i_0] [i_0]) | 18446744073709551594)))) : ((-(!var_11)))));
                            var_20 = (min(var_20, (((((~(((arr_30 [i_0] [8] [i_4] [i_0] [i_5]) | (arr_18 [i_0] [1] [i_1] [i_4] [i_5]))))) | (((((((arr_4 [i_5]) | var_2))) ? var_11 : ((var_1 ? var_11 : (arr_22 [4] [4] [4] [1] [9])))))))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
