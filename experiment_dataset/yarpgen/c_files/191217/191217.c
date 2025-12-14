/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_16 = (max(var_16, -8047688633898666398));
        var_17 -= (!var_12);
    }
    var_18 = var_2;
    var_19 = ((max(var_10, 8047688633898666398)));
    #pragma endscop
}
