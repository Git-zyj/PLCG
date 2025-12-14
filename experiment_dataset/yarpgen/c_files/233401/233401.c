/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = var_8;
        var_20 = (min(var_20, ((((var_7 == var_3) || var_2)))));
    }
    var_21 = var_17;
    var_22 = var_5;
    #pragma endscop
}
