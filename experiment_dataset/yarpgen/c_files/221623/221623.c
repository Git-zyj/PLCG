/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (max(var_15, ((min(var_13, var_6)))));
        var_16 = (((var_11 + var_3) - (var_0 - var_10)));
    }
    var_17 = (min(var_17, 7996341037048037018));
    var_18 = var_12;
    #pragma endscop
}
