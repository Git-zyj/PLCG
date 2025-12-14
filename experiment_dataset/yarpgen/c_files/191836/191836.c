/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 -= (((var_13 > (arr_0 [18]))));
        var_16 = ((((((96 ? (arr_0 [10]) : 2873)))) ? var_1 : 6842845184201620240));
    }
    var_17 = (((var_5 / var_13) || (((min(65521, var_13))))));
    #pragma endscop
}
