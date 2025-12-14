/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= ((10889 + (arr_1 [i_0])));
        arr_4 [i_0] = ((-((2147483647 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_5 [i_0] [i_0] |= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [2] = ((!(arr_2 [i_1 - 2])));
        arr_9 [15] = var_4;
    }
    var_13 = var_11;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_13 [i_2] = (-2147483630 < 6);
        arr_14 [i_2] = -2147483630;
        arr_15 [i_2] [18] &= (arr_12 [14]);
    }
    #pragma endscop
}
