/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_0 [i_0]);
        var_12 = ((~((2147483647 & (arr_2 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((3412607054 ? 1790328929 : 1));
        var_14 = (~-118595123363692009);
        arr_6 [i_1] = ((arr_1 [i_1] [i_1]) & (((arr_1 [i_1] [i_1]) & -7366290938474552981)));
    }
    var_15 = ((var_5 ? ((var_7 ? var_3 : var_1)) : ((max(var_10, (2465 + 1))))));
    #pragma endscop
}
