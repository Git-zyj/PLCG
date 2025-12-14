/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (min((min(var_3, (arr_1 [i_0]))), (((~(arr_0 [i_0]))))));
        var_17 = (max(var_17, ((max(6216533318592707951, 0)))));
    }
    var_18 = ((0 ? var_7 : var_8));
    var_19 = var_2;
    var_20 &= -4;
    var_21 = var_6;
    #pragma endscop
}
