/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((((4181179340 ? 3710664776 : (arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((584302519 >= (arr_2 [i_0])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = 3710664769;
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = (~3710664755);
                                arr_15 [i_3] [i_4] |= (arr_3 [i_2]);
                                var_14 ^= (449138641600320406 ^ 3710664776);
                                arr_16 [i_0] [i_2] [i_2] [i_0] = ((154 ? (arr_1 [i_4 - 1]) : (arr_1 [i_4 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_20 [i_0] = (((arr_18 [i_0]) ? (((((584302519 | (arr_18 [i_0])))) ? ((2290343077 ? (arr_6 [i_0] [i_1] [i_2]) : var_2)) : (arr_1 [i_3]))) : var_3));
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_5] [i_2] [i_0] = (((~var_1) % var_0));
                            }
                            var_15 -= (((((0 || (-9223372036854775807 - 1))))) | -1);
                            arr_22 [i_0] [i_1] [i_2] [i_3] = (((-62425 + 2147483647) >> ((((-(arr_1 [i_2]))) - 27699))));
                        }
                    }
                }
                arr_23 [i_0] [i_1] [i_0] = 2147483647;

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_27 [i_6] [i_0] [i_0] [i_0] = var_1;

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_16 += (arr_1 [i_0]);
                        var_17 ^= (~-var_7);
                        var_18 = (min(var_18, (((~(arr_3 [i_7]))))));
                        arr_30 [i_0] [i_0] [i_7] [i_0] [i_6] = ((((max((((var_5 ? var_2 : (arr_8 [i_0] [13] [i_0] [i_0] [i_0] [i_0])))), ((~(arr_0 [i_0])))))) || (~-120)));

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_6] [i_7] [i_7] [i_8] = (((arr_25 [i_0] [i_0]) ? (arr_17 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_7]) : ((-(arr_29 [i_1] [i_6] [i_0])))));
                            arr_34 [i_0] [i_1] [i_1] [i_1] [i_1] = ((-((20881 ? (arr_18 [i_0]) : -var_4))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_40 [i_9] [i_9] [i_6] [0] [i_9] |= (~var_11);
                                arr_41 [i_0] [i_9] = (arr_0 [i_0]);
                                var_19 ^= (arr_31 [i_0] [i_1] [i_6] [i_1] [i_9]);
                                arr_42 [i_9] [i_9] [i_0] [i_9] [i_6] [i_6] [i_9] |= ((((arr_12 [i_9 + 4] [i_9] [i_9 - 2] [4] [i_9]) ? var_11 : (arr_12 [i_9 + 1] [i_9] [i_9 - 2] [1] [i_9]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((~((((((var_7 ? var_6 : var_2))) != 9223372036854775799)))));
    var_21 |= var_12;
    #pragma endscop
}
