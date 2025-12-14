/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_1] = arr_6 [i_0] [i_0 + 1] [i_1 - 2];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (((((arr_5 [i_0 - 1]) ? var_4 : (arr_5 [i_0 + 1]))) > (var_3 | -1)));
                            var_14 ^= ((5 ? ((min(var_3, ((-3 ? var_1 : var_11))))) : 4294967277));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_15 = (min(var_15, var_10));
                                var_16 *= ((arr_5 [i_0 + 1]) ? 7166219446782618641 : 3840);
                                var_17 = (i_1 % 2 == zero) ? (((-1 < (((var_3 + 2147483647) << (((((arr_10 [i_1] [i_2]) + 3204100669653822293)) - 26))))))) : (((-1 < (((var_3 + 2147483647) << (((((((arr_10 [i_1] [i_2]) - 3204100669653822293)) - 26)) - 3641126054312649564)))))));
                                var_18 = (max(var_18, (((var_11 ? ((127 | (arr_10 [i_2] [i_2]))) : (arr_2 [i_4]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0 + 1] = (((arr_6 [i_3] [i_0 - 1] [i_0 - 1]) - var_7));
                            }
                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 9;i_5 += 1)
                            {
                                arr_19 [i_1] = (((arr_9 [i_1] [i_1 + 2] [i_1 + 2]) || var_11));
                                arr_20 [i_0] [1] [i_1] [i_2] [i_3] [i_5 - 4] = var_5;
                            }

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                arr_23 [i_3] [i_3] [i_1] = ((var_6 + (((arr_1 [i_0 - 1]) ? var_5 : (arr_1 [i_0 - 1])))));
                                arr_24 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] = (((((((var_2 ? (arr_15 [0] [i_1] [i_2] [i_1] [i_0]) : var_9)) ^ (arr_0 [i_1])))) < (arr_9 [i_0 + 1] [4] [i_1 + 3])));
                                arr_25 [i_0] [i_1] [i_1] [i_6] = ((((arr_6 [i_0] [i_2] [i_0]) ? var_5 : var_9)));
                                var_19 ^= (arr_13 [i_3] [i_0] [1] [i_0]);
                                var_20 *= (max((((var_4 ? var_3 : (arr_8 [i_0] [i_0])))), ((((!var_0) >= var_4)))));
                            }
                            arr_26 [4] [i_1] [i_1] [i_1 + 3] = ((((((var_9 ? (arr_0 [i_1]) : var_8))) ? (!4294967272) : (arr_15 [i_0] [i_1] [i_1] [i_1] [i_0]))));
                        }
                    }
                }
                var_21 = (arr_0 [i_1 + 2]);
                var_22 &= (min(-var_11, ((max((arr_17 [0]), (arr_17 [4]))))));
                arr_27 [i_1] [i_1] = var_3;
            }
        }
    }
    var_23 = 11369565708343817908;
    #pragma endscop
}
