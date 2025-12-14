/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = 17858;
        var_13 = (min(var_2, (((var_4 && var_7) % 4294967295))));
    }
    var_14 = ((var_5 ? (var_3 ^ 0) : var_8));
    #pragma endscop
}
