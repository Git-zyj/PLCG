/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((min(1, 0))) < ((max(0, var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = -1;
        arr_5 [i_0] = (2611562045289934060 | (((65535 ? var_8 : var_6))));
        arr_6 [i_0] [i_0] = 15562481509968427266;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((~(arr_8 [i_1])));
        arr_10 [i_1] [i_1] = (((arr_8 [i_1]) ^ (arr_8 [i_1])));
    }
    #pragma endscop
}
