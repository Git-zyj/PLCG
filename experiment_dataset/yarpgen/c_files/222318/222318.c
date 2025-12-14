/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_13 = (104 - 797991584465034615);
                            arr_15 [i_2] [i_2] [i_2] = (((arr_8 [i_2]) != (((arr_7 [i_4] [i_3] [i_2]) ? (arr_10 [i_4] [i_2] [i_2] [i_2] [i_0]) : (arr_5 [i_1] [i_0])))));
                            var_14 ^= (((((((arr_1 [i_2]) && (arr_5 [i_0] [i_3]))))) / ((var_4 ? (arr_14 [i_4] [i_2]) : (arr_6 [i_0] [i_3])))));
                        }
                    }
                }
            }
            var_15 = (((arr_4 [i_0 + 1] [i_0 - 1] [12]) ? ((-(arr_1 [i_0]))) : -var_3));
        }
        arr_16 [i_0] = (((arr_0 [i_0] [i_0]) - ((var_0 ? (arr_14 [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0] [i_0])))));
        var_16 = (((((var_10 + (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [2])))) ? ((var_5 ? (arr_6 [i_0] [8]) : (arr_3 [i_0 + 1] [5]))) : (((arr_6 [i_0] [1]) / (arr_2 [i_0] [11])))));

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_5] [i_5] = (((arr_7 [9] [i_5 - 1] [i_0 - 1]) ? (arr_7 [i_5] [i_5 - 1] [i_0 - 1]) : (arr_7 [i_5 - 1] [i_5 - 1] [i_0 - 1])));
            var_17 = (((arr_9 [i_5 - 1] [i_0 + 1]) ? (arr_3 [i_5 + 1] [i_5]) : (((arr_3 [i_0] [i_0]) ? var_8 : (arr_14 [i_0] [i_5 - 1])))));
        }
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        arr_25 [i_6] = (((arr_21 [i_6]) ? (((arr_23 [i_6]) ? (((arr_22 [i_6]) * (arr_22 [i_6 + 2]))) : (((arr_22 [15]) ? var_9 : var_6)))) : ((((((arr_22 [i_6 - 1]) ? (arr_24 [i_6]) : (arr_24 [i_6])))) ? (((arr_21 [i_6]) ? (arr_23 [i_6 + 2]) : (arr_22 [i_6]))) : (arr_24 [i_6 + 2])))));
        var_18 = (((((~(797991584465034615 | 17648752489244516984)))) ? (((~(((arr_24 [17]) ? var_4 : (arr_21 [i_6])))))) : ((~(((arr_22 [i_6]) | (arr_21 [i_6 - 1])))))));
    }
    var_19 = var_4;
    var_20 = (~0);
    #pragma endscop
}
