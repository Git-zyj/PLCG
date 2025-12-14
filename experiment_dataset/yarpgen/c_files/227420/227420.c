/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(((4130528080 ? 2401536126 : -8037046016514531694)), var_2))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 -= var_3;
        var_17 = 199;
        arr_2 [i_0] = 1;
        var_18 = (min(var_18, (((max(((max(165, 138))), (~var_1)))))));
    }
    #pragma endscop
}
