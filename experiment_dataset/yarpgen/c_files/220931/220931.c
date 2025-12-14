/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [20] [i_0] = -var_8;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = ((!(((54828 + 127) >= 109))));
                            arr_14 [i_0] [i_3] [i_3] [i_2 + 2] [i_3] = var_9;

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_17 = ((!(((((max((arr_12 [1] [1] [i_2 + 2] [i_3 - 1] [0]), var_7))) >> (((arr_16 [21] [i_2 + 1] [21] [i_0]) + 7216)))))));
                                arr_17 [i_0] [5] [i_0] [i_3] [i_0] = (((~(var_11 / var_8))));
                                var_18 = (((((((var_10 ? var_11 : var_4))) / (min(var_9, var_6)))) <= (max(((~(arr_5 [i_1] [i_2] [i_4 + 1]))), (var_6 | var_10)))));
                                var_19 = (((((((((arr_9 [i_3 - 1] [10] [2] [i_0]) == (arr_6 [i_0] [i_0] [20]))) && var_7)))) % (arr_13 [i_0] [i_1 - 2] [19] [10])));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_22 [16] [i_3] [i_1 - 3] [i_3] [9] = ((((arr_9 [7] [i_2] [i_2] [i_2]) ? ((-(arr_5 [i_2] [i_1 + 1] [i_2]))) : (!-126))) == ((((-1 + 2147483647) >> ((((var_7 ? (arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_5]) : (arr_1 [i_3]))) + 3426952034604448419))))));
                                var_20 |= (((var_5 + 126) > ((5 << (!var_0)))));
                                arr_23 [i_0] [i_3] [i_2 + 2] [i_3] [i_5] = (((~var_1) == (((((((var_10 ? (arr_1 [i_5]) : var_6))) && ((((((arr_13 [i_0] [i_0] [i_1 - 1] [i_0]) + 9223372036854775807)) >> (((arr_9 [i_0] [i_0] [i_0] [1]) + 3426952034604448436)))))))))));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                arr_28 [i_3] [i_3 - 1] = (((((~(arr_10 [i_1])))) || (!var_14)));
                                var_21 = var_12;
                            }
                            var_22 = ((!(((var_7 ? (((arr_8 [i_1] [i_3]) % var_14)) : (((-(arr_11 [i_3 - 1])))))))));
                            var_23 ^= (min(((max((var_9 / var_8), (((-(arr_0 [i_0]))))))), (((var_9 / var_1) / (3380111706 / 3)))));
                        }
                    }
                }
                arr_29 [11] [i_1 - 1] = ((((((arr_9 [i_1 + 1] [i_1] [i_1] [i_1 + 1]) || (arr_9 [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 2])))) < ((((min(var_8, var_13))) ? (((var_0 != (arr_8 [i_1 - 2] [i_1 - 3])))) : (var_7 / var_15)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] = ((~((var_0 - ((((var_12 >= (arr_32 [i_0] [i_0] [i_7] [i_8])))))))));
                            var_24 = ((-(((((-(arr_34 [i_0] [i_1 - 3] [i_7] [i_8] [i_8])))) ? (arr_20 [i_8] [i_8] [i_8] [i_8] [i_7] [i_1] [i_0]) : (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_10 ? (((((((var_9 + 9223372036854775807) << (var_3 - 3398340437))) < (((var_9 + 9223372036854775807) << (((var_0 + 1571795049993334192) - 32)))))))) : ((var_4 ? -var_14 : -47531)));
    #pragma endscop
}
