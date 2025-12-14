/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((~(arr_5 [i_0] [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_10 = -4095;
                        var_11 = 2113929216;
                        var_12 = ((14 - (arr_5 [i_3 + 1] [i_1] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (((251 <= 63400) ? (((-(arr_3 [i_2] [i_4])))) : (arr_10 [i_4 - 2])));
                        var_13 = ((-(arr_0 [i_0] [i_1])));
                        var_14 -= (((arr_13 [14] [i_4 + 2] [i_4 + 2] [i_4 - 2]) ? (arr_13 [i_4] [5] [i_4] [i_4 + 2]) : (arr_2 [i_1])));
                        arr_16 [i_0] [3] [i_1] [i_4 - 2] = (~(arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]));
                        arr_17 [i_0] [14] = ((arr_10 [i_1]) - (arr_2 [i_4 - 1]));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_15 |= (((arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 2]) > (arr_18 [7] [i_5 - 2] [i_5 - 2] [i_5 - 1])));

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_16 ^= (((arr_4 [i_5 - 1]) ? (arr_2 [i_5 + 1]) : (arr_12 [i_5 - 2])));
                            var_17 = ((2136 && (arr_13 [i_1] [i_1] [i_5 - 2] [i_6 - 1])));
                            arr_22 [10] [20] [20] [20] [i_6] [16] = 63400;
                        }
                    }
                    var_18 = ((((arr_10 [13]) / 1809143831)) * ((var_4 ? (arr_6 [i_0]) : (arr_10 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_19 = ((((max((arr_12 [i_8 + 2]), (arr_12 [i_8 + 2])))) < (((arr_12 [i_8 - 1]) >> (((arr_12 [i_8 - 2]) - 200))))));
                                var_20 = max((((11427781687564889040 != (arr_27 [i_8 + 1] [i_8] [i_7 - 2])))), ((-(arr_25 [i_0] [i_0] [11] [i_7 - 1] [i_8] [13]))));
                                arr_28 [i_0] [i_0] [i_1] = var_9;
                                var_21 = (min(var_21, (((((min((arr_24 [9] [9] [9] [13] [9] [i_8 - 1]), (arr_26 [i_2] [i_2] [15] [i_7] [12] [i_8 - 1] [i_8 - 1])))) - (min((arr_25 [i_0] [i_7] [i_8] [i_8] [i_8 - 2] [i_8 + 1]), (arr_25 [i_2] [i_2] [i_7] [i_7] [17] [i_8 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= (var_1 | (((!(var_1 >= 251)))));
    var_23 = (max(var_23, var_3));
    var_24 |= ((var_1 ? (63395 - 5) : -var_7));
    #pragma endscop
}
