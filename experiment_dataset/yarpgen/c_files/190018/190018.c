/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [i_2] = -var_1;
                                var_16 = arr_0 [i_0];
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((((((63 | (arr_0 [i_0]))) + (1529553257 == -11))) | var_0));
                    var_17 = (((((var_3 ? var_12 : ((((arr_9 [i_1] [i_0] [i_1]) || 1529553271)))))) + 2765414038));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_18 ^= (arr_29 [i_8] [i_8]);
                            arr_34 [i_6] [i_6] [i_7] [i_8] [i_9] = (((arr_3 [i_5]) % (arr_25 [i_5 + 3] [i_5 + 1])));
                            var_19 &= ((!(arr_1 [i_5 + 3])));
                            var_20 = ((-(arr_28 [i_5] [i_8] [i_9])));
                        }
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_21 = ((-(((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (2136708056 - 2136708015)))));
                            arr_37 [i_5] [i_6] [i_7 + 3] [i_6] [i_5] = (arr_19 [i_5 + 2]);
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_22 = ((93 == (arr_36 [i_5 + 2] [i_6] [i_6] [i_7] [i_8] [i_8] [i_11])));
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_8] [i_11] = var_14;
                        }
                        var_23 = var_15;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {

                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            var_24 = ((70368744177663 ? var_12 : (arr_42 [i_5] [i_5 - 1] [i_5] [i_5])));
                            var_25 = ((var_0 ? (arr_19 [i_6 + 1]) : (arr_19 [i_5 + 1])));
                            arr_48 [i_5 + 2] [i_6] = ((((((arr_11 [i_5]) ? (arr_25 [i_6 - 1] [i_7]) : (arr_47 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? var_4 : (arr_10 [i_13 - 4])));
                            var_26 = 120;
                        }
                        var_27 = (((arr_6 [i_6] [i_6 - 1] [i_6 - 1]) ? (2765414038 & var_15) : var_15));
                        var_28 = arr_9 [i_5] [i_6] [i_6];
                        var_29 = (((~var_9) <= (arr_12 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_12 - 1])));
                    }

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_52 [i_14] [i_6] [i_6] [i_5] = (arr_40 [i_6] [i_6] [i_7] [i_6] [i_5] [i_6] [i_5]);
                        var_30 -= (((~var_0) == 1));

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_31 = ((((max(6225247088603219018, 623723166))) ? (((3 < (617902398 % var_9)))) : var_11));
                            var_32 = 1;
                            var_33 = (min((((((((arr_24 [i_6] [i_7 + 2] [i_14] [i_15]) / (arr_7 [i_5])))) && (arr_35 [i_5] [i_5 + 3] [i_5] [i_6 + 1] [i_7 + 2])))), (max((arr_23 [i_5 + 2] [i_6] [i_14]), var_13))));
                        }
                        var_34 = (max((min((arr_29 [i_6] [i_7 + 2]), (arr_40 [i_7 + 1] [i_6] [i_5 + 3] [i_5 + 1] [i_5] [i_6] [i_5]))), (arr_40 [i_7 + 2] [i_6] [i_5 + 1] [i_5 + 3] [i_5 - 1] [i_6] [i_5])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
