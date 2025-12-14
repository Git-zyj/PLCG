/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-((var_8 ? 13425 : var_10)))) | (5 <= 13439)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_1] [7] [i_1] [i_1] [i_0] [i_1] = var_10;
                        arr_11 [i_0 - 1] [i_1 + 1] [i_1] [i_1] [i_3] [i_3] = ((var_9 ? (arr_2 [i_0]) : ((((max(-320, 52110))) ? ((4261035169564246099 ? 17 : var_9)) : var_6))));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_18 = 1;
                        arr_16 [i_1] [i_1] = (((max(var_11, (min((arr_13 [i_4] [i_1] [i_1] [i_0]), (arr_12 [7] [i_1] [i_2] [i_4]))))) == (((((var_15 ? (arr_2 [i_1]) : var_14)) << var_9)))));

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_19 -= 6637351327364368405;
                            arr_19 [10] [0] [10] [10] [i_1] [i_2] [i_0] = ((~(var_16 >= var_3)));
                            arr_20 [i_1] [i_1] [i_2 - 2] [i_1] [2] = var_0;
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [11] [i_1] [8] [3] [i_6] = ((~((2847930907 ? (arr_17 [10] [i_1 + 1]) : (arr_7 [i_1 - 1] [7] [i_1 - 1] [i_6 + 2])))));
                            arr_24 [10] [i_1] [i_2] [3] [i_1] [i_0 + 1] = (arr_5 [i_1]);
                        }
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_20 *= var_2;
                        arr_28 [i_0] [i_1] [i_1] = ((((var_1 >= (arr_13 [i_0 - 1] [i_1] [i_0 - 2] [i_0 + 1]))) ? ((320 ? (arr_13 [8] [i_1] [8] [i_0 + 1]) : var_13)) : (2587999204 >= 337)));
                    }
                    arr_29 [i_1] [7] [i_1] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_37 [i_1] [i_2] [2] [i_1] = ((+(((arr_33 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) % var_6))));
                                var_21 = var_4;
                                arr_38 [i_0] [0] [i_2] [i_8] [i_1] = ((var_13 ? var_13 : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_9 ? (((var_11 ? var_6 : (var_10 & var_4)))) : (((var_5 ? -5 : 46825))));
    #pragma endscop
}
