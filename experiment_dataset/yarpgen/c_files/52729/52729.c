/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 25159));
    var_15 = ((!((max(((918029805 ? 11 : var_0)), ((max(4294967295, var_5))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = ((!((min(15, 218250571)))));
        var_17 = ((-(max(15, (~var_5)))));
    }
    var_18 = ((max(var_6, (max(var_12, var_0)))));
    #pragma endscop
}
