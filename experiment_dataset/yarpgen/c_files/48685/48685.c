/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((255 < ((((min(-1530255415, 1410009088)) <= var_0)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (min(var_19, 14310));
        var_20 = ((!((min((arr_2 [i_0]), -10513)))));
    }
    #pragma endscop
}
