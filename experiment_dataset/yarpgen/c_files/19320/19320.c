/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-229 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0])));
        arr_3 [i_0] |= (7475166412442524224 | -262144);
        arr_4 [6] = ((-(arr_1 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_14 = (min(var_14, 16));
                        arr_17 [i_4] = ((17 ? (arr_7 [21]) : 34));
                    }
                    arr_18 [i_1] [i_2] [23] = (~32);
                }
            }
        }
        arr_19 [i_1] = ((-1 ? (arr_15 [i_1 + 2]) : var_13));
        arr_20 [i_1] = 8070450532247928832;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [2] = -17874;
        var_15 = (max((((max(18170, (arr_11 [1]))) + (arr_9 [i_5] [i_5]))), -72825398));
        var_16 = (max(var_16, (arr_21 [i_5])));
        var_17 *= ((((max((~148), (arr_15 [i_5])))) ? ((((!(arr_9 [i_5] [i_5]))))) : ((-3739863074 << ((((~(arr_13 [i_5] [9] [i_5]))) - 293565378))))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_18 = (min(var_18, (((((-(((arr_8 [13] [12]) * var_6)))) * -232)))));
        arr_28 [9] = (arr_9 [i_6] [5]);
    }
    var_19 = (-(max((var_1 + -11583), var_8)));
    #pragma endscop
}
