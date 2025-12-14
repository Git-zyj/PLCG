/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = min((arr_2 [i_0] [i_0 - 2]), (!var_11));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_21 &= (arr_0 [i_1 + 1]);
            var_22 = (arr_6 [i_1]);
        }
    }

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_23 = arr_8 [i_2];
        var_24 = (min(var_24, ((((arr_6 [i_2]) ? var_6 : (arr_2 [12] [i_2]))))));
        var_25 = ((!((max(3907451270, var_8)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_26 = (((arr_5 [i_3]) ? (min((arr_7 [i_3]), (arr_12 [i_3]))) : (arr_5 [i_3])));
        var_27 += (arr_5 [i_3]);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_28 += ((((0 != (arr_9 [i_4])))) & (((max((arr_1 [i_4] [i_4]), (arr_1 [0] [i_4]))))));
        var_29 = (((arr_13 [i_4]) + ((((((arr_5 [i_4]) / (arr_2 [i_4] [9])))) ? (((((arr_6 [i_4]) >= (arr_7 [i_4]))))) : var_10))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_30 = (arr_18 [i_5]);
                    var_31 = (((arr_22 [i_5] [i_5] [i_5] [i_5]) == (arr_2 [i_5] [i_5])));
                    var_32 = (((arr_18 [i_5]) ? (arr_18 [18]) : (arr_18 [i_7])));
                }
            }
        }
        var_33 = var_8;
    }
    #pragma endscop
}
