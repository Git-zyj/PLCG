/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((arr_1 [i_0]) != 16))) & (arr_4 [i_0] [5] [i_0]))))));
                var_19 &= (105 & 363876519);
                arr_7 [i_1] [i_1] = ((min(var_14, ((max(var_11, (arr_0 [i_0] [i_1])))))));
                arr_8 [i_1] = (arr_1 [i_0]);
            }
        }
    }
    var_20 += (min(var_15, (var_0 > var_10)));
    var_21 |= var_2;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [10] |= (var_7 >= 33);
        var_22 = (max(var_22, var_6));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_23 = (min(var_23, var_5));
                                arr_23 [9] [i_4] [9] [i_3] [i_4] [i_4] = ((var_10 ^ (arr_13 [i_4])));
                                arr_24 [i_3] [2] [i_4] [2] [i_6] [i_3] = (((-9223372036854775807 - 1) ? (((arr_13 [22]) - var_15)) : -363876521));
                                arr_25 [i_7] [i_3] [i_5] [i_3] [13] = (((((arr_12 [i_3]) ? var_5 : (arr_13 [0]))) < (((41983 ? -32760 : 3999797615)))));
                            }
                        }
                    }
                    var_24 = var_6;
                }
            }
        }
        arr_26 [i_3] [i_3] = (arr_17 [i_3]);
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        arr_29 [i_8] = ((-(arr_22 [i_8] [20] [i_8 - 2] [i_8] [i_8 + 2])));
        arr_30 [i_8] [i_8] = ((((~(arr_15 [i_8] [8] [i_8 + 2]))) + ((((max((arr_14 [4] [4]), 105))) ? (arr_16 [i_8]) : var_17))));
        var_25 = (max(var_25, (((max((arr_15 [10] [10] [i_8]), (arr_13 [i_8])))))));
    }
    #pragma endscop
}
