/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 ^ (min(((min(var_12, 0))), 18446744073709551609))));
    var_19 = (max(var_19, var_7));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 -= (min(((((arr_3 [i_0 + 1]) < (arr_3 [i_0 - 3])))), ((var_15 + (arr_3 [i_0 - 2])))));
                                var_21 = (max(var_21, (((-(arr_4 [i_4] [i_2]))))));
                                var_22 = (arr_7 [i_1] [i_2] [i_3] [i_4]);
                                arr_14 [i_3] = (((max(17, (arr_4 [i_0 + 1] [i_3 + 4]))) ^ 16));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_23 = (+-18446744073709551612);
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((min((arr_8 [i_0] [i_1] [i_2] [i_5]), (arr_8 [i_2] [i_2] [i_2] [i_2]))));
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] &= ((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 1]) : var_5)));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 = (max(((var_13 & (arr_6 [i_0] [i_0]))), ((~(max(7, 1))))));
                        var_25 = (max(((min((arr_2 [i_0]), (arr_2 [i_0])))), (arr_2 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_26 ^= (max(((((arr_4 [i_0 - 3] [i_0 + 1]) > (arr_4 [i_0 - 1] [i_0 + 1])))), (((arr_4 [i_0 - 3] [i_0 - 1]) ? (arr_4 [i_0 + 2] [i_0 - 1]) : (arr_4 [i_0 - 3] [i_0 + 2])))));
                        var_27 = (max(var_27, (((~(-262143 / 7))))));
                        var_28 = (max(((-(arr_20 [i_0] [i_1] [i_1] [i_7] [i_1] [i_0]))), (arr_19 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])));
                        var_29 = (max(var_29, 6));
                        arr_24 [i_0] [i_1] [i_2] [i_7] = ((arr_3 [i_0 - 1]) ? 1 : (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1]))));
                    }
                    arr_25 [i_1] [i_1] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
