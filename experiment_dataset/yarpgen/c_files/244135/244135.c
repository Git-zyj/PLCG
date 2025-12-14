/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1071300221 / 8);
        var_10 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_11 -= ((-7924059704393012133 / (arr_0 [i_1])));
        arr_5 [i_1] [i_1] = (0 < 0);
    }
    var_12 = var_3;
    var_13 = (max(var_13, (~-0)));
    #pragma endscop
}
