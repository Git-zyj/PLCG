/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (28209 + var_4);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (~1020255930677568571);
        var_19 = -5587948137899244847;
        var_20 = ((-(((1 > (arr_1 [i_0]))))));
    }
    #pragma endscop
}
