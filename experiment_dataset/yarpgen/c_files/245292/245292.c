/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((!(((-(arr_1 [i_0]))))));
        var_22 = (max(var_22, ((min((min((!132), (!var_0))), (var_16 >= 132))))));
    }
    #pragma endscop
}
