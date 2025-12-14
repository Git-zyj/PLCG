/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [11] [1] = (arr_1 [i_0]);
        arr_5 [i_0] = ((-((1 ? 3888740389 : (!1283806878)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_14 [i_1] [i_2] = ((!(arr_0 [i_1])));
            arr_15 [i_2] [i_1] [i_2] = (((arr_3 [i_1]) ? ((var_17 ? (arr_8 [i_1]) : (arr_1 [i_1]))) : (arr_2 [i_2])));
        }
        arr_16 [i_1] [i_1] |= (~(min(((-(arr_1 [i_1]))), (9924 << 0))));
    }
    var_19 |= var_0;
    var_20 = var_11;
    #pragma endscop
}
