/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 += -var_13;
    var_17 = -1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [5] = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_4))) ? (arr_1 [i_0]) : -1));
        var_18 &= (~((max(var_13, var_11))));
        var_19 = (min(var_7, ((~(!var_12)))));
    }
    #pragma endscop
}
