/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_18 -= (max(((3 ? (max(var_9, (arr_0 [i_0 + 2] [i_0]))) : var_10)), 4294967289));
        arr_3 [i_0] = (arr_2 [i_0]);
        var_19 = ((((((((3 ? var_1 : var_14)) == ((((65535 >= (arr_0 [9] [9]))))))))) != (min((arr_0 [6] [6]), ((((arr_0 [i_0] [i_0]) || var_11)))))));
    }
    var_20 = (min(var_20, var_15));
    var_21 = ((var_17 ? (var_15 <= 3) : (max(var_12, (var_15 == 4294967295)))));
    #pragma endscop
}
