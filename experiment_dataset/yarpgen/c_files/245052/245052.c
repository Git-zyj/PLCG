/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_1 ? ((-(max(var_7, var_7)))) : (((((var_2 ? var_4 : var_4))) ? (max(var_7, var_2)) : var_6))));
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_7;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [12] [i_3] |= ((-(var_4 % var_0)));
                                var_12 = var_0;
                                var_13 = (min(var_13, var_6));
                                arr_17 [i_1] [i_0] [i_2] [1] [i_4] = ((((min(-var_6, var_7))) ? var_8 : ((-(max(var_1, var_8))))));
                            }
                        }
                    }
                    var_14 = (max(var_14, (min((!var_4), ((var_4 ? var_6 : var_9))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_5] |= ((-(min(var_1, var_5))));
                                var_15 = (min(var_15, ((!((((var_5 << (var_6 - 3704395811)))))))));
                                arr_29 [i_1] [i_0] = (((((var_4 ? var_1 : var_9))) ? (min(var_0, ((var_4 ? var_1 : var_7)))) : -var_7));
                                var_16 = (((((((((var_2 ? var_2 : var_0))) ? var_9 : ((var_4 ? var_7 : var_6)))) + 9223372036854775807)) >> ((var_4 ? ((var_9 ? var_4 : var_7)) : (((var_7 + 9223372036854775807) << (((var_9 + 20) - 18))))))));
                            }
                        }
                    }
                    var_17 |= ((-(((min(var_3, var_3)) >> ((((var_7 ? var_8 : var_6)) - 18271756043231574757))))));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_32 [i_0] [i_0] = ((-((var_6 ? ((((var_9 + 2147483647) >> (var_1 - 16683620352967887397)))) : -var_1))));

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_18 = (max(var_18, ((min((((var_9 + 2147483647) << (var_3 - 1444459532))), (!var_0))))));
                            arr_38 [i_0] [i_1] [i_8] [i_10] [i_10] |= (((((var_3 ? ((var_1 ? var_5 : var_8)) : var_0))) ? (max(((var_7 ? var_5 : var_8)), -var_8)) : var_0));
                            var_19 = var_4;
                        }
                        arr_39 [i_0] [i_0] [i_1] [i_9] = var_3;
                        arr_40 [i_0] [i_0] [i_0] [4] [i_0] = ((!(var_3 ^ var_5)));
                    }
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_20 = (max(var_20, (((((var_9 ? var_6 : var_9))) ? var_3 : (min(var_7, var_8))))));
                        arr_43 [i_0] [i_8] [i_1] [i_0] = (((((-var_7 ? var_8 : (var_2 == var_7)))) ? ((((((var_1 ? var_5 : var_0))) ? var_6 : ((var_8 ? var_2 : var_5))))) : (max(-var_8, var_5))));
                        var_21 = (min(var_21, var_8));
                    }
                    arr_44 [i_0] [i_0] [i_0] = ((((((((var_4 ? var_1 : var_7))) ? -var_7 : var_4))) ? ((((((var_2 ? var_9 : var_2))) ? (~var_5) : -var_2))) : (((((var_5 ? var_3 : var_9))) ? ((var_5 ? var_8 : var_5)) : (((var_1 ? var_9 : var_3)))))));
                }
            }
        }
    }
    #pragma endscop
}
