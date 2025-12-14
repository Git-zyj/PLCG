/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-(2147483647 / 2147483647))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_21 = (!((min((max(var_12, (-2147483647 - 1))), ((13678101332954499601 ? var_19 : var_12))))));
        var_22 = 0;
    }
    #pragma endscop
}
