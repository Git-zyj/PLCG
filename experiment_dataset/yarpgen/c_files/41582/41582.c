/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 ^= (var_10 == (var_3 & var_5));
        var_21 ^= (-(var_8 + var_2));
        var_22 = -var_2;
        var_23 = (min(var_23, (((var_5 ? (var_1 > var_15) : (max(((var_11 ? var_17 : var_5)), (var_8 || var_1))))))));
    }
    var_24 &= (-(!4083560202));
    #pragma endscop
}
