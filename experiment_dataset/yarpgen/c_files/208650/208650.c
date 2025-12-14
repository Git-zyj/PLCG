/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_9, var_13))) | (var_12 + var_6))) < (((45433 ? (!16) : var_3))));
    var_18 = var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = ((((((((min(0, var_3))) < 0)))) >= (min((min((arr_0 [i_0 + 1]), (arr_1 [i_0] [i_0]))), (-32767 - 1)))));
        var_20 = (min(var_20, (!var_0)));
    }
    #pragma endscop
}
