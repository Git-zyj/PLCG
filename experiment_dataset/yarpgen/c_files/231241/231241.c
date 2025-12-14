/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, (((-((min(-29, -32764))))))));
    var_17 = var_6;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((((10071945057244713307 ? 3581 : 0))) ? (((arr_2 [i_0 + 3] [i_0]) ? (arr_1 [i_0 - 2]) : (arr_2 [i_0] [i_0]))) : (arr_1 [i_0 + 2]));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
