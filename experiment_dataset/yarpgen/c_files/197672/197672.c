/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((var_3 ? (arr_0 [i_0]) : 18119)) * (arr_1 [i_0]))));
        var_10 = (max((min(32759, (arr_1 [i_0]))), ((~(arr_0 [i_0])))));
        var_11 = (min(var_11, (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_12 &= ((1 ? (-9223372036854775807 - 1) : 15));
        var_13 = (max(var_13, (arr_6 [i_1])));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_14 += ((var_2 == (arr_0 [17])));
        arr_9 [i_2] [i_2] = arr_2 [i_2];

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [i_2] [2] = (arr_11 [6] [6] [i_2]);
            arr_13 [4] |= (arr_1 [i_2]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_5] = (arr_10 [i_2]);
                        var_15 = (max(var_15, ((((arr_8 [18]) << (((((arr_16 [10] [i_4] [10] [i_6]) ? (arr_8 [i_5]) : (arr_17 [i_6] [i_5] [17] [i_2]))) - 4294967223)))))));
                        arr_24 [i_2] [i_5 + 1] [i_2] = (((arr_0 [i_5 - 1]) + (arr_0 [i_5 + 3])));
                        arr_25 [i_2] [i_2] = (!6);
                    }
                }
            }
            var_16 = (((arr_22 [i_4] [i_4] [i_4] [i_2]) < ((((arr_22 [i_4] [i_4] [12] [12]) || (arr_11 [i_2] [i_2] [8]))))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        var_17 = (arr_30 [i_2] [i_8] [i_8 + 2] [i_8 + 1]);
                        arr_32 [i_2] [i_2] [i_2] [i_8 + 2] = (arr_19 [i_2] [i_8 + 1] [i_8 + 1] [i_7 - 3] [i_2]);
                        var_18 = arr_20 [i_2] [i_2] [i_8 + 2];
                    }
                }
            }
            var_19 *= (arr_28 [i_2] [14] [i_2]);
            var_20 = (arr_0 [i_2]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_37 [0] |= (arr_29 [i_9] [i_9] [i_9] [1]);
            var_21 = ((!(((~(arr_7 [i_2] [i_9]))))));
            var_22 = 1098974756864;
        }
        var_23 -= ((-((((arr_15 [18] [i_2]) < (arr_27 [i_2]))))));
        arr_38 [i_2] [14] &= (((arr_16 [i_2] [i_2] [i_2] [i_2]) || (arr_16 [i_2] [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_24 = (9223372036854775807 / -3294802762879200842);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 15;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_25 = ((18091 ? (arr_21 [i_12]) : (arr_21 [i_12])));
                                var_26 = (~85);
                                var_27 = (!var_2);
                                var_28 += (arr_36 [i_13 - 1] [i_12 + 1] [i_12 + 1]);
                            }
                        }
                    }
                    arr_51 [i_12] [i_11 + 2] [i_10] [i_12] = (((arr_17 [i_12 - 1] [i_11 + 1] [i_10 - 1] [i_10 + 2]) <= (arr_17 [i_10 - 1] [i_10 - 1] [i_11 - 1] [i_10 - 1])));
                    var_29 = ((-(arr_29 [i_10 + 3] [i_12 - 1] [i_11 - 2] [i_10])));
                }
            }
        }
        var_30 -= (1 ? 2566434626 : 0);
    }
    #pragma endscop
}
