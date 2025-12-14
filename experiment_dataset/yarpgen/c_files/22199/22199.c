/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_14;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = var_12;
            arr_6 [i_1] [i_1] = ((0 ? (arr_1 [i_0]) : (arr_3 [i_0 - 2])));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((!(arr_9 [i_2])));
        arr_11 [10] |= (((arr_7 [0]) << (((arr_7 [14]) - 246418203))));
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] |= max(var_2, (0 <= 0));
        arr_15 [i_3] = 1;
        arr_16 [i_3] [i_3] = (min(((((arr_9 [i_3]) || ((((arr_7 [i_3]) ? var_8 : 1)))))), 31705));
    }
    var_19 = 1;
    var_20 = var_12;
    #pragma endscop
}
