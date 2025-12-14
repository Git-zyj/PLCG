/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [0] &= ((!(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((~((~(arr_1 [i_0])))));
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_6 [i_1 + 2] [i_1]);
        arr_10 [i_1] = (arr_7 [i_1]);
    }
    var_13 = var_12;
    var_14 = (!(((-(~var_12)))));
    var_15 &= var_4;
    #pragma endscop
}
