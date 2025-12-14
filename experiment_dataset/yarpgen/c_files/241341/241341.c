/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = ((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = ((!(arr_0 [i_0])));
                        arr_14 [i_3] [i_2] [i_3] [i_0] [8] = ((var_9 ? (arr_9 [i_3]) : (((arr_12 [i_3] [i_2] [i_0] [i_0]) / (arr_8 [i_3] [i_3])))));
                        arr_15 [i_0] [i_0] = (((arr_9 [i_0]) - ((-(arr_10 [i_0] [i_0])))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_0] = (((arr_3 [i_0] [10] [i_0]) ? (arr_11 [i_0]) : (arr_9 [i_0])));
            arr_19 [i_0] = (((arr_12 [i_0] [i_0] [i_4] [i_4]) ? (arr_6 [i_0] [i_0]) : (arr_0 [i_0])));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            arr_23 [i_0] = ((((((arr_10 [13] [i_5 + 2]) & var_0))) ? var_0 : (-2091413749 & 60)));
            arr_24 [12] [i_5] = (arr_20 [i_5] [12] [i_0]);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_28 [i_0] [i_6] [i_6] = (arr_11 [i_0]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_37 [i_8] |= var_9;
                            arr_38 [i_7] [i_0] = ((var_6 >= (((var_16 ? (arr_9 [i_0]) : var_8)))));
                        }
                    }
                }
            }
        }
        arr_39 [16] &= 1336473286;
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_43 [2] [2] = ((((min((arr_30 [i_10] [14] [14] [i_10]), (((arr_29 [0] [i_10]) ? (arr_3 [4] [i_10] [4]) : (arr_33 [i_10] [i_10] [i_10] [i_10] [i_10])))))) ? var_6 : (arr_32 [i_10] [i_10] [i_10] [i_10] [i_10])));
        arr_44 [14] |= var_6;
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {
                    arr_54 [i_12] [14] [i_13] [i_11 - 1] = ((-(arr_46 [18] [i_12])));
                    arr_55 [i_12] [i_13] = (((((((~(arr_47 [i_12]))) - (arr_50 [i_13] [i_13] [i_13])))) * (((((var_11 ? var_6 : (arr_46 [i_11 - 2] [i_13])))) ? (min((arr_49 [i_12]), (arr_53 [i_13] [i_12] [i_13]))) : (arr_49 [i_12])))));
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
