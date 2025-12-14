/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 66;
    var_11 = max(var_5, (min(var_3, (4294967295 / -67))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 -= ((-var_1 % ((min(-7, (~7))))));
        arr_4 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (((var_9 + 18210746247478915226) > (235997826230636390 - 3504892186)));
        arr_8 [i_1] [i_1] = var_9;
        var_14 = var_1;
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_15 *= ((!((66 < (var_1 == 4194303)))));
        arr_12 [i_2] [i_2] = var_0;
        arr_13 [i_2] = var_4;
        var_16 = (max(var_16, 1864084735));
    }
    #pragma endscop
}
