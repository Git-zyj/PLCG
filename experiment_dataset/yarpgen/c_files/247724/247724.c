/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247724
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
                var_19 = ((!(((((1 == (-9223372036854775807 - 1))) ? -1 : (arr_1 [i_0]))))));
                var_20 = (min(var_20, (((((min((arr_0 [1]), (arr_0 [0])))) && (((var_2 == 19) == ((var_18 ? (arr_3 [6] [i_1] [i_0 - 1]) : var_3)))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_21 = ((var_13 ? 4607182418800017408 : 218));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [8] [i_1] [i_0 - 2] |= var_0;
                                var_22 *= (((((var_13 ? var_17 : -7849344398199940031))) ? var_13 : (!var_18)));
                                var_23 = 27394;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [18] = (((((1 ? var_5 : var_6))) ? (arr_3 [i_0] [22] [1]) : var_1));
                    arr_13 [i_0 - 1] [i_0] [2] = ((-(arr_6 [i_0] [i_1] [10])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_24 = (((-20316 | var_16) ? var_11 : -var_18));
                                var_25 |= (((arr_19 [6]) ? (arr_20 [21] [i_1 - 1] [i_1 - 1] [i_0] [i_0 - 2] [1]) : -101));
                                var_26 = ((~(3488865498 <= -15318)));
                                var_27 ^= ((((((arr_3 [10] [i_1] [i_1]) ? var_11 : (arr_16 [i_7])))) | (arr_5 [i_7] [i_6] [i_0])));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_5] = var_16;
                    arr_23 [i_0] [i_0] [i_0] = ((var_16 ? var_3 : (!var_2)));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_28 |= (((((-((((arr_29 [i_0 - 1] [i_0 - 1] [4] [3]) <= var_2)))))) ? (((((-(arr_5 [i_0] [i_0] [21])))) ? (var_16 % 27390) : ((var_14 ? var_6 : 9505)))) : var_14));

                            for (int i_10 = 0; i_10 < 23;i_10 += 1)
                            {
                                arr_34 [7] [i_0] = (((((arr_18 [i_1 - 1] [11] [i_0 + 1]) ? 1 : (arr_18 [i_1 - 1] [7] [i_0 + 1]))) <= (-85 % 38133)));
                                arr_35 [i_10] [i_1] [i_0] [i_1] [i_0 - 1] = 1;
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                var_29 = (min(var_29, (((91 == ((~(12633 <= var_8))))))));
                                var_30 = (min(var_30, ((max((min((min(var_5, (arr_17 [4]))), var_13)), var_8)))));
                            }
                        }
                    }
                }
                var_31 = (max((((((var_14 ? 3488865508 : var_13))) ? (min(var_10, -9223372036854775805)) : 32786)), -9223372036854775791));
            }
        }
    }
    var_32 = ((((!(!var_11))) && var_10));
    var_33 += (((((211 ? var_2 : (var_10 == 1006701590)))) ? 32792 : (((!1) ? ((var_4 ? var_17 : 3488865500)) : (!var_1)))));
    #pragma endscop
}
