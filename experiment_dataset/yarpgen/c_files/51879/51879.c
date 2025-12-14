/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_11 = var_0;
        var_12 = (((arr_1 [i_0 + 2]) > (((min((arr_0 [i_0 + 1]), -23848))))));
    }
    var_13 = (max(var_9, 7733503429294600117));
    #pragma endscop
}
