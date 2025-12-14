/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = max(18412708724058511422, var_6);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((((arr_0 [i_0]) ^ (arr_1 [i_0]))) & ((((4 ? 0 : (arr_0 [i_0]))) ^ (arr_1 [i_0])))));
        var_15 = (arr_0 [12]);
    }
    #pragma endscop
}
