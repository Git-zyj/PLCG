/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(var_8, (min((min(var_9, var_0)), (!var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 1]);
        arr_4 [i_0 + 1] [i_0] = ((-(arr_0 [i_0 + 1])));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = ((!((((arr_6 [i_1 + 4] [i_0]) ? (arr_0 [i_0]) : (arr_7 [9] [i_0]))))));
            arr_8 [i_1 - 1] = ((!(arr_5 [i_0 - 1])));
            arr_9 [i_0] [i_0] [7] = (arr_0 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 = (127 > 92);
                        arr_14 [i_0] [8] [i_0] [i_1] [i_2] [i_3] = ((!((((arr_13 [i_3] [i_3] [7] [7]) ? (arr_10 [i_0] [i_3] [1] [i_3]) : (arr_1 [i_3]))))));
                        arr_15 [i_0] [11] [i_3] [5] [i_0] [i_1] = (((-113 ? 1239052678 : -93)) << ((((((-(arr_5 [i_3]))) + 1260912117)) - 31)));
                        arr_16 [i_0] [i_0] [i_2] [i_3] = (((arr_0 [i_0 + 1]) ? (arr_5 [i_0 - 1]) : (arr_0 [i_0 + 1])));
                    }
                }
            }
            var_13 += (((arr_1 [i_0 + 1]) ? ((-(arr_5 [i_1 - 1]))) : (((!(arr_6 [i_0] [i_0]))))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_14 = ((arr_5 [i_0 - 1]) ? (arr_19 [i_0]) : ((((arr_17 [i_0 - 1]) ? (arr_17 [i_4]) : (arr_17 [i_0])))));
            var_15 = (min(var_15, ((-(arr_10 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))));
            var_16 = ((-(arr_13 [i_0 - 1] [i_0 - 1] [i_4] [i_4])));
            var_17 = (-127 & 4294967270);
        }
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = (max(((+((1584144722 ? (arr_22 [i_5 - 1]) : 92)))), (arr_21 [3])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_26 [i_5] = (arr_21 [i_6]);
            var_18 = (max(var_18, (arr_25 [i_5])));
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            arr_31 [i_5] = ((!(-83 < 111)));
            arr_32 [i_5] [22] [i_7 + 4] &= (arr_28 [i_5] [i_5]);
            var_19 = (max(var_19, (arr_22 [i_7 + 4])));
            var_20 = ((((max(((~(arr_21 [i_5]))), (arr_22 [i_5])))) ? ((((arr_29 [i_5]) ? ((((arr_24 [i_5 + 1]) < (arr_30 [i_5 - 1] [i_7] [i_7 + 4])))) : ((-(arr_22 [i_7])))))) : (min((((-(arr_20 [i_7])))), (((arr_25 [i_5]) ? (arr_24 [i_5]) : (arr_25 [i_7])))))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_21 *= (((arr_21 [i_5 - 1]) ? -67108863 : (((-(arr_24 [i_8]))))));
            arr_35 [i_5 + 1] = (arr_28 [i_5 - 1] [i_5 - 1]);
            arr_36 [i_5] [i_5] [i_8] = ((!((min((((!(arr_25 [i_8])))), (arr_29 [i_5 + 1]))))));
            arr_37 [i_8] [i_5] = (arr_30 [13] [i_8] [i_5]);
        }
    }
    #pragma endscop
}
