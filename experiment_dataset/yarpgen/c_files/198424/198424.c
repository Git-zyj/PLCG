/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0 + 2] [9]);
        arr_5 [i_0] = ((1 ? 0 : 1));
        arr_6 [i_0] [i_0 + 3] = (!var_3);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_11 [0] |= var_4;
        arr_12 [2] = (((arr_7 [i_1 + 2] [i_1 + 2]) ? (arr_7 [i_1 + 4] [i_1 + 4]) : (arr_7 [i_1 - 2] [i_1 - 2])));
    }
    var_11 = (var_4 | var_3);
    var_12 = 0;
    #pragma endscop
}
