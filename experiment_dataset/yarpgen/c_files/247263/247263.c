/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (min(var_20, (arr_1 [i_0 + 2] [i_0 - 3])));
        var_21 = (min(var_21, ((!(arr_0 [i_0 - 2])))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_22 = (((arr_1 [i_1] [i_1]) ? (arr_0 [i_1]) : (((arr_2 [i_1 + 4] [i_1]) / (arr_3 [i_1 + 4])))));
        arr_4 [i_1] = (((arr_3 [i_1]) ? (arr_0 [i_1]) : (((((!(arr_0 [i_1])))) >> (((arr_3 [i_1 - 1]) - 734705035))))));
        var_23 = ((-((((arr_3 [i_1 - 1]) || (arr_2 [i_1 - 1] [i_1 + 4]))))));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        arr_7 [i_2] = ((((!((!(arr_6 [i_2] [i_2]))))) ? (((arr_6 [i_2 + 1] [i_2]) ? (arr_6 [i_2] [i_2]) : (((arr_6 [i_2] [i_2]) * (arr_5 [i_2]))))) : ((((!(arr_6 [i_2 - 2] [i_2])))))));
        arr_8 [i_2] [i_2] = (((((arr_5 [i_2]) ? (((arr_6 [i_2] [i_2]) % (arr_6 [i_2] [i_2]))) : (arr_5 [i_2]))) | ((((!(arr_6 [i_2] [i_2])))))));
        var_24 = ((-(((arr_6 [i_2 - 3] [i_2]) ? (arr_6 [i_2 - 3] [i_2]) : (arr_5 [i_2])))));
        var_25 = (max(var_25, (((arr_6 [6] [0]) ? (arr_6 [i_2 + 1] [14]) : ((((!(arr_6 [i_2 + 2] [18])))))))));
        arr_9 [i_2] = ((((~((~(arr_5 [i_2])))))) ? (((arr_6 [i_2 - 3] [i_2]) | (arr_6 [i_2] [i_2]))) : (arr_6 [i_2 - 1] [i_2]));
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = ((-(arr_13 [i_3 - 1])));

            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                arr_17 [i_3] [i_4] = (arr_5 [i_4]);
                arr_18 [i_5] [i_4] [i_3] = (((arr_11 [i_3 - 2]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 - 1])));
                arr_19 [i_3] [12] [i_5] &= (((arr_2 [i_5 + 2] [i_3 - 1]) != (arr_16 [i_5 + 1])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_26 = ((~(arr_13 [i_3])));
                            var_27 = (min(var_27, ((-(arr_3 [i_4])))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_29 [4] [i_4] [i_5] [i_8] = ((-(((arr_10 [i_3]) ? (arr_13 [i_5 - 1]) : (arr_23 [i_3 - 1] [11] [i_4] [i_5] [i_5] [i_8])))));
                    var_28 ^= (((arr_12 [i_3 + 1] [i_5 + 2]) && (arr_12 [i_3 - 1] [i_5 + 1])));
                    var_29 = (arr_25 [i_8] [i_5 + 2] [i_5] [i_8] [i_3 - 1]);
                }
            }
            arr_30 [i_4] [i_3 - 2] [i_3 - 1] = ((-(arr_20 [i_4] [i_4] [i_3] [i_3] [i_3])));
            arr_31 [i_3] [i_3] [8] = ((~(arr_27 [i_3] [i_4] [i_3 - 1] [i_4] [i_4] [i_3 + 1])));
        }
        var_30 = (((arr_24 [i_3 - 2]) / (arr_1 [i_3 - 2] [i_3 - 2])));
        var_31 = (((arr_16 [i_3 - 1]) && (arr_16 [i_3 - 1])));
        arr_32 [i_3 - 1] [i_3] = ((arr_12 [i_3 - 1] [i_3 + 1]) ? (arr_12 [i_3] [i_3 - 2]) : (arr_12 [i_3] [i_3 + 1]));
        var_32 = (min(var_32, ((((arr_21 [i_3] [i_3 - 1] [i_3]) ? (arr_10 [i_3]) : (arr_13 [i_3 - 1]))))));
    }
    var_33 = var_0;
    #pragma endscop
}
