/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 4294967271));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = (max(var_14, ((((max(var_0, 255)) + (1516911600 + var_12))))));
        var_15 = (max(var_15, (((~((((~14623) < (30441 ^ 19279)))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = (((-1012898209 <= var_10) ? (min(3382728939, -106)) : ((-89 ? 119 : var_12))));
        var_16 -= (((max(((8 ? 16777216 : var_11)), 5644806734520440870)) + var_11));
    }
    var_17 += (min((max(var_11, var_7)), (!var_12)));
    var_18 = var_2;
    #pragma endscop
}
