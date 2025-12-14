/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (min((max(5245182128404069393, var_5)), var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = -29;
        var_14 *= (arr_2 [i_0]);
    }
    #pragma endscop
}
