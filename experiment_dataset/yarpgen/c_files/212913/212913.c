/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((var_5 - (((arr_2 [i_0 - 1]) + (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = (arr_1 [i_0]);
        arr_6 [i_0] [i_0] = (((((arr_2 [i_0 + 1]) - var_17)) - (((((arr_1 [i_0]) || var_1))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = (((((((((arr_8 [i_1]) || var_16))) - var_17))) - (((((arr_8 [i_1]) - (arr_7 [1]))) - (max((arr_7 [i_1]), var_11))))));
        arr_10 [i_1] = (((min((arr_7 [i_1]), var_17))));
        arr_11 [i_1] = (-43 | 2040);
    }
    #pragma endscop
}
