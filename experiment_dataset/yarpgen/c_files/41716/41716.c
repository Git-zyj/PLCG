/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 - 1] |= (min((arr_0 [i_0 + 2] [i_0 + 2]), (((((1501547293451444534 ? 5 : var_4))) && (arr_0 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0 + 2] [9] = (max(var_6, (((arr_0 [i_0] [i_0]) ? ((var_1 ? (arr_0 [i_0] [i_0]) : var_6)) : (min((arr_1 [i_0 - 2]), var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = var_3;
        arr_7 [i_1] [i_1] = ((~((var_11 ? 0 : 4115869436))));
        arr_8 [i_1] = 1;
    }
    var_13 = -var_12;
    var_14 ^= var_1;
    #pragma endscop
}
