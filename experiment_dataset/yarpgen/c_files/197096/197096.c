/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((166 || var_9), var_9))) ? (max(((max(var_9, 1224361573))), (max(17242034999525231839, 166)))) : -1089099879));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 += ((((arr_1 [i_0]) >> ((((max(-31309, 166))) - 155)))));
        var_22 = (((max((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) << (((arr_2 [i_0]) - 3431183992)))))) | ((-((-(arr_1 [i_0])))))));
    }
    var_23 = var_3;
    #pragma endscop
}
