/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!-643462993)));
    var_21 = 643463017;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = (((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) % (arr_2 [i_0])));
        var_23 = -0;
        var_24 = (min(130, 15244));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_25 = (min(var_25, ((((((var_16 + (arr_5 [i_1] [i_1])))) ? (((arr_5 [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))) : (((arr_2 [i_1]) ? var_1 : (arr_5 [i_1] [i_1]))))))));
        arr_6 [i_1] = (arr_3 [i_1]);
        var_26 |= arr_2 [i_1];

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] = (arr_9 [i_1] [i_2]);
            arr_11 [i_2] = (((arr_1 [i_1]) + (arr_4 [i_2])));
            var_27 = ((-(arr_5 [i_1] [i_2])));
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_28 = (max(((-(arr_13 [i_3]))), 643463028));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_29 = ((((!(arr_13 [i_3]))) ? (arr_20 [i_3]) : (min((arr_15 [i_4] [i_3] [i_6]), (arr_20 [i_3])))));
                        var_30 = (((((59 ? -54 : 0)) + 2147483647)) >> (((((arr_19 [20]) ? (arr_19 [6]) : (arr_19 [2]))) - 1765631979)));
                    }
                }
            }
        }
        arr_24 [i_3] [i_3] = (((((arr_23 [i_3] [i_3] [i_3] [i_3]) / (min((arr_19 [i_3]), (arr_21 [4] [i_3] [i_3] [i_3] [i_3]))))) ^ (arr_23 [i_3] [i_3] [i_3] [i_3])));
        var_31 = (max(((min((arr_13 [i_3]), (arr_13 [i_3])))), (min((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_21 [i_3] [i_3] [i_3] [i_3] [5])))));
    }
    var_32 = var_11;
    #pragma endscop
}
