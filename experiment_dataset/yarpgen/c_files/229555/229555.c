/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((!42) ? (!21126) : var_5));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_2 ? var_1 : (arr_0 [i_0])))));
        var_12 = (~-30872);
    }
    #pragma endscop
}
