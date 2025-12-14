/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? ((-(arr_0 [i_0] [i_0]))) : ((-(arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_3 [i_1]);
        arr_10 [i_1] [i_1] = ((arr_7 [i_1 - 2] [i_1 - 1]) ? (arr_2 [i_1 - 2] [i_1]) : ((-(((!(arr_7 [i_1] [i_1])))))));
        var_14 = ((~((~(arr_2 [i_1 - 2] [i_1 + 1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((1073741823 ? (arr_11 [i_2 + 1]) : (~-1)));
        var_15 *= ((-(arr_11 [i_2 + 3])));
        var_16 *= (arr_12 [i_2 + 3]);
        var_17 *= (((arr_11 [i_2 + 3]) ? (arr_11 [i_2 + 2]) : (arr_11 [i_2 + 1])));
    }
    var_18 = ((var_11 == (!-var_11)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_19 = ((((arr_2 [i_3] [i_4]) ? (arr_2 [i_3] [i_4]) : (arr_2 [i_3] [i_4]))));

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    arr_23 [i_3] [i_3] = (min(((~(((!(arr_0 [i_3] [i_3])))))), (((arr_22 [i_5 - 1] [i_4] [i_3]) ? (arr_19 [i_3] [i_3]) : (arr_22 [i_5 + 2] [i_4] [i_5])))));
                    arr_24 [i_3] [i_4] [i_3] = 20;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_20 ^= (((14 + (arr_12 [i_7]))));
                        var_21 *= (arr_16 [i_6]);
                        arr_31 [i_3] = (arr_15 [i_6] [i_4]);

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_6] [i_7] [i_8 + 2] [i_8] = ((-(arr_32 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7])));
                            arr_37 [i_3] = (arr_21 [i_3] [i_3]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_40 [i_3] [i_4] [i_6] [i_7] [i_9] [i_4] [i_4] = (~(arr_12 [i_3]));
                            arr_41 [i_3] [i_3] [i_3] [i_7] [i_9] = (((arr_20 [i_3] [i_7] [i_9]) ? (arr_2 [i_3] [i_7]) : (arr_11 [i_3])));
                        }
                    }
                    var_22 -= (((~(arr_0 [i_3] [i_3]))));
                    var_23 = (((arr_15 [i_3] [i_4]) ? (arr_3 [i_6]) : (arr_20 [i_3] [i_4] [i_6])));
                }
                arr_42 [i_3] = (arr_15 [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}
