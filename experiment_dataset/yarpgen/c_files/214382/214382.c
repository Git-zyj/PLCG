/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_21 = ((((max(var_4, var_17))) != ((~(arr_0 [i_0 + 1])))));
        var_22 = (min(-65535, ((25636 ? -961882284 : 1))));
        var_23 = (22166 != var_3);
    }
    #pragma endscop
}
