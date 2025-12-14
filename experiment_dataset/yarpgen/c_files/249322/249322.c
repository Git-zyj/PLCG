/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!1) ? 1 : (~var_4)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 -= (arr_0 [i_0]);
        var_13 = var_6;
        arr_2 [i_0] [i_0] = var_0;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (-(((min(18446744073709551601, -7)) + (~3117677726783451422))));
        var_14 &= -0;
    }
    var_15 = var_0;
    var_16 = var_4;
    #pragma endscop
}
