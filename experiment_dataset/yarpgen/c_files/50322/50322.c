/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = var_1;
                arr_4 [i_0] [i_1] = (min((((-(((arr_2 [18] [i_0]) * (arr_0 [i_1])))))), (-6086747655069176648 / 124)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_13 = ((!((((!-24184) | 24203)))));
        var_14 ^= (arr_3 [i_2] [i_2 - 2]);
        var_15 = (((max((arr_1 [i_2]), (arr_2 [10] [i_2])))) ? (arr_6 [i_2 - 1] [i_2]) : (arr_1 [i_2 - 2]));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (min((((arr_5 [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_2 [i_3] [i_3]))), ((((arr_8 [i_3] [i_3]) | (arr_8 [i_3] [i_3]))))));
        var_16 = 123;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_15 [0] &= (((arr_1 [i_3]) * var_1));
            arr_16 [i_4] [i_3] [i_4] = ((~(arr_0 [i_4])));
            var_17 = (arr_1 [11]);
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_18 = ((-(arr_18 [i_5] [i_5])));
        var_19 = -119;
        var_20 = (((arr_18 [i_5] [7]) < (arr_18 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_25 [i_6] [i_6] = (((~var_1) / ((min((arr_24 [i_6] [i_7]), (arr_24 [15] [i_6]))))));
            arr_26 [i_6] = (arr_24 [i_6] [i_7]);
            var_21 &= (arr_21 [i_7]);
        }
        arr_27 [i_6] = (((((arr_3 [i_6] [i_6]) + ((~(arr_21 [i_6]))))) ^ ((((((var_0 && (arr_2 [i_6] [i_6]))))) * ((var_11 & (arr_20 [i_6])))))));
        var_22 = (((arr_24 [i_6] [i_6]) ? (arr_2 [i_6] [i_6]) : (((-(arr_0 [i_6]))))));
        var_23 *= (((arr_23 [i_6] [i_6]) + (((!(arr_17 [i_6] [i_6]))))));
    }
    var_24 = var_4;
    #pragma endscop
}
